// các số vừa là số nguyên tố vừa là số đối xứng
#include<iostream>
using namespace std;

//b1 xet so nguyen to

bool snt(int a){
    if(a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0){
        if(a == 2 || a == 3 || a == 7 || a == 5){
           return true;
        }
        else{
            return false;
        }
    }
    else{
        return true;
    }
}
//b2 xet so doi xung
bool SDX(int a){
    const int XetSo = a;
    int temp = 0;
    while(a > 0){
        temp = temp*10 + a%10;
        a /= 10;
    }
    if(XetSo == temp){
        return true;
    }
    else{
        return false;
    }
}
//b3 ket hop

int main(){
    int n;cout<<"Nhap 1 so nguyen de xem ";cin>>n;cout<<endl;
    if(snt(n) == true && SDX(n) == true){
        cout<<"Day la so nguyen to Palindrome ";
        
    }
    else{
        cout<<"Day khong phai la so nguyen to Palindrome ";
    }
}