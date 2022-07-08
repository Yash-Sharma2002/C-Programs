#include<stdio.h>
void main(){
    int num;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(int i = 0;i<num/2;i++){
        int cr = 64;
        for(int j = 0;j<=num;j++){
            if(i+j>=num)
            printf("%c",++cr);
            else printf(" ");
        }
        printf("\n");
    }
    for(int i = num/2;i<=num;i++){
        int cr = 64;
        for(int j = 0;j<=num;j++){
            if(i-j<=0)
            printf("%c",++cr);
            else printf(" ");
        }
        printf("\n");
    }
}