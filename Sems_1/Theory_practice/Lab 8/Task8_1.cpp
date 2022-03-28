#include<iostream>

using namespace std;

int main(){
    const int size=5;
    int sum=0;
    int array[5]={5,10,15,20,25};
    
    for(int i=0;i<size;i++){
    sum+=array[i];
    }
    return 0;
}