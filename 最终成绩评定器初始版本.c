#include<stdio.h>
int main() {
	int a,b;
	printf("请输入平时分：");
	scanf("%d",&a);
	if(a>100||a<0) {
		printf("不要撒谎！！！\n"); 
		system("pause");
		return 0;
	}
	printf("请输入期末考分：");
	scanf("%d",&b);
	if(b>100||b<0) {
		printf("我可没跟你开玩笑！！！\n"); 
		system("pause");
		return 0;
	}
	if(a+b>=180) {
		printf("你真牛逼！！！\n");
	}else{
		printf("老弟，你还得练！！！废物！！！\n");
	}
	system("pause");
	return 0;
}
