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
//    int a = 0;  // 素数的个数
//    int num = 0;  // 输入的整数
//    printf("输入一个整数：");
//    scanf("%d", &num);
//    for (int i = 2; i < num; i++) {
//        if (num % i == 0) {
//            a++;  // 素数个数加1
//        }
//    }
//    if (a == 0) {
//        printf("%d是素数。\n", num);
//    }
//    else {
//        printf("%d不是素数。\n", num);
//    }
//    return 0;
//}
// 
// 
// 
// 1. 打印100~200之间的素数
//int main()
//{
//	int a = 0;//素数个数
//	int b = 0;//一个整数
//	printf("请输入一个整数:");
//	scanf("%d", &b);
//	for (int i=2; i < b; i++) {
//		if(b%i==0){
//		a++;// 素数个数加1
//	}
//}
//
//     if (a==0) {
//	printf("%d是素数\n", b);
//}
//else {
//	printf("%d不是素数\n",b);
//}
//	return 0;
//}



//2. 输出乘法口诀表
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


//3.判断1000年---2000年之间的闰年
int main()
{
   int year = 0;//输入年份
	printf("请输入一个整数:");
	scanf("%d", &year);
	if (((0 == year % 4) && (0 != year % 100)) || (0 == year % 400))//重点！！！
		printf("%d是闰年\n", year);
	else
		printf("%d不是闰年\n",year);
	return 0;
}