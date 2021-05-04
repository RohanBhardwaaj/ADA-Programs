#include<stdio.h>  
int temp;  
  
void heapify(int array[], int size, int i)  
{  
int largest = i;    
int left = 2*i + 1;    
int right = 2*i + 2;    
  
if (left < size && array[left] >array[largest])  
largest = left;  
  
if (right < size && array[right] > array[largest])  
largest = right;  
  
if (largest != i)  
{  
temp = array[i];  
    array[i]= array[largest];   
    array[largest] = temp;  
heapify(array, size, largest);  
}  
}  
  
void heapSort(int array[], int size)  
{  
int i;  
for (i = size / 2 - 1; i >= 0; i--)  
heapify(array, size, i);  
for (i=size-1; i>=0; i--)  
{  
temp = array[0];  
    array[0]= array[i];   
    array[i] = temp;  
heapify(array, i, 0);  
}  
}  
  
void main()  
{  
int array[] = {1, 10, 2, 3, 4, 1, 2, 100,23, 2};  
int i;  
int size = sizeof(array)/sizeof(array[0]);  
  
heapSort(array, size);  
  
printf("Sorted Elements\n");  
for (i=0; i<size; ++i)  
printf("%d\n",array[i]);  
}  
