#include <stdio.h>

void swap(int *a,int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int partition(int arr[],int low,int high){
    int i = low -1;
    int pivot = arr[high];
    for(int j = low;j < high;j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[high],&arr[i+1]);
    return i+1;
}

void quick_sort(int arr[],int low,int high){
    if(low < high){
        int par = partition(arr,low,high);
    quick_sort(arr,low,par -1);
    quick_sort(arr,par+1,high);
    }

}

void print_array(int arr[],int size){
   for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    print_array(arr, n);
    
    quick_sort(arr, 0, n - 1);
    
    printf("Sorted array: ");
    print_array(arr, n);
    return 0;
}