#include <stdio.h>
int apple(int i)
{
    if(i == 1){
        return 0;
    }
    if(i == 2){
        return 1;
    }
    if(i>2){
        int a;
        for(a = 2;a<i;a++){
            if(i%a==0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
int main(void)
{
    int x ; 
    scanf("%d",&x);
    int n;//n为可用次数；
    n=x/50;
    int i;
    int j = 0;//得到的钻石j
    for(i = 1;i<n;i++){
        if(apple(i)==1){
            j+=3;
        }
    }
    printf("%d\n",j);
    while(j>7){
        i++;
        if(apple(i)==1){
            j+=3;
        }
        j=j-7;
    }
    printf("%d",i);
    return 0;
}
