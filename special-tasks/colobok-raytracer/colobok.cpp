#include <cmath>
#include <iostream>
#include <vector>

// Size of finale image
const int SIZE_X = 512, SIZE_Y = 512;

// Define math vector
struct vec {
  float x, y, z;  // 3 coords
  // Constructor
  vec(float a, float b, float c) {
    x = a;
    y = b;
    z = c;
  }
  // Empty constructor
  vec() {}
  // Math operations
  vec operator+(vec u) { return vec(x + u.x, y + u.y, z + u.z); }  // Summation
  vec operator*(float v) { return vec(x * v, y * v, z * v); }      // Scale
  float operator%(vec u) { return x * u.x + y * u.y + z * u.z; }   // Scalar
  vec operator^(vec u) {  // Vector multiplication
    return vec((y * u.z - z * u.y), (z * u.x - x * u.z), (x * u.y - y * u.x));
  }
  vec operator!() { return *this * (1 / sqrt(*this % *this)); }  // Normal
};
// Define color as vector
typedef vec color;

// Object type sphere
struct sphere {
  vec pos;
  float rad;
  sphere(vec p, float r) {
    pos = p;
    rad = r;
  };
};
// Array of spheres
std::vector<sphere> spheres{sphere(vec(-13, 0, -7), 10), sphere(vec(-14, -2, -8), 1), sphere(vec(-12, -2, -8), 1)};

// Random
float R(void) { return (float)rand() / RAND_MAX; }

// Tracer
int trace(vec origin, vec direction, float& distance, vec& ray) {
  distance = 1e9;
  int intersect = 0;
  float p = -origin.z / direction.z;

  // No hit, ray goes to ground
  if (p > 0.01) {
    distance = p;
    ray = vec(0, 0, 1);
    intersect = 1;
  }

  // TEST SPHERES
  for (auto obj : spheres) {
    vec h = origin + obj.pos;
    float b = h % direction;
    float c = h % h - obj.rad;
    float q = b * b - c;
    if (q > 0) {
      // Check for distance from camera
      //  -b +/- sqrt(b^2-4ac) ?
      float s = -b - sqrt(q);

      if (s < distance && s > 0.01) {  // Min distance for visibility
        distance = s;
        ray = !(h + direction * distance);
        intersect = 2;
        if (obj.rad == 10) intersect = 3;
      }
    }
  }

  return intersect;
}

// Sampler
color sample(vec origin, vec direction) {
  float distance;
  vec ray(0, 0, 0);
  int intersect = trace(origin, direction, distance, ray);

  // Sky cast
  if (intersect == 0) {
    return vec(0.3, 0.2, 1) * pow(1 - direction.z, 4);
  }

  vec coordinate = origin + direction * distance;
  // Light source
  vec light = !(vec(34 + R(), 29 + R(), 46) + coordinate * -1);
  // Halfway vector between viewer and light source
  vec half = direction + ray * (ray % direction * -2);

  // Lambertian factor
  float lamb = light % ray;
  // Illumination factor (lamb coeff > 0)
  if (lamb < 0 || trace(coordinate, light, distance, ray)) {
    lamb = 0;
  }

  // Calculate color w/ diffuse and specular component
  float color = pow(light % half * (lamb > 0), 99);

  // Floor cast
  if (intersect == 1) {
    coordinate = coordinate * 0.2;
    // Check if it's odd or even and give the appropriate color,
    // even tiles won't have the 1 bit set
    return ((int)(ceil(coordinate.x) + ceil(coordinate.y)) & 1 ? vec(1, 3, 1)
                                                               : vec(3, 3, 3)) *
           (lamb * 0.2 + 0.1);
  }

  // Sphere cast
  // return vec(color, color, color) + sample(coordinate, half) * 0.1;
  if (intersect == 3)
  return vec(3, 3, 1) * (lamb * 0.2 + 0.1) + sample(coordinate, half) * 0.01;
  return vec(color, color, color) + sample(coordinate, half) * 0.5;
}

int main() {
  printf("P6 %d %d 255 ", SIZE_X, SIZE_Y);  // Header for PPM

  // Camera settings
  vec cam = !vec(-3, -16, 0);                   // Direction
  vec cam_up = !(vec(0, 0, -1) ^ cam) * 0.002;  // Up vector
  vec cam_right = !(cam ^ cam_up) * 0.002;      // Right vector
  vec cam_offset = (cam_up + cam_right) * -256 + cam;

  // RENDERING
  for (int y = 0; y < SIZE_Y; y++)
    for (int x = 0; x < SIZE_Y; x++) {
      // Accumulation color of pixel
      color pixel(10, 10, 10);

      // Trace rays for pixel
      for (int r = 64; r--;) {
        // Depth of view blur (random offset)
        vec depthBlur =
            cam_up * (R() - 0.5) * 99 + cam_right * (R() - 0.5) * 99;

        // Set camera focal point and cast ray then accumulate color for pixel
        vec origin = vec(17, 16, 8) + depthBlur;
        vec direction =
            !(depthBlur * -1 +
              (cam_up * (R() + x) + cam_right * (y + R()) + cam_offset) * 16);
        // Sampling
        pixel = sample(origin, direction) * 3.5 + pixel;
      }

      // Print pixel
      printf("%c%c%c", (int)pixel.x, (int)pixel.y, (int)pixel.z);
    }
  return 0;
}