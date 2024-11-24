#include<stdio.h>
int main(){
	int year;
	printf("Moi ban nhap so nam ");
	scanf("%d", &year);
	if (year % 4 == 0 or year % 400 ==0) {
		printf("Nam %d la nam nhuan\n", year);
	} else {
		printf("Nam %d khong la nam nhuan\n", year);
	}
	return 0;
}
