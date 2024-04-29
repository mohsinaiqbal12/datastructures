#include<iostream>
using namespace std;
class counter{
	int count;
	public:
		counter():count(0){
		}
		void show(){
			cout<<"count is :"<<count<<end l;
		}
		void operator++(){
			++count;
		}
};
	int main(){
		counter c1,c2;
		c1.show();
		c2.show();
		++c1;
		++c2;
		c1.show();
		c2.show();
	}