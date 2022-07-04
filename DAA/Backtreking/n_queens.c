#include<stdio.h>

void set_queen(int arr[], int n, int row, int col)
{
    arr[row] =1;

}

void check_queen(int arr[], int n, int row, int col)
{
    int i, j;
    for(i=0; i<row; i++)
    {
        if(arr[i] == col)
        {
            printf("\nNot possible");
            return;
        }
        j = row - i;
        if(arr[i] + j == col)
        {
            printf("\nNot possible");
            return;
        }
        if(arr[i] - j == col)
        {
            printf("\nNot possible");
            return;
        }
    }
}
void main(){
   int arr[8][8],i,j,k;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            arr[i][j]=0;
        }
    }
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            set_queen(arr[i],8,i,j);
            check_queen(arr,8,i,j);
            for(k=0;k<8;k++){
                printf("%d ",arr[i][k]);
            }
            printf("\n");
        }
    }
}