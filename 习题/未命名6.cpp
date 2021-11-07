#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pi[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&pi[i]);
    }
    int j;
    int k=1;
    int a;
    int b;
    if(n == 1){
        printf("1");
    } else {
        a = 0;
        b = 0;
        for(j=1;j<n;j++){
            if(pi[j]>a){
            	k++;
            	b = a;
				a = pi[j];
			} else if (pi[j]<a&&pi[j]>b){
                a = pi[j];
                b = pi[j];
            }
        }
        printf("%d",k);
    }
    return 0;
}
