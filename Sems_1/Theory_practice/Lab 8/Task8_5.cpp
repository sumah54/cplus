#include<iostream>

using namespace std;
int main(){

const int size=5;
int sum=0,pro=1;
    int array[5]={5,10,15,20,25};
    cout<<array[size-2]<<endl;
    for(int i=size-1;i>2;i--){
        sum+=array[i];
        pro*=array[i];
    }
    cout<<"Addition"<<sum<<endl;
    cout<<"Multiplication"<<pro<<endl;
}    