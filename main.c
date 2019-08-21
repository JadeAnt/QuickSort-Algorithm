#include <stdio.h>
#include <stdlib.h>

void swap(int array[], int first, int second){
  int temp;
  
  temp = array[first];
  array[first] = array[second];
  array[second] = temp;
}

int partition(int array[], int p, int r){
  int q = p;
  
  for(i = p; i <= r-1; i++){
    if(array[i] <= array[r]){
      swap(array, i, q);
      q++;
    }
  }
  
  swap(array, r, q);

  return q;
}

void quickSort(int array[], int p, int r){
  if( p < r){
    int q = partition(array, p, r);
    quickSort(array, p, q - 1);
    quickSort(array, q + 1, r);
}

void print(int array[], int size){
  int i;
  for(i = 0; i < size; i++){
    printf("%d ", array[i]);
  }
  
  printf("\n");
}

int main(){
  int array = [];
  int size = sizeof(array) / sizeof(array[0]);
  
  printf("Given array: \n");
  print(array, size);
  
  quickSort();
  
  printf("Sorted array: \n");
  print(array, size);

}
