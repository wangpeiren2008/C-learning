#include<stdio.h>
int main() {

	int age;
	
	printf("请输入你的年龄：");
	scanf("%d",&age);
	printf("你今年%d岁了\n你明年就会是%d岁了\n你五年后会是%d岁\n",age,age+1,age+5);
	system("pause");
	return 0; 
} 
