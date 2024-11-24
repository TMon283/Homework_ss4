#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("Moi ban nhap canh a ");
	scanf("%d", &a);
	printf("Moi ban nhap canh b ");
	scanf("%d", &b);
	printf("Moi ban nhap canh c ");
	scanf("%d", &c);
	if (a + b > c and a + c > b and b + c > a){
		printf("La ba canh tam giac");
	} else{
		printf("Khong la ba canh tam giac");
	}
	return 0;
}
