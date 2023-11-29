#include<stdio.h>

int main()
{
    int n,m,a,b;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0; i<m; i++){
        scanf("%d %d",&a,&b);
        n-=(a*b);
    }
    if(n==0) printf("Yes");
    else printf("No");
    return 0;
}