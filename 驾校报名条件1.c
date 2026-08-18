#include<stdio.h>
int main() {
	int age;
	printf("请输入您的年龄：");
	scanf("%d",&age);
	if(age>=18&&age<=70) {
		printf("你可以报名\n");
	} else {
		printf("你不符合报名条件\n");
	}
	system("pause");
	return 0;
}
