#include <stdio.h>
int n;
int a[50];
void dfs(int x,int num)
{
    int i;
    if(x==n+1)
    {
        printf("%d\n",num);
        return;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
            dfs(x+1,num*10+i);
            a[i]=0;
        }
    }
}
int main()
{    
    n=6;
    dfs(1,0);
    return 0;
}   
