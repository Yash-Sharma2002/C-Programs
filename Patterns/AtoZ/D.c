#include<stdio.h>
void main(){
    int num=6;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(int i = 0;i<=num;i++){
        for(int j = 0;j<=num;j++){
            if(i==0 && j<num || i==num && j<num || j==0 || (j==num && !(i==0 || i==num))) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}