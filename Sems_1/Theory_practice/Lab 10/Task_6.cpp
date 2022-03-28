#include<iostream>
using namespace std;
class Student{
    
    public:
    string name;
    int roll_no;
    int section;


};
class Courseby: public Student{
    public:
    string course_name;
    int time_period;
    float price;

};


int main(){
    Courseby student1;
    cout<<"Enter your full name(without dots) and end with a period(full stop): ";
    getline(cin,student1.name,'.');
    cout<<"Enter your roll number: ";
    cin>>student1.roll_no;
    cout<<"Enter your section(1 or 2 or 3): ";
    cin>>student1.section;
    cout<<"Enter your course you want to be in(don't include period in between the course name and end it with a period): ";
    getline(cin,student1.course_name,'.');
    cout<<"According to you, how long it would be? ";
    cin>>student1.time_period;
    cout<<"And what is the price of the course? ";
    cin>>student1.price;
    return 0;
}