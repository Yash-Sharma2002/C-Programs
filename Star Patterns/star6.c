// pending

#include <stdio.h>
int main() {
   int n,j;
   printf("Enter the number of martix:");
   scanf("%d",&n);
   for(int i = n;i>=1;i--){
        for(int j=1;j<i;j++){
           printf(" ");
       }
       printf("*");
        for (int j = 1; j <=n-i; j++)
            {
                printf(" ");
            }
            for ( j = 1; j <n-i; j++)
            {
                printf(" ");
            }
            if(j>=1) {printf("*");}
       printf("\n");
   }
    printf("\n");
  for(int i = 1;i<=n/2;i++){
      for(int j=1;j<i;j++){
          printf(" ");
      }
      printf("*");
        for (int j = 0; j <=n-i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j <=n-i-1; j++)
            {
                printf(" ");
            }
          printf("*");
       printf("\n");
  }
   return 0;
}