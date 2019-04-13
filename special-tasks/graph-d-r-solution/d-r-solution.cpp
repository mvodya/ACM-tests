/*
 * Simple solution without any difficult graph logics. Just formula's and simple
 * human instructions for drawing graph by edges pair connection.
 *
 * @mvodya 2019
 */
#include <iostream>

using namespace std;

int main() {
  int d, r;
  // Input
  printf("D = ");
  scanf("%d", &d);
  printf("R = ");
  scanf("%d", &r);

  // Calculation
  int b = (d - r);
  int a = (2 * d) - (2 * b) + 1;

  // Testing...
  if (b < 0 || d / r > 2 || d / r < 1) {
    printf("Error input data.\n");
    return 0;
  }

  /* Solution */
  printf("\nNodes: %d\n", a + b);
  // Circle
  for (int i = 1; i < a; i++) printf("(%d; %d)\n", i - 1, i);
  printf("(%d; 0)\n", a - 1);
  // Tail
  if (a != b)
    for (int i = a; i < (b + a); i++) printf("(%d; %d)\n", i - 1, i);
  return 0;
}