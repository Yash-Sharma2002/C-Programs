#include<stdio.h>
void main(){
    int num;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(int i = num/2;i>=0;i--){
        int cr = 64+i*2+2;
        for(int j = 0;j<=num/2;j++){
            if(i+j>=num/2)
            printf("%c",--cr);
            else printf(" ");
        }
        for(int j = num/2+1;j<=num;j++){
            if(i+num/2>=j)
            printf("%c",--cr);
        }
        printf("\n");
    }
}