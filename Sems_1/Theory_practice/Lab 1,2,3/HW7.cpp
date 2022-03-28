#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	cout<<"               C              "<<endl
       <<"            i     I            "<<endl
       <<"          s         s          "<<endl 
       <<"        b             b        "<<endl
       <<"      e                 e	     "<<endl
       <<"    s                     s    "<<endl
       <<"   t s e b s i C i s b e s t   "<<endl;
//--------------------------OR---------------------------	
	cout<<setw(22)			   <<'C'			   <<endl
	<<setw(18)<<'i'			<<setw(7) 		  <<'I'<<endl
	<<setw(16)<<'s'			<<setw(11)		  <<'s'<<endl
	<<setw(14)<<'b'			<<setw(15)		  <<'b'<<endl
	<<setw(12)<<'e'			<<setw(19)		  <<'e'<<endl
	<<setw(10)<<'s'			<<setw(23)		  <<'s'<<endl
	<<setw(10)<<'t'<<" s e b s i C i s b e s "<<'t'<<endl;
	return 0;
	}
