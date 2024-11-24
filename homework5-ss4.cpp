#include<stdio.h>
int main(){
	int num1;
	int num2;
	int num3;
	printf("Nhap so thu nhat ");
	scanf("%d", &num1);
	printf("Nhap so thu hai ");
	scanf("%d", &num2);
	printf("Nhap so thu ba ");
	scanf("%d", &num3);
	if (num1 <= num3 and num3 <= num2) {
		printf("So %d nam trong khoang %d va %d\n", num3, num1, num2);
	} else {
		printf("So %d khong nam trong khoang %d va %d\n", num3, num1, num2);
	}
	return 0;
}
