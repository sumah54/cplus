#include<iostream>

using namespace std;
class Student{
    private:
    static int id;
    string name;
    string father_name;
    string caste;
    int roll_no;
    int section;
    int semes_no;
    public:
    void setAll(){
        cout<<"Enter your name(end it with a period\'.\'): ";
        getline(cin,name,'.');
        cout<<"Enter your Father's name(end it with a period): ";
        getline(cin,father_name,'.');
        cout<<"Enter your Caste: ";
        cin>>caste;
        cout<<"Enter your roll number: ";
        cin>>roll_no;
        cout<<"Enter your section: ";
        cin>> section;
        cout<<"Enter your semester(in numbers): ";
        cin>>semes_no;
    }
    void ShowAll(){
        cout<<"Name: "<<name<<endl;
        cout<<"Father's Name: "<<father_name <<endl;
        cout<<"Caste"<<caste <<endl;
        cout<<"Roll Number: "<<roll_no <<endl;
        cout<<"Section: "<<section <<endl;
        cout<<"Semester: "<<semes_no <<endl;
    }
};


int main(){
    Student one;
    one.setAll();
    one.ShowAll();
    return 0;
    
}