// Write a C++ program to design a base class Person (name, address,
// phone_no). Derive a class Employee (eno, ename) from Person. Derive a
// class Manager (designation, department name, basic-salary) from
// Employee.



#include <iostream>
using namespace std;

class Person
{
private:
    long long int phone_no;
    string name, address;

public:
    void setName(string name)
    {
        this->name = name;
    }

    void setaddress(string address)
    {
        this->address = address;
    }

    void setPhone(long long int phone)
    {
        this->phone_no = phone;
    }

    long long int getPhoneNumber()
    {
        return phone_no;
    }

    string getAddress()
    {
        return address;
    }
    string getName()
    {
        return name;
    }
};

class Employee : public Person
{
private:
    int eno;

public:
    void setEmpNo(int eno)
    {
        this->eno = eno;
    }

    int getEmpNo()
    {
        return eno;
    }
};

class Manager : public Employee
{
private:
    string designation, departmentName;
    float basicSalary;

public:
    void setDesignation(string designation)
    {
        this->designation = designation;
    }

    void setDepartmentName(string departmentName)
    {
        this->departmentName = departmentName;
    }

    void setSalary(float sal)
    {
        basicSalary = sal;
    }

    string getDesignation()
    {
        return designation;
    }

    string getDepartmentName()
    {
        return departmentName;
    }

    float getSalary()
    {
        return basicSalary;
    }

    void displayData(){
        cout<<"Employee No : "<<getEmpNo()<<endl;
        cout<<"Name : "<<getName()<<endl;
        cout<<"Address : "<<getAddress()<<endl;
        cout<<"Phone NO : "<<getPhoneNumber()<<endl;
        cout<<"Designation : "<<getDesignation()<<endl;
        cout<<"DepartmentName : "<<getDepartmentName()<<endl;
        cout<<"Salary : "<<getSalary()<<endl;
    }
};


int main()
{
    int no;
    long long int phone;
    float salary;
    string name, address, designation, departmentName;
    Manager m1;
    cout << "Enter Employee Details" << endl;
    cout << "--------------------------" << endl;

    cout << "Enter Employee No : ";
    cin >> no;
    m1.setEmpNo(no);

    cout << "Enter Name : ";
    cin >> name;
    m1.setName(name);

    cout << "Enter Address : ";
    cin >> address;
    m1.setaddress(address);

    cout << "Enter phone No : ";
    cin >> phone;
    m1.setPhone(phone);

    cout << "Enter designation : ";
    cin >> designation;
    m1.setDesignation(designation);

    cout << "Enter departmentName : ";
    cin >> departmentName;
    m1.setDepartmentName(departmentName);

    cout << "Enter basic salary : ";
    cin >> salary;
    m1.setSalary(salary);

    cout<<endl;
    cout<<"All Detail"<<endl;
    m1.displayData();

    return 0;
}