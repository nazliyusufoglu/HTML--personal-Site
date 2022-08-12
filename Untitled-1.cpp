#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

class myclass{
	int x;
	public: 
	myclass(){
		x=0;
	}
	myclass(int j){
		x=j;
	}
	myclass(const myclass &o){
		
		
	}
	
	int get(){return x;
	}
	void set(int j){x=j;
	}
};

int main(){
	
	myclass ob();
	myclass ob2(2);
	cout << "ob: "<<ob.get()<<endl<<;
	cout << "ob2:"<< ob2.get()<<endl<<;
	
}