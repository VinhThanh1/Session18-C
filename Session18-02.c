#include<stdio.h>
	struct sinhVien {
		char name[50];
		int age;
		char phoneNumber[25];
		
	};
int main(){
	struct sinhVien sinhVien2;
	printf("Moi ban nhap ho va ten: ");
	fgets(sinhVien2.name,sizeof(sinhVien2.name), stdin);
	printf("Moi ban nhap tuoi: ");
	scanf("%d",&sinhVien2.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai: ");
	fgets(sinhVien2.phoneNumber, sizeof(sinhVien2.phoneNumber), stdin);
	printf("\nHo va ten: %s ", sinhVien2.name);
	printf("Tuoi: %d \n", sinhVien2.age);
	printf("So dien thoai: %s", sinhVien2.phoneNumber);
}
