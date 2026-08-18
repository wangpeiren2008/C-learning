#include<stdio.h>
int main() {
	int password=0;
	while(password!=123456){
		printf("请输入管理员密码：\n");
		scanf("%d",&password);
		if(password!=123456){
			printf("密码错误，请重试！\n");
		}
		
	}
	printf("密码正确，欢迎进入系统！\n");
	system("pause");
	
	return 0;
}
