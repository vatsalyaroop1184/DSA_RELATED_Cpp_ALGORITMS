#include <stdio.h>

void insertion_sort(int arr[],int n){
    for(int i = 1;i < n;i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}

void print_array(int arr[],int n){
    
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n];
    int i = n;
    while(i--){
        scanf("%d",&arr[i]);
    }

    insertion_sort(arr,n);
    print_array(arr,n);
    return 0;
    
}