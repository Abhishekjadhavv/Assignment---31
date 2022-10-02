// Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.

#include <iostream>
#include <string.h>
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    void setName(string n)
    {
        name = n;
    }
    void setAge(int n)
    {
        age = n;
    }

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

class Employee : public Person
{
private:
    int empid;
    float salary;

public:
    void setEmpId(int id){
       empid = id;
    }

    void setEmpSalary(float sal){
       salary = sal;
    }

    int getEmpID(){
     return empid;
    }

    int getEmpSalary(){
        return salary;
    }

    void showEmployeeData(){
        cout<<"EmployeeID : "<<getEmpID()<<endl;
        cout<<"Name : "<<getName()<<endl;
        cout<<"Age : "<<getAge()<<endl;
        cout<<"Salary : "<<getEmpSalary()<<endl;
    }
};

int main(){
    Employee E1;
    E1.setName("Abhishek");
    E1.setAge(21);
    E1.setEmpId(1);
    E1.setEmpSalary(50000);
    E1.showEmployeeData();
    return 0;
}