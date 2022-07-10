#include<stdio.h>
void main(){
    int num=6;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(int i = 0;i<=num/2;i++){
        for(int j = 0;j<=num;j++){
            if(i+j==num/2 || i+num/2 == j || i==2 && (j>1 && j<num-1)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}