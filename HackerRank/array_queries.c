#include<stdio.h>
void main(){
    int arr[2],last_answer = 0;
    for(int i = 0;i<2;i++)
    scanf("%d",&arr[i]);
    
    int n = arr[0];
    int narr = arr[1];
    // storing the next input of queries
    int queries[n][narr];
    for(int i=0;i<narr;i++){
        for(int j=0;j<narr-n;j++){
            scanf("%d",&queries[i][j]);
        }
    }

    int randarr[2];
    for(int i = 0;i<narr;i++){
        int idx = (queries[i][1] ^ last_answer)%n;
        if(queries[i][0]==1){
            randarr[idx] = queries[i][2];
        }
        else if(queries[i][0]==2){
            last_answer = randarr[idx];
            printf("\n%d\n",last_answer);
        }
    }
}