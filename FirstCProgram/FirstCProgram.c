#include <limits.h>
#include <string.h>
#include "FirstCProgram.h"

/*Iterates through the list of elements,
 * and determines if the current element is
 * less than the current min. Returns the
 * maximum if the array is empty.
 */
int smallest(int elements[], int size) {
  int i;
  int min;
  if (size <= 0) {
   return INT_MAX;
  }
  for (i = 0; i < size; i++){
   if (elements[i] < min){
    min = elements[i];
   }
  } 
  return min;
} 

/*Replaces the destination array with the
 * characters of the source array in backwards order.
 */
void reverse(const char source[], char destination[]) {
  int i = 0;
  int j = 0;
  while (source[i] != 0){
    i++;
  }
  for (i = i - 1; i >= 0; i--){
    destination[j] = source[i];
    j++;
  }
  destination[j] = 0;
}

int addOK(int a, int b) {
  int sum = a + b;
  int sign_a = a >> 31;
  int sign_b = b >> 31;
  int sign_sum = sum >> 31;
  return !~((~sign_sum | sign_a | sign_b) & (sign_sum | ~sign_a | ~sign_b));
}
