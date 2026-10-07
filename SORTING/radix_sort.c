#include <stdio.h>

int getmax(int arr[],int n){
    int max = arr[0];
    for(int i = 0;i<n;i++){
     if(max < arr[i]){
        max = arr[i];
     }
     else{
        continue;
     }
    }
    return max;
}

void count_sort(int arr[],int n,int exp){
    
}