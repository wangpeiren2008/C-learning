#include<stdio.h>
int main() {
	int a,b,choice;
	printf("请输入第一个数:");
	scanf("%d",&a);
	printf("请输入第二个数:");
	scanf("%d",&b);
	printf("请选择运算逻辑：1.加法      2.减法      3.乘法      4.除法\n请选择：");
	scanf("%d",&choice);
	if(choice==1) {
		printf("%d\n",a+b);
	
	}else if(choice==2) {
		printf("%d\n",a-b);
	}else if(choice==3) {
		printf("%d\n",a*b);
	} else if(choice==4) {
		if(b==0) {
			printf("大哥，除数不能是0呀，不然会报错的！！！\n"); 
		}else{
			printf("%d\n",a/b);
		}
	}else{
		printf("what did you choose?it can only be 1 to 4!!!!!\n");
	}
	system("pause");
	return 0;
	
	 
}
