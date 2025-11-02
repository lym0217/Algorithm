#include<stdio.h>
#include<algorithm>
int arr[1001];
int main()
{
    int i, j, sum = 0, chk1 = 0, chk2 = 0;
    
    for(i=0; i<9; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    std::sort(arr,arr + 9);
    for(i=0; i<9; i++){
        for(j=i+1; j<9; j++)
        if(sum-arr[i]-arr[j] == 100){
            chk1 = i;
            chk2 = j;
        }
    }
    for(i=0; i<9; i++){
        if(i == chk1 || i == chk2 ) continue;
        printf("%d\n",arr[i]);
    }
    return 0;
}