#include<stdio.h>
void main(){
    int num,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        for(j=0;j<=num;j++){
         if(i==j || j>i) printf("%d",j-i+1);
         else printf(" ");
        }
        printf("\n");
    }
}
