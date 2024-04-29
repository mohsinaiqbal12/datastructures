//operator multiply
#include<iostream>
using namespace std;
class arith
{
	int n;
	public:
		void get()
		{
			cout<<"enter the number";
			cin>>n;
		}
		void show(){
			cout<<n;
		}
		arith operator*(arith m)
		{
			arith temp;
			temp.n=n*m.n;
			return temp;
		}
};
int main()
{
	arith x1,y1,res;
	x1.get();
	y1.get();
	res=x1*y1;
	res.show();
}