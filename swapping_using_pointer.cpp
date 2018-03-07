#include <iostream>
using namespace std;
int main(){
	int x , y ;
	cout << "Enter first number n1: "  << endl;
	cin >> x;
	cout << "Enter first number n2: "  << endl;
	cin >> y;
	cout << "Initially n1 is: " << x << ", n2 is: " << y << endl;

	int *a, *b;
	a = &y;
	b = &x;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "After swapping n1 is: " << x << ", n2 is: " << y << endl;
}