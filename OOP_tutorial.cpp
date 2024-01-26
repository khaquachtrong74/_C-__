#include<iostream>
#include<cstdlib>
#include<string>
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

// class Student{
//     private:
//     string name;
//     char gender;
//     map<char, string> myMap = {{'f',"Female"},{'m',"Male"},{'u',"Unknown"}};
//     public:
//     Student(){
//         name = "Unknown";
//         gender = 'u';
//     }
//     Student(string name){
//         this->name = name;
//         gender = 'u';
//     }
//     Student(char gender){
//         this->gender = gender;
//         name = "Unknown";
//     }
//     Student(string name, char gender){
//         this->name = name;
//         this->gender = gender;
//     }
//     void display(){
//         cout<<"Name: " + name<<endl;
//         cout<<"Gender: " + myMap[gender]<<endl;
//     }
// };

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


class Rectangle{
    private:
    double length;
    double width;
    public:
    Rectangle(){

    }
    Rectangle(double length, double width){
        this->length = length;
        this->width = width;
    }
    void setLength(double length){
        this->length = length;
    }
    double getLength(){
        return length;
    } 
    void setWidth(double width){
        this->width = width;
    }
    double getWidth(){
        return width;
    }
    double getArea(){
        return width*length;
    }
    double getPerimeter(){
        return (width+length)*2.0;
    }
};

class Student{
    private:
    int id;
    string name;
    int age;
    string address;
    int score;
    public:
    Student(){

    }
    Student(int id, string name, int age, string address, int score){
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
        this->score = score;
    }
    void setId(int id)
    {
        this->id = id;
    }
    int getId(){
        return id;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
    void setAddress(string address){
        this->address = address;
    }
    string getAddress(){
        return address;
    }
    void setScore(int score){
        if(score < 0){
            this->score = 0;
        }
        else if(score > 10){
            this->score  = 10;
        }
        else{
            this->score = score;
        }
    }
    int getScore(){
        return score;
    }
};

class Employee{
    private:
    int id;
    string firstName;
    string lastName;
    int salary;
    public:

    Employee(int id, string firstName, string lastName, int salary)
    {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    }
    void setId(int id ){
        this->id = id;
    }
    int getId(){
        return id;
    }
    void setFirstName(string firstName){
        this->firstName = firstName;
    }
    string getFirstName(){
        return firstName;
    }
    void setLastName(string lastName){
        this->lastName = lastName;
    }
    string getLastName(){
        return lastName;
    }
    void setSalary(int salary){
        this->salary = salary;
    }
    int getSalary(){
        return salary;
    }
    string getFullName(){
        return firstName + " " + lastName;
    }
};