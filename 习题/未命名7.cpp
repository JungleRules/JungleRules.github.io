#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int n=0;
    int p,q,e,f,g,h;
    for(p = x;p<=y;p++){
        for(q = x;q<=y;q++){
            for(e=x;e<y;e++){
                for(f=y;f>x;f--){
                    if((p%e==0&&q%e==0)&&(f%p==0&&f%q==0)){
                        g = e;
                        h = f;
                    }
                }
            }
            if(g==x&&h==y){
                n++;
            }
        }
    }
    return 0;
}
