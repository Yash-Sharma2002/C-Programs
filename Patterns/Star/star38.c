#include<stdio.h>
void main(){
    int num,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        for(j=0;j<=num*2+1;j++){
         if( j==num && j==0  || i+j>=num && i+j<=num*2+1) printf("*");   
         else printf(" ");
        }
        printf("\n");
    }
}
