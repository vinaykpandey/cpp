#include <iostream>
#include <string>
using namespace std;
int  Factorial_fn(int); /*This*/
int main(){
	int n;
	cout << "Enetr the number" << endl;
	cin >> n;
	cout << "Factorail  of " << n <<  " is : " << Factorial_fn(n) << endl;
}
int Factorial_fn(int n){
	/*0! =  1, 1! = 1, factorial or zero or 1 is always 1*/
    if(n == 0 || n == 1){
        return 1;
    }
    else{
     return n * Factorial_fn(n-1);
    }
}
