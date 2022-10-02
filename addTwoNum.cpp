// Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in
// derived class.

#include <iostream>
using namespace std;

class math
{
private:
    int num1, num2;

public:
    math()
    {
        num1 = 0;
        num2 = 0;
    }
    void setNumber(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    int getNum1()
    {
        return num1;
    }
    int getNum2()
    {
        return num2;
    }
};

class Addition : public math
{

public:
    void display()
    {
        cout<<"Sum is "<<getNum1() + getNum2()<<endl;
    }
};


int main(){
  Addition num1;
  num1.setNumber(5,7);
  num1.display();
  return 0;
}
