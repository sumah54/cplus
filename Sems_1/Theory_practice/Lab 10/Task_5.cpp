#include<iostream>

using namespace std;
class Car
{
private: //can not access members outside the class
    int num;
    static int number; //share same data to other objects

public: //members can be accessed outside the class
    void setNum(int a){ //use to set the value of certain member
        num =a;

    }
    void getNum(){ //use to get/show the value of certain member
        cout<<num<<endl;
    }
    void TotalCars(){
        cout<<number<<endl;
    }
    Car(){ //when object is created it is executed
        cout<<"Object of class car is created."<<endl;
        ++number;
    }
    };
int Car::number = 3;
int main(){
    Car lambo;
    lambo.setNum(3);
    lambo.getNum();
    lambo.TotalCars();
    return 0;


}