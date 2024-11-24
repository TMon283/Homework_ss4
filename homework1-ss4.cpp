#include<stdio.h>
int main(){
	int a;
	printf("Moi ban nhap so nguyen ");
	scanf("%d", &a);
	if (a>=0){
		printf("So ban vua nhap la so nguyen duong\n");
	} else{
		printf("So ban vua nhap la so nguyen am\n");
	}
	return 0;
}
