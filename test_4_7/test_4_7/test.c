//#include<stdio.h>
//int main()
//{
//	printf("%s\n","hello world!");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	for (i = 0;i<4;i++)
//	{
//		for (j =0 ;j < i;j++)
//		{
//			printf("%s", " ");
//		}
//		printf("%s\n","****");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a,b,c,max;
//	printf("��������������\n");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		max=a;
//	}
//	else
//	{
//		max=b;
//	}
//	if(c>max)
//	{
//		max=c;
//	}
//	printf("��������������Ϊ��%d",max);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	for (i = 0;i<5;i++)
//	{
//		for (j =0 ;j <=4-i;j++)
//		{
//			printf("%s", "* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	for (i=0;i<5;i++)
//	{
//		for(j=0;j<=3-i;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<=i*2;j++)
//		{ 
//			printf("*");
//		}
//		printf("\n");
//	}
//return 0;
//}
#include<stdio.h>
int main()
{
	int i,j;
	for (i=0;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=8-i*2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

