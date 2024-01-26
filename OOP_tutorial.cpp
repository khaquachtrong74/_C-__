#include<iostream>
#include<cstdlib>
#include<map>
using namespace std;
bool check_Input(int n){
    return n < 0 || n == 0 ? false : true; 
}
// lớp tìm giá trị min, max có trong một mảng int hoặc mảng double
class ArrayCalculator{
    public:
    static int maxOfArray(int arr[], int n){
        label:{ 
        if(!check_Input(n)){
            cout<<"Gia tri khong hop le hay nhap lai ";cin>>n;
            goto label;
        }
        }

        int max = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] >= max) {
                max = arr[i];
            }
        }
        return max;
    }
    static double maxOfArray(double arr[], int n){
        label:{ 
        if(!check_Input(n)){
            cout<<"Gia tri khong hop le hay nhap lai ";cin>>n;
            goto label;
        }
        }
        
        double max = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] >= max) {
                max = arr[i];
            }
        }
        return max;
    }
    static int minOfArray(int arr[], int n){
        label:{ 
        if(!check_Input(n)){
            cout<<"Gia tri khong hop le hay nhap lai ";cin>>n;
            goto label;
        }
        }
        
        int min = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] <= min) {
                min = arr[i];
            }
        }
        return min;
    }
    static double minOfArray(double arr[], int n){
        label:{ 
        if(!check_Input(n)){
            cout<<"Gia tri khong hop le hay nhap lai ";cin>>n;
            goto label;
        }
        }
        
        double min = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] <= min) {
                min = arr[i];
            }
        }
        return min;
    }
};


class Student{
    private:
    string name;
    char gender;
    map<char, string> myMap = {{'f',"Female"},{'m',"Male"},{'u',"Unknown"}};
    public:
    Student(){
        name = "Unknown";
        gender = 'u';
    }
    Student(string name){
        this->name = name;
        gender = 'u';
    }
    Student(char gender){
        this->gender = gender;
        name = "Unknown";
    }
    Student(string name, char gender){
        this->name = name;
        this->gender = gender;
    }
    void display(){
        cout<<"Name: " + name<<endl;
        cout<<"Gender: " + myMap[gender]<<endl;
    }
};

// TÍnh đóng gói của cpp
class Person {
private:
	int id;
	string name;
	int age;
	string address;
public:
    int getId(){
        return id;
    }
    void setId(int id){
        this->id = id;
    }
    int getAge(){
        return age; 
        
    }
    void setAge(int age){
        this->age = age;
    }
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }
    string getAddress(){
        return address;
    }
    void setAddress(string address){
        this->address = address;
    }
};