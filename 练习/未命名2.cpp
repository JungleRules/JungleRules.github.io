#include <stdio.h>
long long lbwnb[10];
int main()
{
    char a[5];
    for(int i = 0;i<5;i++){
    	scanf("%c",&a[i]);
    	getchar();
    	a[i]++;
	}
	for(int j = 0;j<5;j++){
		printf("%c\t",a[j]);
	}
    return 0;
}

