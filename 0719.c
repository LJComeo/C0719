#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * myString()
{
	char buffer[6] = { 0 };
	char *s = "Hello World!";
	for (int i = 0; i < sizeof(buffer)-1; i++)
	{
		buffer[i] = *(s + i);
	}
	return buffer;
}


char first_single(const char *str)//�����ַ����е�һ��ֻ����һ�ε��ַ�
{
	int asc[255] = { 0 };
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		asc[str[i]]++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (asc[str[i]] == 1)
		{
			return str[i];
		}
	}
	return '\0';
}

int main()
{
	/*char acx[] = "abc";
	acx[1] = 'd';
	char acy[] = { 'a', 'b', 'c' };
	acy[1] = 'd';*/

	//char *str[3] = { "stra", "strb", "strc" };
	//char * p = str[0];//pָ��stra����Ԫ�صĵ�ַ��Ҳ����s
	//int i = 0;
	//while (i < 3)
	//{
	//	printf("%s ", p++);//stra tra ra
	//	i++;
	//}

	/*int x[] = { 1, 2, 3, 4, 5, 6 }, *p = x;
	p += 2 ;
	printf("%d ", *p++);*/

	//printf("%s\n", myString());

	//int i = 1;
	//printf("%d %d\n", sizeof(i++), i);

	//char a[1000];
	//int i;
	//for (i = 0; i < 1000; i++)
	//{
	//	a[i] = (char)(-1 - i);
	//}
	//printf("%d\n", strlen(a));//char ���͵ķ�Χ:0-255

	char str[] = "abaccdeff";
	printf("%c\n", first_single(str));
	system("pause");
	return 0;
}

