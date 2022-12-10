#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} Point;

int main() {
  Point * mypoint = NULL;

  mypoint = (Point *)malloc(sizeof(Point));

  mypoint->x = 10;
  mypoint->y = 5;

  printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

  free(mypoint);

  return 0;
}
