#include<iostream>
using namespace std;
class subtract{
	int x;
	public:
		void getx()
		{
			cout<<"enter the number";
			cin>>x;
		}
		void showres(){
			cout<<x;
		}
		subtract operator_(subtract m){
			subtract temp;
			temp.x=x-m.x;
			return temp;
		}
	};
	int main()
	{
		subtract a,b,c;
		a.getx();
		b.getx();
		c=a-b;
		c.showres();
	}
		
