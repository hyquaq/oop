#include<stdio.h>
#include<string.h>
#define size 1000

typedef struct{
	char Employee[size];
}NhanVien;

int main(){
	NhanVien Array[10];
	for(int i = 0; i < 10; i++){
		printf("Nhap ten nhan vien thu %d: ", i+1);
		scanf("%s", &Array[i].Employee);
	}
	return 0;
}
