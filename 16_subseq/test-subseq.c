#include <stdlib.h>
#include <stdio.h>

size_t maxSeq(int * array, size_t n);

int main() {
  int array1[] = {1, 2, 4, 1};
  int array2[] = {2, -3, 5, 9,15};
  int array3[] = {-5};
  int array4[] = {5, 4, 3, 6, 10, 15, -1, 7, 8, 2};
  int array5[] = {3,3,3,4};
  if (maxSeq(NULL, 0)) {
    printf("Failed on NULL\n");
   return EXIT_FAILURE;
  }
  if (maxSeq(array1, 0)) {
    printf("Failed on 1,2,4,1 for NULL\n");
    return EXIT_FAILURE;
  }
  if (maxSeq(array1, 4) != 3) {
    printf("Failed on 1,2,4,1\n");
    return EXIT_FAILURE;
  }
  if (maxSeq(array2, 5) != 4) {
    printf("Failed on 2,-3,5,9,15\n");
    return EXIT_FAILURE;
  }
  if (maxSeq(array3, 1) != 1) {
    printf("Failed on 5\n");
    return EXIT_FAILURE;
  }
  if (maxSeq(array4, 10) != 4) {
    printf("Failed on 5,4,3,6,10,15,-1,7,8,2\n");
    return EXIT_FAILURE;
  }
  if (maxSeq(array5, 4) != 2) {
    printf("Failed on 2,2,2,4\n");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
