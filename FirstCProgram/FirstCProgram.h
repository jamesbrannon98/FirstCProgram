#ifndef HW2_H
#define HW2_H
// given an array of integers and the size of the array, return the 
// value of the smallest element in the array.
// Return INT_MAX if size <= 0.
int smallest(int elements[], int size); 

// given a source string, and a destination string, write the
// reversed source string into destination. Make sure you terminate
// the reversed string properly with a 0.
// You may assume that the destination array is big enough to hold
// the reversed string and null terminator.
void reverse(const char source[], char destination[]);


// given two int values, return 1 if they can be added without 
// overflow or underflow, otherwise return 0.
// Your code must follow the Bit-Level Integer Coding Rules
// on the textbook, page 128-129, you can assume w = 32. 
// The only allowed operations in your code are:
// ! ~ & ^ | + << >>
// This requirement is more restrictive than the coding rules. 
// Note that this is different from practice problem 2.30
// because relative comparison operators (<, >, <=, and >=) are forbidden
// by the Bit-Level Integer coding rules. And local operations && || are not
// allowed either.
int addOK(int a, int b);
#endif
