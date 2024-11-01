//INPUT: n
//OUTPUT: MAX 1

#include<iostream>
#include<string>
using namespace std;

void xau(int n, string rs){
    if(n == 0){
        cout<<rs<<endl;
        return;
    }
    xau(n-1,rs+'0');
    xau(n-1,rs+'1');
}
int input(istream &inP){
    int tmp;
    inP>>tmp;
    return tmp;
}
void ouput(ostream &ouP, int a){
    ouP<<"Your number is "<<a<<endl;
}
int main(){
    // int n;cin>>n;
    // if(n > 10 || n < 1){
    //     return 0;
    // }
    // xau(n, "");
    ouput(cout, input(cin));
    return 0;
}