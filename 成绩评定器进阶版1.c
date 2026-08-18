#include<stdio.h>
int main() {
	int i,a,b;
	
for(i=1;i<=5;i++){
	printf("\n---正在测评第%d位同学---\n",i);
	printf("请输入平时分：");
	scanf("%d",&a);
	printf("请输入期末考分：");
	scanf("%d",&b);
	if(a>100||a<0||b>100||b<0){
		printf("分数不合规！！！\n");
		
	}else if(a+b>180){
		printf("你真牛逼！！\n");
	}else{
		printf("老弟你还得练！！！\n");
	}
	 
}
system("pause");
return 0;
}

