//PURPOSE: another way potential to avoid use pointer
#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int &r = a;
	//if r is not init, it will make error
	// now r is alias of a;
	cout<<a<<" : "<<r<<endl;
	r++;
	cout<<a;
	int b = 100;
	r = b;
	// it not mean that r is reference to b, it change the value inside a;
	cout<<a<<" "<<r<<" "<<b;
	cout<<endl<<r;
}
