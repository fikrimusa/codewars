// Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.
// move_zeros(10, int [] {1, 2, 0, 1, 0, 1, 0, 3, 0, 1}); // -> int [] {1, 2, 1, 1, 3, 1, 0, 0, 0, 0}

#include <stddef.h>

void move_zeros(size_t len, int arr[len])
{
  size_t write = 0;
  int temp;
  
  for(size_t read = 0; read < len; read++){
    if(arr[read] != 0){
      if(write != read){
        temp = arr[write];
        arr[write] = arr[read];
        arr[read] = temp;
      }
      write++;
    }
  }
}