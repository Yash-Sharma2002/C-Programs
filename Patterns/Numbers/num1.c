#include<stdio.h>
void main(){
    int num,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        for(j=0;j<=num;j++){
         if(i+j>=num) printf("%d",i+1);   
        }
        printf("\n");
    }
}