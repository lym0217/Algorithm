#include <stdio.h>
int n;
int f(int a, int b)
{
    int check = 0;
    for(int i=3; i<=n; i*=3){
        if(a%i == i/2+1 && b%i == i/2+1) check = 1;
        else if(a%i >= (i/2+1)-(i/3)/2 && a%i <= (i/2+1)+(i/3)/2 && b%i >= (i/2+1)-(i/3)/2 && b%i <= (i/2+1)+(i/3)/2) check=1;
    }
    return check;
}
int main()
{
    int i ,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(f(i,j) == 1) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}