#include<stdio.h>
int main()
{
    int n,b,c;
    scanf("%d",&n);
    b = n;
    c = 0;
    if(n==0) {
        printf("0");
    }
    if(n>=0){
        for(;b>0;b/=10){
            n=b;
            n%=10;
            c=c*10+n;
        }
        printf("%d",c);
    }
    if(n<0){
    	int a = 0-b;
        for(;a>0;a/=10){
            n = a;
            n%=10;
            c=c*10+n;
        }
        printf("-%d",c);
    }
    return 0;
}
