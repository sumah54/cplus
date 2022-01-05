#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	//hashim work
	int space =6;
	for (int x = 1; x <=6 ;x+=2){
		if (x > 1){
			cout << endl;
			
		}
		cout<< setw(space);
		space -= 1;
		for ( int i= 1; i <= x;i++){
			cout <<'x';
		}
	}
	cout<<endl<< setfill('-')<<setw(15)<<"OR"<<setw(14)<<'-';
	cout<<setfill(' ')<<setw(0);
	
	//my work
	int x = 5;
	for (int a=0;a<=5;a+=2){
		if(a>1){
			cout<<endl;
		}
		cout<<setw(x);
		x--;
		for (int y=1;y<a;y++){
			cout<<'x';
		}
	}
	cout<<endl<< setfill('-')<<setw(15)<<"OR"<<setw(14)<<'-';
	cout<<setfill(' ')<<setw(0)<<endl;
	
 	
	
	cout<<endl;
	return 0;
}
