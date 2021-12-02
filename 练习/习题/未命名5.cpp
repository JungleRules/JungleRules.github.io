#include<stdio.h>
int main()
{
	int x[1000]={0,};
	for(int i=0;i<10;i++) {
	    scanf("%d",&x[i]);
    }
    for(int j = 0;j<10;j++){
    	printf("%d",x[j]);
    }
    	return 0;
}
