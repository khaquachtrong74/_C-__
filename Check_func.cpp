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
    Employee e(1, "Kien", "Hoang", 1000);  
	cout << "Id: " << e.getId() << endl;
	cout << "Name: " << e.getFullName() << endl;
	cout << "Salary: " << e.getSalary() << endl;
    return 0;
}