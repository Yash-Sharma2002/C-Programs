// I was unable to do this by using matrix method this was doubt
#include<stdio.h>
void main(){
    int num;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(int i = 0;i<num/2;i++){
        int cr = 64;
        for(int j = 0;j<=num;j++){
            if(i>=j)
            printf("%c",++cr);
            else printf(" ");
        }
        printf("\n");
    }
    for(int i = num/2;i<=num;i++){
        int cr = 64;
        for(int j = 0;j<=num-i;j++){
            if(i>=j)
            printf("%c",++cr);
            else printf(" ");
        }
        printf("\n");
    }
}