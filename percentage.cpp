// Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.
#include <iostream>
using namespace std;

class StudentData
{
private:
    int physice, Chemistry, Mathematics;

public:
    void setMarks(int ph, int chemi, int math)
    {
        this->physice = ph;
        this->Chemistry = chemi;
        this->Mathematics = math;
    }

    int getPhMarks()
    {
        return physice;
    }

    int getChemiMarks()
    {
        return Chemistry;
    }

    int getMathMarks()
    {
        return Mathematics;
    }
};

class TotalMark :public StudentData
{
private:
    int totalMarks;

protected:
    void calculateMarks()
    {
        totalMarks = getPhMarks() + getChemiMarks() + getMathMarks();
    }

public:
    int getTotalMarks()
    {
        calculateMarks();
        return totalMarks;
    }
};

class Student : public TotalMark
{
private:
    float percentage;

public:
    void calculPercentage()
    {
        percentage = getTotalMarks() / 3.0;
    }
    void display()
    {
        cout << percentage << "%" << endl;
    }
};

int main()
{
    Student s1, s2;
    cout<<"Student 1"<<endl;
    s1.setMarks(65,70,64);
    cout<<"Total Marks"<<endl;
    cout<<s1.getTotalMarks()<<endl;
    s1.calculPercentage();
    cout<<"Percentage"<<endl;
    s1.display();
    cout<<endl;
    cout<<"Student 2"<<endl;
    s2.setMarks(90,95,77);
    cout<<"Total Marks"<<endl;
    cout<<s2.getTotalMarks()<<endl;
    s2.calculPercentage();
    cout<<"Percentage"<<endl;
    s2.display();

    return 0;
}