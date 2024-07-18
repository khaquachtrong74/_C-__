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
	// find voi mang thong thuong cung voi con tro de chua dia chi cua phan tu can tim
	// sau do dung neu tim thay thi chi can goi gia tri cua dia chi ma con tro dang tham chieu
	int myints[] = {10, 20, 30, 40};
	int * p;
	p = std::find(myints, myints+4,30);
	//		 find(dia chi phan_tu_1,dia chi phan_tu_cuoi, so_can_tim)
	if(p != myints+4){
		// if de xem co tim thay duoc so 30 khong
		std::cout<< "Element found in myints: "<<*p<<'\n';
	}
	else{
			std::cout<< "Element not found in myints: "<<*p<<'\n';
	}
	// find voi vector va iterator:
	std::vector<int> myvector(myints, myints+4);
	std::vector<int>::iterator it;
	
	it = find(myvector.begin(), myvector.end(), 30);
	if(it != myvector.end()){
		std::cout<<"element is found in myvector: "<<*it<<'\n';
		
	}
	else{
		std::cout<<"element is not found in myvector: "<<'\n';
	}

	return 0;
}

