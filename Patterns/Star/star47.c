#include<stdio.h>
void main(){
    int num=8,i,j;
    for(i=0;i<=num;i++){
        for(j=0;j<=num;j++){
            if(!(i+j>=5 && i<=j+1 && i+1>=j && i+j<=11))
          printf("*");   
         else printf(" ");
        }
        printf("\n");
    }
}
