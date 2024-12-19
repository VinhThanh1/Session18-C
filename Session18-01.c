#include<stdio.h>
	struct sinhVien {
		char name[50];
		int age;
		int phoneNumber;
		
	};
int main(){
	struct sinhVien sinhVien1={
		"Nguyen Pham Vinh Thanh", 18, "0325601111"
	};
	printf("Ho va ten: %s \n",sinhVien1.name);
	printf("Tuoi: %d \n",sinhVien1.age);
	printf("So dien thoai: %s \n",sinhVien1.phoneNumber);
}
