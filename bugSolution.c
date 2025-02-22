#include <stdio.h>
#include <limits.h>
int main() { 
  int i = 1; 
  int *ptr = &i; 
  if (i < INT_MAX) { 
    *ptr = 2; 
  } else { 
    printf("Integer overflow detected!"); 
    return 1; 
  } 
  printf("%d", i); 
  return 0; 
} 