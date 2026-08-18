#include<stdio.h>
int main() {
	int score;
	printf("请输入你的分数：");
	scanf("%d",&score);
	if(score>=90) {
		printf("等级：优秀（A）\n");
		
	} else if(score>=80) {
		printf("等级：良好（B）\n");
	}else if(score>=60) {
		printf("等级：及格（C）\n");
	}else{
		printf("等级：不及格（D）\n");
	}
	system("pause"); 
	return 0;
}
