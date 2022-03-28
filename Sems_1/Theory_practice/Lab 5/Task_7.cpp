#include<iostream>

using namespace std;

int main(){
    int sum=0;
    float average;
    for(int i=0;i<=100;i++){
        sum+=i;
    }
    average = float(sum)/100;
    cout<<"the sum is "<<sum<<endl;
    cout<<"The average is: "<<average<<endl;
    return 0;
    
}