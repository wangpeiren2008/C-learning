#include<stdio.h>
int main() {
	int a;
	int b;
	printf("请输入第一个数字：");
	scanf("%d",&a);
	printf("请输入第二个数字：");
	scanf("%d",&b);
	printf("相加等于%d\n",a+b);
	printf("相减等于%d\n",a-b);
	printf("相乘等于%d\n",a*b);
	printf("相除等于%d\n",a/b);
	int sum=a+b;
	printf("两个数的和为%d\n",sum);
	system("pause");
	return 0;
}
