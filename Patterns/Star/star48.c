#include<stdio.h>
void main(){
    int num=6;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(int i = 0;i<=num;i++){
        for(int j = 0;j<=num*2;j++){
            if(i+j==num || i+j==num*2 || (i==0 && j>num/2*2) || (i==num && j<num/2*2) || j==num  ) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}