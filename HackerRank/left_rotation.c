#include<stdio.h>
void main(){
    int arr[2];
    for(int i = 0;i<2;i++)
    scanf("%d",&arr[i]);
    
    int n = arr[0],left_rotaion = arr[1],narr[n];
    
    // storing the numbers
    for(int i=0;i<n;i++){
        scanf("%d",&narr[i]);
    }
    int _counter=0;
    for(int i=left_rotaion;i<n;i++){
        printf("%d",narr[i]);
        if(i==n-1) i=-1;
        _counter++;
        if(_counter==n) break;
    }
    
}