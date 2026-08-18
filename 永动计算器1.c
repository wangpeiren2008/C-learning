#include<stdio.h>
int main() {
	while(1){
	int a;
	int b;
	printf("请输入第一个数字：");
	scanf("%d",&a);
	printf("请输入第二个数字：");
	scanf("%d",&b);
	printf("相加等于%d\n",a+b);
	printf("相减等于%d\n",a-b);
	printf("相乘等于%d\n",a*b);
	if(b!=0){
	printf("相除等于%d\n",a/b);
}else{
	printf("除数不能为0！\n");
}
	int sum=a+b;
	printf("两个数的和为%d\n",sum);
	int box;
	printf("是否继续？继续请按1，停止请按2\n");
	scanf("%d",&box);
	if(box!=1){
		break;
	}
}
	system("pause");
	return 0;
}
