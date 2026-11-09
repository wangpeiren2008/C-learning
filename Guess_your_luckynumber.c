#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(NULL));
	while(1){
	int luckynumber=rand()%100+1;
    int n;
    while(1){
    printf("Guess what is your luckynumber:\n");
    scanf("%d",&n);
		if(n>luckynumber){
			printf("Too big\n");
		}else if(n<luckynumber){
			printf("Too small\n");
		}else{
			printf("bingo!");
			break;
		}
    }
    	printf("would you like to play again?\nplease input\n1.Yes\n2.No\n");
				int choice;
				scanf("%d",&choice);
				if(choice==1){
					continue;
				}else if(choice==2){
				    printf("Goodbye!\n");
				}else{
					break;
				}
	}
	return 0;
}
