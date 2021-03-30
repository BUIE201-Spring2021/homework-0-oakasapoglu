#include<iostream>

using namespace std;


int Area(int x){
	return x*x;
}

int Fibonac(int x) {
	if (x < 3) {
		return 1;
	}
	int Current = 1;
	return Current = Fibonac(x-1) + Fibonac(x-2);
}


int Factorial(int x) {
	if (x == 1 ){
		return 1;
	}
	else
	{
		return Factorial(x-1)*x;
	}
}


int main()
{	
	int x = 8;
	//cin >> x;
	//x = Factorial(x);
	x = Fibonac(x);
	cout << "My name is Omer : " << x << endl;
	return 0;
}



