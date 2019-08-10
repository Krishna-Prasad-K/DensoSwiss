#include<stdio.h>
int main()
{
    int p,d,sum=0;
    scanf("%d%d",&p,&d);
    while(p>0){
    sum+=p;
    p=p-(p*d)/100.0;
    }
    printf("%d",sum);
}
