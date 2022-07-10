#include<stdio.h>
void main(){
    int num=6;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(int i = 0;i<=num;i++){
        for(int j = 0;j<=num;j++){
            if(j==num/2|| i==0  ) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}