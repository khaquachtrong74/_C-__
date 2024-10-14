#include<iostream>
#include "OOP_tutorial.cpp"

using namespace std;

int main(){
    // //class ArrayCaculator::
    // int arr1[] = {3 , 4 , 7};
    // double arr2[] = {1.3, 6.5, 6.8};
    // cout<<ArrayCalculator::maxOfArray(arr1, sizeof(arr1)/sizeof(arr1[0]))<<endl;
    // cout<<ArrayCalculator::maxOfArray(arr2, sizeof(arr2)/sizeof(arr2[0]))<<endl;
    // cout<<ArrayCalculator::minOfArray(arr1, sizeof(arr1)/sizeof(arr1[0]))<<endl;
    // cout<<ArrayCalculator::minOfArray(arr2, sizeof(arr2)/sizeof(arr2[0]))<<endl;

    // //Class Student
    // Student as ("Kha",'m');
    // as.display();
    
    // Class Person
    // Person a;
    // a.setAddress("Dak nhau, thong nhat");
    // a.setAge(32);
    // a.setId(123412);
    // a.setName("Kha");
    // cout<<a.getAddress()<<" "<<a.getAge()<<" "<<a.getId()<<" "<<a.getName()<<endl;

    //Test REctangle;
    // Rectangle r(4, 5);
	// cout << "Area: " << r.getArea() << endl;
	// cout << "Perimeter: " << r.getPerimeter() << endl;
	// r.setLength(2);
	// r.setWidth(3);
	// cout << "Area: " << r.getArea() << endl;
	// cout << "Perimeter: " << r.getPerimeter() << endl;

    //Student_02
    // Student s(1001, "Trung", 24, "Ha Noi", 5);
	// cout << s.getId() << endl;
	// cout << s.getName() << endl;
	// cout << s.getAge() << endl;
	// cout << s.getAddress() << endl;
	// cout << s.getScore() << endl;
	// s.setScore(-7);
	// cout << s.getScore() << endl;
	// s.setScore(15);
	// cout << s.getScore() << endl;

    //Employee.cpp
    // Employee e(1, "Kien", "Hoang", 1000);  
	// cout << "Id: " << e.getId() << endl;
	// cout << "Name: " << e.getFullName() << endl;
	// cout << "Salary: " << e.getSalary() << endl;
    // return 0;

    //Date.cpp
    // Date d(1, 1, 1997);
	// d.display();
	// d.setDate(12, 12, 2004);
	// d.display();
	// d.setMonth(3);
	// d.display();	

    // Time t(12, 1, 1);
	// t.display();
	// t.setTime(23, 59, 59);
	// t.display();
	// t.nextSecond();
	// t.display();
	// t.nextSecond();
	// t.display();
	// t.setTime(7, 0, 0);
	// t.display();
	// t.previousSecond();
	// t.display();

	// Point p1(1.5, 6.7);
	// Point p2(2.8, 3.2);
	// cout << p1.distance(p2) << endl;
	// cout << p1.distance(2.34, 7.8) << endl;

	// Account account1(1000, "Tuan", 2000);
	// account1.display();
	// account1.withdraw(2100);
	// account1.deposit(600);
	// cout << "Balance: " << account1.getBalance() << endl;
	// account1.withdraw(2100);
	// cout << "Balance: " << account1.getBalance() << endl;

	/*Call class crush*/
	crush a("ChDuOc",18,"fighter");
	cout<<"Name: "<<a.getName()<<endl;
	cout<<"Age: "<<a.getAge()<<endl;
	cout<<"Hobbit: "<<a.getHobbit()<<endl;
	return 0;
}