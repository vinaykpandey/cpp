#include <iostream>
#include <string>
using namespace std;
int main(){
	string name = "Vins Striker";
	cout << "Intial Name is: " << name << endl;
	cout << "Enter your name: ";
	//cin >> name; /* space is delimeter for cin Abc Xyz, cin store only Abc */
   	getline(cin,name); /* getline store all word (sapce sepearted also) Abc Xyz */
    cout << "My name is: " << name << endl;
}