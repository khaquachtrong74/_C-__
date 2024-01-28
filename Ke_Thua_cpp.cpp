#include "OOP_tutorial.cpp"
#include<iostream>
using namespace std;

class Manager:public Employees{
    private:
    int bonus;
    public:
    Manager(string name, int salary, int bonus):Employees(name, salary){
        this->bonus = bonus;
    }
    void setBonus(int bonus){
        this->bonus = bonus;
    }
    int getBonus(){
        return bonus;
    }
    int getSalary(){
        return Employees::getSalary() + bonus;
    }
    void display(){
        Employees::display();
    } 
};