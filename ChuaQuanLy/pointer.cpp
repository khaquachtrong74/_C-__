#include<iostream>
#include<stdio.h> //for c
#include<stdlib.h>
using namespace std;
int main(){
	//C with dynamic array
	int*ptr = (int *)malloc(5*sizeof(int));
	int i = 0; 
	while(i < 5){
		ptr[i] = i+1;
		i++;
	}
	i=0;
	while(i < 5){
		printf("%d", ptr[i]);
		i++;
	}
	// C++ with dynamic array
	int *p = new int [5];
	i = 0;
	while(i < 5){
		p[i] = ptr[i];
		i++;
	} 
	for(i; i >= 0; i--)
	{
		cout<<p[i]<<endl;
	}
	delete[] p;
	free(ptr);
	return 0;
}
