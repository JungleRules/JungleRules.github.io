#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string[10000];
	scanf("%s",string);
	printf("%s\n",string); //����ַ��� 
	char add[]="Hello";
	printf("%s\n",add);//Hello
	add[0]='B';
	printf("%c\n",add[0]);//B
	printf("%s\n",add);//Bello
	//%s ������һ�����ʣ�ֱ���ո񡢻س���tabΪֹ
	char apple[12];
	scanf("%c",&apple[1]);
	printf("%c",apple[1]); 
	printf("strlen = %lu\n",strlen(add));//����s���ַ������ȣ���������β��0 
	printf("sizeof = %lu\n",sizeof(add));//�������鳤�ȣ�ָ����ռ�ݴ�С������\0 
	return 0;
}

