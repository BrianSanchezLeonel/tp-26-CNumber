#include <bits/Stdc++.h>
using namespace std;
class CNumber {
	private:
		int number1;
		int number2;
		int number3;
	public:
		CNumber(int n1, int n2, int n3);
		int SetNumber1(int n1);
		int SetNumber2(int n2);
		int SetNumber3(int n3);
		int Maximo();
		int Minimo();
		float Promedio();
		int Pares();
		int Impares();
};

CNumber::CNumber(int n1, int n2, int n3) {
	number1 = SetNumber1(n1);
	number2 = SetNumber2(n2);
	number3 = SetNumber3(n3);
}

int CNumber::SetNumber1(int n1) {
	number1 = n1;
	return number1;
}

int CNumber::SetNumber2(int n2) {
	number2 = n2;
	return number2;
}

int CNumber::SetNumber3(int n3) {
	number3 = n3;
	return number3;
}

int CNumber::Maximo() {
	int max;
	if(number1 >= number2 && number1 >= number3){
		max = number1;
	}
	if(number2 >= number1 && number2 >= number3){
		max = number2;
	}
	if(number3 >= number1 && number3 >= number2){
		max = number1;
	}
	return max;
}

int CNumber::Minimo() {
	int min;
	if(number1 <= number2 && number1 <= number3){
		min = number1;
	}
	if(number2 <= number1 && number2 <= number3){
		min = number2;
	}
	if(number3 <= number1 && number3 <= number2){
		min = number3;
	}
	return min;
}

float CNumber::Promedio() {
	return (number1 + number2 + number3) / 3;
}

int CNumber::Pares() {
	int par = 0;
	if(number1 % 2 == 0){
		par = par + 1;
	}
	if(number2 % 2 == 0){
		par = par + 1;
	}
	if(number3 % 2 == 0){
		par = par + 1;
	}
	return par;
}

int CNumber::Impares() {
		int impar = 0;
	if(number1 % 2 != 0){
		impar = impar + 1;
	}
	if(number2 % 2 != 0){
		impar = impar + 1;
	}
	if(number3 % 2 != 0){
		impar = impar + 1;
	}
	return impar;
}

int main() {
	int n1 = 10, n2 = 25, n3 = 5;
	float Promedio;
	int Minimo, Maximo, Par, Impar;
	CNumber CLocal (n1, n2, n3);
	Promedio = 	CLocal.Promedio();
	Maximo = CLocal.Maximo();
	Minimo = CLocal.Minimo();
	Par = CLocal.Pares();
	Impar = CLocal.Impares();
	cout<<"El promedio de los 3 numeros es:"<<Promedio<<endl;
	cout<<"El maximo de los 3 numeros es:"<<Maximo<<endl;
	cout<<"El minimo de los 3 numeros es:"<<Minimo<<endl;
	cout<<"La cantidad de numeros pares son:"<<Par<<endl;
	cout<<"La cantidad de numeros impares son:"<<Impar<<endl;	
	return 0;
}