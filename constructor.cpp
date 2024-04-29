#include<iostream>
using namespace std;
class customer
{
	string name;
	int account_number;
	int balance;
	customer()
	{
		cout<<"constructor is called";
	}
	customer(string a,int b,int c)
	{
		name=a;
		account_number=b;
		balance=c;
	}
	
};
int main(){
	customer A1("mohsina",123,1000);
	
}