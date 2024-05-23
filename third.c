#include<stdio.h>
int main ()
{
    int a,b ,greatest;
    printf("enter two integer");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is greatest",a);
    }
    else{
        printf("%d is greatest",b);
        return 0;
    }
}