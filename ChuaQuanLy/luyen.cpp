#include<iostream>
using namespace std;

class obj{
    private:
    int a;
    double b;

    public:
    void set(int a, double b){
        this->a = a;
        this->b = b;
    }
    int getA(){
        return this->a;
    }
    double getB(){
        return this->b;
    }
    istream & inDev(istream &inP, obj &po){
        int x;
        double y;
        inP>> x >>y;
        set(x, y);
        return inP;
    }
    ostream &outDev(ostream &ouP, obj &po){
        ouP<<"Your first interger numb "<<po.getA()<<endl;
        ouP<<"Your first double numb "<<po.getB()<<endl;
        return ouP;
    }
};
int main(){
    obj k;
    k.inDev(cin, k);
    k.outDev(cout, k);
}