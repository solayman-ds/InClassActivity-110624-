#include <stdio.h>
#include <stdlib.h>
 

void findLargest(int* arr, int N)
{
    int i;
 
    
    for (i = 1; i < N; i++) {
        // largest element
        if (*arr < *(arr + i)) {
            *arr = *(arr + i);
        }
    }
 

    printf("The Largest Number: %d\n", *arr);
}
 

int main()
{
    int i, N = 4;
 
    int* arr;
 
    arr = (int*)calloc(N, sizeof(int));
 
 
    *(arr + 0) = 14;
    *(arr + 1) = 12;
    *(arr + 2) = 49;
    *(arr + 3) = 20;
 
  
    findLargest(arr, N);

    return 0;
}