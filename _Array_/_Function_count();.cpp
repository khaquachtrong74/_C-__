/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main(){
	// counting elements in array:
	int myints[] = {10,20, 30 ,30, 20 ,10 ,10, 10};// 8 elements
	// size to find a Size of array (myints)
	int size = sizeof(myints)/sizeof(myints[0]);
	int mycount = std::count (myints,myints+size, 10);
	std::cout<<"10 appears "<<mycount<<"times.\n";
	
	// counting elements in container:
	std::vector<int>myvector(myints, myints+size);
	mycount = std::count(myvector.begin(),myvector.end(),20);
	std::cout<<"20 appears "<<mycount<<"times . \n";
	return 0;
}

