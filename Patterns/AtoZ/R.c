#include<stdio.h>
void main(){
    int num=6;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(int i = 0;i<=num;i++){
        for(int j = 0;j<=num;j++){
            if(j==0 || i==0 && j<num/2 || j==num/2 && i<=num/2 || i==num/2 && j<num/2 || i==j+num/2) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}