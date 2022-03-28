#include<iostream>  

using namespace std;

struct Students{
    int obtain_marks;
    int total_marks;
};

int main(){
    Students one;
    cout<<"enter obtained marks: ";
    cin>>one.obtain_marks;    
    cout<<"enter total marks: ";
    cin>>one.total_marks;
    float percentage = (float(one.obtain_marks)/(one.total_marks))*100;

    cout<<"Percentage is: "<<percentage;
    return 0;
    
}