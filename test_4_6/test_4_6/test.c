#include<stdio.h>
//int a = 100;
//int main()
//{
//	//char ch = 'A';
//	//printf("%c\n",ch);
//	//int age =20;
//	//printf("%d\n",age);
//	//printf("%d\n",sizeof(char));
//	//printf("%d\n",sizeof(short));
//	//printf("%d\n",sizeof(int));
//	//printf("%d\n",sizeof(long));
//	//printf("%d\n",sizeof(long long));
//	//printf("%d\n",sizeof(float));
//	//printf("%d\n",sizeof(double));
//	//int a = 10;
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 2;
//	int sum = 2;
//	//输入数据-输入函数scanf
//	scanf("%d%d",&num1,&num2);//取地址符号&
//	sum = num1+num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	printf("num = %d\n", num);
//	return 0;
//}
//int global=2021;
//void test()
//{
//	printf("test()--%d\n",global);
//}
//	
//int main()
//{
//	test();
//	printf("%d\n",global);
//	return 0;
//}
int main()
{
	//未声明得标识符
	//声明extern外部符号
	extern int g_val;
	printf("g_val=%d\n",g_val);
	return 0;
}