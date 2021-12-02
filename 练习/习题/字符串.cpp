#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string[10000];
	scanf("%s",string);
	printf("%s\n",string); //输出字符串 
	char add[]="Hello";
	printf("%s\n",add);//Hello
	add[0]='B';
	printf("%c\n",add[0]);//B
	printf("%s\n",add);//Bello
	//%s 读的是一个单词，直到空格、回车、tab为止
	char apple[12];
	scanf("%c",&apple[1]);
	printf("%c",apple[1]); 
	printf("strlen = %lu\n",strlen(add));//返回s的字符串长度，不包括结尾的0 
	printf("sizeof = %lu\n",sizeof(add));//返回数组长度，指针所占据大小，包括\0 
	return 0;
}

