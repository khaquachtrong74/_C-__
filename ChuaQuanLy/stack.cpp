#include<iostream>
#include<climits>
using namespace std;
struct arrayStack{
	char *s;
	int capacity;
	int top;
	arrayStack(int cap = 100){
		s = new char[cap];
		capacity = cap;
		top = -1;
	}
	bool isEmty(){
		return top < 0 ? true:false;
	}
	bool isFull(){
		return top == capacity ? true:false;
	}
	void push(char x){
		if(isFull())
			return;
		s[++top] = x;
	}	
	char pop(){
		
		if(isEmty())
			return 'n';
		char c = s[top];
		s[top] = '~';
		top -=1;
		return c;
	}
	void xuat(){
		for(int i = 0; i <= top; i++){
			cout<<*(s+i)<<" ";
		}
	}
};
arrayStack tenToBinary(int x){
	arrayStack s;
	while(x!=0){
		if(x%2 == 0){
			s.push('1');
		}
		else{
			s.push('0');
		}
	x /=2;
	}	
	return s; 
}
arrayStack tenToEight(int x){
	arrayStack s;
	while(x!= 0){
		
		s.push('0'+x%8);
		x/=8;
	}
	return s;
}
arrayStack tenToSixteen(int x){
	arrayStack s;
	
	while(x){
		if(x%16 < 10){
			
			s.push('0'+x%16);
		}
		else{
			s.push(char(64+(x%16)-9));
		}
		x/=16;
	}
	return s;
}
void thapHN(arrayStack &cotNguon, arrayStack &cotTrungGian, arrayStack &cotDich, int soDia){
	//3 Đĩa 
	if(soDia == 1){
		char tmp = cotNguon.pop();
		cotDich.push(tmp);
		return;
	}
	else{
		//soDia == 2
		//cotNguon cotDich cotTrungGian
		//soDia == 1
		//cotNguon cotTrungGian cotDich
		//Chạy if: cotNguon->cotDich: 1; return
		//soDia==2
		//cotNguon->cotTrungGian: 2;
		//soDia == 1
		//cotDich cotNguon cotTrungGian
		//cotDich->cotTrungGian: 1 | 2;
		//soDia == 3
		//cotNguon->cotDich: 3;
		//soDia == 2
		//cotTrungGian cotNguon cotDich
		//Chạy hàm 1
		//cotTrungGian cotDich cotNguon
		//soDia == 1
		//cotTrungGian->cotNguon: 1;
		//cotTrungGian:2;
		//soDia==2;
		thapHN(cotNguon, cotDich, cotTrungGian, soDia - 1);
		char tmp = cotNguon.pop();
		cotDich.push(tmp);
		thapHN(cotTrungGian, cotNguon, cotDich, soDia - 1);
	}
}
arrayStack thapHaNoi(int x){
	arrayStack cotNguon;
	arrayStack cotTrungGian;
	arrayStack cotDich;
	for(int i = x; i >=1;i--){
		cotNguon.push('0'+i);
	}
	thapHN(cotNguon,cotTrungGian,cotDich,x);
	return cotDich;
}
int main(){
	arrayStack test(5);
	test.push(4);
	test.push(3);
	test.push(7);
	arrayStack binary = tenToBinary(10);
	arrayStack eight = tenToEight(345);	
	arrayStack sixTeen = tenToSixteen(2014);
	binary.xuat();
	cout<<endl;
	eight.xuat();
	sixTeen.xuat();
	arrayStack test1 = thapHaNoi(4);
	cout<<"Thap Ha Noi co 2 Dia"<<endl;
	test1.xuat();
	return 0;
}
