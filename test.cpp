#include<iostream>
#include<conio>
class test{
	public:
		test()
		{
			n=10;
			cout<<n;
		}
		~test(){
			cout<<"object destroyed";
		}
}; 
void main()          
{
	test ob;
	getch;
}