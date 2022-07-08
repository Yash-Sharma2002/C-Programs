#include<stdio.h>
void main(){
    int num,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(i=0;i<=num/2;i++){
        for(j=0;j<=num;j++){
         if(i<=num/2 && i+j<=num && i<=j ) printf("%d",i+1);   
         else printf(" ");
        }
        printf("\n");
    }
}
