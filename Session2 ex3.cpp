#include <stdio.h>
int main(){
	//Khai bao va khoi tao so nguye
	int num1 = 10;//So nguyen thu nhat
	int num2 = 20;//So nguyen thu hai
	
	// Tong hai so nguyen la
	int sum = num1 + num2;
	
	//Hieu 2 so nguyen la 
	int difference = num1 - num2;
	
	//Tich 2 so nguyen la
	int product = num1 * num2;
	
	//Thuong 2 so ngiuen la
	int quotient =(float)num1 / num2;
	
	//ket qua 2 so la 
	printf("So nguyen thu nhat la: %d\n", num1);
	printf("So nguyen thu hai la: %d\n", num2);
	printf("Hieu hai so la: %d\n", difference  );
	printf("Tich hai so la: %d\n", product);
	printf("Thuong 2 so la: %d\n", quotient);
	printf("Tong hai so la: %d\n", sum);
	return 0;
}
     

