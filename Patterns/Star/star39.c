#include<stdio.h>
void main(){
    int num;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(int i = 0;i<=num;i++){
        for(int j = 0;j<=num;j++){
            if( j==num/2 && i!=num/2 || i==num/2 && !(i==num/2 && j==num/2)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}