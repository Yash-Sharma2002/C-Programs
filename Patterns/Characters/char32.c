#include<stdio.h>
void main(){
    int num = 6,cr=64;
    for(int i = 0;i<=num;i++){
        for(int j = 0;j<=i;j++){
            printf("%c",++cr);
            if(cr==70) cr=64;
        }
        printf("\n");
    }
}