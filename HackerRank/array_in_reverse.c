// without pointers
#include<stdio.h>
void main(){
    int n;
    printf("Enter the array length:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Original array:\n");
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    printf("\nReversed array:\n");
    for(int i = n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}


// with pointers
#include<stdio.h>
void main(){
    int n;
    printf("Enter the array length:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Original array:\n");
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    int *a = &arr[0];
    printf("\nReversed array:\n");
    for(int i = n-1;i>=0;i--){
        printf("%d\t",*(a+i));
    }
}