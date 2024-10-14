#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<map>
#pragma once
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
/*Tính đóng gói*/
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

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
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

class Date{
    private:
    int day;
    int month;
    int year;
    public:
    Date(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void setDate(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void setDay(int day){
        this->day = day;
    }
    void setMonth(int month){
        this->month = month;
    }
    void setYear(int year){
        this->year = year;
    }
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
    void display(){
        if(day >= 1 && day < 10){
            cout<<"0"<<day<<"/";
        }
        else{
            cout<<day<<"/";
        }
        if(month >= 1 && month < 10){
            cout<<"0"<<month<<"/";
        }
        else{
            cout<<month<<"/";
        }
        cout<<year<<endl;
    }
};

class Time{
private:
    int hour;
    int minute;
    int second;
    public:
    Time(int hour, int minute, int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void setTime(int hour, int minute, int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void setHour(int hour){
        this->hour = hour;
    }
    int getHour(){
        return hour;
    }
    void setMinute(int minute){
        this->minute = minute;
    }
    int getMinute(){
        return minute;
    }
    void setSecond(int second){
        this->second = second;
    }
    int getSecond(){
        return second;
    }
    void nextSecond(){
        if(second < 60){
            second++;
            if(second == 60){
                second = 0;
                minute++;
                if(minute == 60){
                    hour++;
                    minute = 0;
                    if(hour == 24){
                        hour=0;
                    }
                }
            }
        }
        else if(second == 60){
            second = 1;
            minute++;
            if(minute == 60){
                hour++;
                minute = 0;
                if(hour == 24){
                    hour=0;
                }
            }
        }
        else{
            second = second - 60;
            second++;
            minute++;
            if(minute == 60){
                hour++;
                minute = 0;
                if(hour == 24){
                    hour=0;
                }
            }
        }
    }
    void previousSecond(){
         if(second < 60){
            second--;
            if(second == -1){
                second = 59;
                minute--;
                if(minute == -1){
                    minute = 59;
                    hour--;
                    if(hour == -1){
                        hour = 23;
                    }
                }
            }
        }
        else if(second == 60){
            second = 59;
            minute--;
            if(minute == -1){
                minute = 59;
                hour--;
                if(hour == -1){
                    hour = 23;
                }
            }
        }
        else{
            second = second - 60;
            second--;
            minute--;
            if(minute == -1){
                minute = 59;
                hour--;
                if(hour == -1){
                    hour = 23;
                }
            }
        }
    }

    void display(){
        if(hour >= 0 && hour < 10){
            cout<<"0"<<hour<<":";
        }
        else{
            cout<<hour<<":";
        }
        if(minute >= 0 && minute < 10){
            cout<<"0"<<minute<<":";
        }
        else{
            cout<<minute<<":";
        }
        if(second >= 0 && second < 10){
            cout<<"0"<<second<<":";
        }
        else{
            cout<<second<<":";
        }
        cout<<endl;
    }
};
    
class Point{
    private:
    double x;
    double y;
    public:
    Point(){

    }
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }
    void setX(double x){
        this->x = x;
    }
    double getX(){
        return x;
    }
    void setY(double y){
        this->y = y;
    }
    double getY(){
        return y;
    }
    void setXY(double x, double y){
        this->x = x;
        this->y = y;
    }
    double distance(double x, double y){
        return sqrt((this->x - x) * (this->x - x) + (this->y - y) * (this->y - y));

    }
    double distance (Point another){
        return distance(another.getX(), another.getY());
    }
};

class Account{
    private:
    int id;
    string name;
    int balance;
    public:
    Account(int id, string name){
        this->id = id;
        this->name = name;
    }
    Account(int id, string name, int balance){
        this->id = id;
        this->name = name;
        this->balance = balance;
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
    int getBalance(){
        return balance;
    }
    void deposit(int amount){
        balance += amount;
    }
    void withdraw(int amount){
        if(balance < amount){
            cout<<"That amount exceeds your current balance."<<endl;
        }
        else{
            balance -= amount;
        }
    }
    void display(){
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;

    }
};

/*Tính kế thừa*/
class crush : public Person{
    private:
    string hobbit;
    public:
    crush(string name, int age, string hobbit) :Person(name, age){
        this->hobbit = hobbit;
    }
    void setHobbit(string hobbit){
        this->hobbit = hobbit;
    }
    string getHobbit(){
        return hobbit;
    }
};

class Employees{
    private:
    string name;
    int salary;
    public:
    Employees(string name, int salary){
        this->name = name;
        this->salary = salary;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setSalary(int salary){
        this->salary = salary;
    }
    int getSalary(){
        return salary;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};