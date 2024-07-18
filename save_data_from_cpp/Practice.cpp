/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
#include<ctime>
#include<cstdlib>
// su dung ham for each trong algorithm

void menu(std::string n){
	std::cout<<n<<'\n';
	
}



void nhap(std::vector<float>n){
	srand(static_cast<float>(time(0)));
	
	
}
int main(){
	std::vector<std::string> myvector;
	
	// dung for_each de chay thu cac chuoi ki tu trong vector myvector.
	myvector.push_back("Hello world");
	myvector.push_back("Hello world again");
	myvector.push_back("Hello world continue");
	myvector.push_back("Hello world back");
	myvector.push_back("Hello world time");
	
	
	
	std::for_each(myvector.begin(), myvector.end(), menu);
	srand(static_cast<float>(time(0)));
	std::vector<float>myarray;
	int x;
	std::cout<<"Nhap gia tri maf ban muon xem no xuat hien bao nhieu lan trong mang := ";std::cin>>x;
	// constexpr
	for(int i = 0; i <= 10;i++){
		myarray.push_back(rand()%10);
		
	}
	// Ham count trong algorithm
	int a =	std::count(myarray.begin(),myarray.end(),x);
	for(int j = 0; j <= 10;j++){
		std::cout<<"Cac phan tu co trong mang "<<j<<" = "<<myarray[j]<<'\n';
	}
		std::cout<<"Phan tu "<<x<<"Xuat hien "<<a<<" lan \n";

	return 0;
}

