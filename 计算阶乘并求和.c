#include<stdio.h>
int main() {
	int n;
	printf("input a number:\n");
	scanf("%d",&n);
	double sum=0;
	double fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
		sum=sum+fact;
	}
	printf("The result is %.0f\n",sum);
	return 0;
}
