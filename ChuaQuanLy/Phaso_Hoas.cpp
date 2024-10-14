/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
using namespace std;

void nhanhcay(int n){
	for(int i = 1; i < n; i++){
		cout << setw(n*2-i);
		for(int j = 0; j <= i ; j++){
			if(i == 1){
			
			
					cout<<"*"<<endl;
					cout<<setw(n*2);
					system("color");
					cout<<"@#@";
				
			}
			else{
				
	
					if(j % 2 == 0){
						if(i % 2 == 0 && i > 2){
							
							cout<<"@~";
						}
						else{
							cout<<"~@";
						}
					}
					else{
						
						cout<<"~@~";
					}
				
			
				
			}
	}
	cout<<endl;
	}
}
int main(){
	nhanhcay(20);
	return 0;
}

