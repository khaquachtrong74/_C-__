/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/

#include<iostream>
#include<vector>
#include<algorithm>
// example of define:?

#define helo"Hello World!"
using namespace std;
int main(){
	int a[100];
	for(int i = 0; i < 55; i++){
		a[i] = rand()%9;
		if(a[i] == 0){
			do{
				a[i] = rand()%9;
			}while(a[i] == 0);
		}
	}
	for(int j = 0; j < 55; j++){
		cout<<a[j]<<" ";
	}
	return 0;
}

