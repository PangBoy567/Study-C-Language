#define _CRT_SECURE_NO_WARNINGS 1//解决代码一定放在第一行
#include <stdio.h>
//int main()
//{
//	printf("你好世界\n");
//	return 0;
//}

//写代码
// 1. 写出main函数
//    C语言是从主函数的第一行开始执行的，是入口

//编写代码（以上方代码为例）
//(int)是函数的返回类型 (main)是函数名 {}之间是函数体
//int是整型，return返回与其呼应

//main函数是程序的入口
//一个工程的main函数有且只有一个
//一个工程可以有多个.c文件
//但是多个.c文件中只能存在一个main函数

//printf - 库函数 - 在屏幕上打印信息
//printf 的使用要引用头文件

//数据类型
//计算机语言 - 写程序 - 解决生活中的问题
//程序必须有能力描述生活中的问题
//C语言 - 浮点数(描述小数)
//      - 整型(描述整数)

//int main()
//{
//	//字符类型 把a放到名为ch的空间里去
//	char name = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long长整型/long long长长整型
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型(比单精度精度更高)
//	double d = 0.0;
//	return 0;
//}

//int main()
//{
//	//printf("hello word\n");
//	//printf("hello word twice\n");
//	//printf("%d\n", 100);//打印一个整数 - %d
//	printf("%d\n", sizeof(char));//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小(单位是字节byte=8bit)
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	//创建一个变量
//	//类型 变量的名字 = 0；
//	int age = 20;
//	double weight = 85.75;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//%d - 整型
//%f - float
//%lf - double

	//全局变量 - 大括号外部定义的
//int a = 100;
//int main()
//{
//	//局部变量 - 大括号内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议全局变量和局部变量用相同的名字
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//写一个代码求两个整数的和
//scanf函数是输入函数
int main()
{
	int a = 0;//创建了一个a
	int b = 0;//创建了一个b
	int sum = 0;//创建了sum用于存放结果
	scanf("%d %d", &a, &b);//输入两个整形，第一个%d取的值放到a里，第二个%d取的值放到b里
						   //scanf_s是vs提供的代码，在其他的编译器可能不通用，所以不建议用	
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}