/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/

#include<iostream> // std::cout
// ham danh cho viec thao tac voi array
#include<algorithm> // std::for_each
#include<vector>	// std::vector

void myfunction(int i){
	i += i;
	std::cout<<i<<" ";
}

// ham khoi tao 
struct myclass{
	void operator() (int i ){
		std::cout<<' '<<i;
	}// function object type:
	
}myobject;;

int main(){
	std::vector<int> myvector;
	myvector.push_back(10);
	myvector.push_back(20);
	myvector.push_back(30);
	
	std::cout<<"myvector contains:";
	for_each(myvector.begin(), myvector.end(), myfunction);
	std::cout<<'\n';
	std::cout<<"or:";
	//or:
	std::cout<<"myvector contains:";
	for_each (myvector.begin(), myvector.end(), myobject);
	std::cout<<'\n';


	return 0;
}

