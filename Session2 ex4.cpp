#include <stdio.h>
int main(){
	//Tao bien canh cua hinh vuong
	int side = 10;//canh cua hinh vuong la 10 don vi
	
	//Tinh chu vi hinh vuong
	int  perimeter = 4*side;
	
	//Tinh dien tich hinh vuong
	int area = side*side;
	
	//Hien thi ket qua
    printf("Canh cua hinh vuong la: %d\n", side);
	printf("Chu vi cua hinh vuong la: %d\n", perimeter);
	printf("Dien tich cua hinh vuong la: %d\n", area);
	
	return 0;
}
