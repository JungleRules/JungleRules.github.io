#include<stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    int x[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&x[n]);
        if(x[n]%8==0){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
