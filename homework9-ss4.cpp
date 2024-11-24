#include<stdio.h>
int main(){
	int day;
	int year;
	int month;
	printf("Moi ban nhap ngay ");
	scanf("%d", &day);
	printf("Moi ban nhap thang ");
	scanf("%d", &month);
	printf("Moi ban nhap nam ");
	scanf("%d", &year);
	if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12){
		if (day == 31){
			printf("Hop le\n");
		} else{
		printf("Khong hop le\n");
	}
	} else if (month == 4 or month == 6 or month == 9 or month == 11){
		if (day == 30){
			printf("Hop le\n");
		} else{
		printf("Khong hop le\n");
	}
	} else if (month == 2){
		if (year % 4 == 0 or year % 400 == 0){
			if (day == 28){
				printf("Hop le\n");
			} else{
		printf("Khong hop le\n");
	}
		}
		if (year % 4 != 0 or year % 400 != 0){
			if (day == 29){
				printf("Hop le\n");
			} else{
		printf("Khong hop le\n");
	}
		}
	}
	return 0;
}
