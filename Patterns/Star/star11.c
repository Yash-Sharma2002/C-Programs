#include<stdio.h>
void main(){
    int num,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(i=num/2;i<=num;i++){
        for(j=0;j<=num;j++){
         if(!(i<=j+num/2 && i+j<=num+num/2)) printf("*");   
         else printf(" ");
        }
        printf("\n");
    }
}
