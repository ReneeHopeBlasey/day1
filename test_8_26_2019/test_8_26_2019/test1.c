#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//
//	printf("sum = %d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//    int a = 0;  // �����ĸ���
//    int num = 0;  // ���������
//    printf("����һ��������");
//    scanf("%d", &num);
//    for (int i = 2; i < num; i++) {
//        if (num % i == 0) {
//            a++;  // ����������1
//        }
//    }
//    if (a == 0) {
//        printf("%d��������\n", num);
//    }
//    else {
//        printf("%d����������\n", num);
//    }
//    return 0;
//}
// 
// 
// 
// 1. ��ӡ100~200֮�������
//int main()
//{
//	int a = 0;//��������
//	int b = 0;//һ������
//	printf("������һ������:");
//	scanf("%d", &b);
//	for (int i=2; i < b; i++) {
//		if(b%i==0){
//		a++;// ����������1
//	}
//}
//
//     if (a==0) {
//	printf("%d������\n", b);
//}
//else {
//	printf("%d��������\n",b);
//}
//	return 0;
//}



//2. ����˷��ھ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a * b;
//	printf("sum=%d\n", sum);
//	return 0;
//}


//3.�ж�1000��---2000��֮�������
int main()
{
   int year = 0;//�������
	printf("������һ������:");
	scanf("%d", &year);
	if (((0 == year % 4) && (0 != year % 100)) || (0 == year % 400))//�ص㣡����
		printf("%d������\n", year);
	else
		printf("%d��������\n",year);
	return 0;
}