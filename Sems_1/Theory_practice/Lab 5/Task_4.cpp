#include<iostream>

using namespace std;

int main(){
    cout<<"Vowel    Consonent"<<endl;
    for(int i=65;i<=90;i++){
        char c=i;
        if(i==65||i==69||i==73||i==79||i==85)
        cout<<c;
        else
        cout<<" "<<c<<endl;
    }
}
