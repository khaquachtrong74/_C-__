//PURPOSE: know how much bytes for each type of pointer (8byte)
#include<iostream>
using namespace std;

struct Rectangle{
	int width;
	int height;
};
int main(){
	int * p1;
	char * p2;
	float * p3;
	long * p4;
	Rectangle *p5;
	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(p4)<<endl;
	cout<<sizeof(p5)<<endl;
	return 0;
}
