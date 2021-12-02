//https://exam.nowcoder.com/cts/17162512/summary#4/{%22uid%22%3A%22CAA96E994B1894E85D2B1AAD67C4DCC3%22%2C%22type%22%3A%22100%22%2C%22index%22%3A1}
#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int c = a;
   int n = b;
   do{
   	    printf("Destroy it, all this-%08d\n",c);
   	    c--;
   	    if(c==0){
   	        printf("Destroy it, all this-00000000");
   	        break;
   	    }
   	    n--;
   }while(n>0);
   return 0;
}
