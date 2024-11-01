#include<iostream>
#include "function.cpp"
using namespace std;

struct array{
	int arr[100];
	int size;
	array(int s = 100){
		size = s;
	}
	void nhap(){
		for(int i = 0; i < size; i++)
			cin>>arr[i];
	}
	void xuat(){
		for(auto tmp : arr)
			cout<<tmp<<" ";
		cout<<endl;
	}
	void interchangeSort(){
		for(int i = 0; i < size-1; i++){
			for(int j = i+1; j < size;j++){
				if(arr[i] < arr[j])
					swap(arr[i],arr[j]);
			}
		}
	}
	int partition(int low, int high){
		if(low <= high){

		}
	}
};



void ct(int arr[], int size){
	
	for(int index = 0; index < size-1; index++){
		if(arr[index] > arr[index+1] )
		{
			swap(arr[index],arr[index+1]);
			index-=2;
			if(index < 0){
				index = 0;
			}
		}
	}
}
