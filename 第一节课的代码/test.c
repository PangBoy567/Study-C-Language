#define _CRT_SECURE_NO_WARNINGS 1//�������һ�����ڵ�һ��
#include <stdio.h>
//int main()
//{
//	printf("�������\n");
//	return 0;
//}

//д����
// 1. д��main����
//    C�����Ǵ��������ĵ�һ�п�ʼִ�еģ������

//��д���루���Ϸ�����Ϊ����
//(int)�Ǻ����ķ������� (main)�Ǻ����� {}֮���Ǻ�����
//int�����ͣ�return���������Ӧ

//main�����ǳ�������
//һ�����̵�main��������ֻ��һ��
//һ�����̿����ж��.c�ļ�
//���Ƕ��.c�ļ���ֻ�ܴ���һ��main����

//printf - �⺯�� - ����Ļ�ϴ�ӡ��Ϣ
//printf ��ʹ��Ҫ����ͷ�ļ�

//��������
//��������� - д���� - ��������е�����
//����������������������е�����
//C���� - ������(����С��)
//      - ����(��������)

//int main()
//{
//	//�ַ����� ��a�ŵ���Ϊch�Ŀռ���ȥ
//	char name = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//long������/long long��������
//
//	//�����ȸ�����
//	float weight = 55.5;
//	//˫���ȸ�����(�ȵ����Ⱦ��ȸ���)
//	double d = 0.0;
//	return 0;
//}

//int main()
//{
//	//printf("hello word\n");
//	//printf("hello word twice\n");
//	//printf("%d\n", 100);//��ӡһ������ - %d
//	printf("%d\n", sizeof(char));//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С(��λ���ֽ�byte=8bit)
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
//	//����һ������
//	//���� ���������� = 0��
//	int age = 20;
//	double weight = 85.75;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//%d - ����
//%f - float
//%lf - double

	//ȫ�ֱ��� - �������ⲿ�����
//int a = 100;
//int main()
//{
//	//�ֲ����� - �������ڲ������
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//������ȫ�ֱ����;ֲ���������ͬ������
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//дһ�����������������ĺ�
//scanf���������뺯��
int main()
{
	int a = 0;//������һ��a
	int b = 0;//������һ��b
	int sum = 0;//������sum���ڴ�Ž��
	scanf("%d %d", &a, &b);//�����������Σ���һ��%dȡ��ֵ�ŵ�a��ڶ���%dȡ��ֵ�ŵ�b��
						   //scanf_s��vs�ṩ�Ĵ��룬�������ı��������ܲ�ͨ�ã����Բ�������	
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}