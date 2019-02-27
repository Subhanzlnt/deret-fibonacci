#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char** argv)
{
	int n;
	int fib[25];
	cout << "Masukkan banyak bilangan (max 25)" ;
	cin >> n;
	
	fib[0]=0; fib[1]=1;
	for (int i=2; i<=n; i++){
		fib[i]= fib[i-1] + fib[i-2];
	}
	
	cout << "Deret fibonacci : ";
	for (int i=0; i<n; i++){
		cout << fib[i]<<" ";
	}
	 
	return 0;
}