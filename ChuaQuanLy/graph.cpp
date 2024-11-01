#include<iostream>
#include "function.cpp"
using namespace std;

int main(){

	Graph a(7);
	a.inputWeight();
	a.outputWeight();
	a.DFS(0);
//	queue q;
//	a.BFS(0, q, 6);
//	stack a;
//	a.push(1);
//	a.push(2);
//	a.push(3);
//	cout<<a.pop()<<endl;
//	cout<<a.pop();
	return 0;
}
