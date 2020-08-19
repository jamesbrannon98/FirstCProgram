#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "FirstCProgram.h"
void print_array(int elements[], int size) {
  int i;
  printf("array:");
  for (i = 0; i < size; i++) {
    printf(" %d", elements[i]);
  }
  printf("\n");
}

void testingSmallest() {
  int numbers[] = {0,5,-1,3,-10,100};
  int sizes[] = {0, 3, 6, 2, -2};
  int expected[] = {INT_MAX, -1, -10, 0, INT_MAX}; 
  int i;
  int actual; 
  for (i = 0; i < 5; i++) {
    actual = smallest(numbers, sizes[i]);
    print_array(numbers, sizes[i]);
    printf("Your answer = %d\n", actual);
    if (actual == expected[i]) {
      printf("----pass----\n");
    }
    else {
      printf("----fail----\n");
    }
  }
}

void testingReverse() {
  const char *sources[] = {
    "Welcome to Computer Science!",
    "abcdef",
    "_ ab  cd  ef *"
  };
  const char *expected[] = {
    "!ecneicS retupmoC ot emocleW",
    "fedcba",
    "* fe  dc  ba _"
  };
  char destination[50];
  int i;
  for (i = 0; i < 3; i++) {
    printf("source: \"%s\"\n", sources[i]);
    // these two lines is to set up destination
    // to make it easy to detect when students didn't
    // add terminating null character.
    memset(destination, 'x', 49);
    destination[49] = 0;
    reverse(sources[i], destination);
    printf("destination: \"%.49s\"\n", destination);
    if (strcmp(destination, expected[i]) == 0) {
      printf("----pass----\n");
    }
    else {
      printf("----fail----\n");
    }
  }
}
int myAddOK(int a, int b) {
  int sum = a + b;
  int neg_over = a < 0 && b < 0 && sum >= 0;
  int pos_over = a>=0 && b >= 0 && sum < 0;
  return !neg_over && !pos_over;
}
void testingAddOK() {
  int a[] = {0, -1, INT_MIN, INT_MAX, 0xFFFF0000};
  int b[] = {10, INT_MAX, -1, 3, 0xFFFF0001};
  int i;
  int ok;
  int okStudent;
  for (i = 0; i < 5; i++) {
    printf("a = %d, b = %d, a + b = %d\n", a[i], b[i], a[i]+b[i]);
    ok = myAddOK(a[i], b[i]);
    okStudent = addOK(a[i], b[i]);
    printf("ok to add solution: %d\n", ok);
    printf("ok to add student answer: %d\n", okStudent);
    if(okStudent == ok) {
      printf("----pass----\n");
    }
    else {
      printf("----fail----\n");
    }
  }
}
int main() {
  printf("Testing smallest:\n");
  testingSmallest();
  printf("====================\n");
  printf("Testing reverse:\n");
  testingReverse();
  printf("====================\n");
  printf("Testing addOk:\n");
  testingAddOK();
  return 0;
}
