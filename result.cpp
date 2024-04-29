//multilevel inheritance
#include<iostream>
using namespace std;
class student{
	protected:
		int rno;
		public:
			void getrno(int a){
				rno=a;
			}
			void showrno(){
				cout<<"roll no :"<<rno<<endl;
			}
};
class test:public student{
	protected:
		float s1,s2;
		public:
			void getmarks(float x,float y){
				s1=x;
				s2=y;
			}
		void showmarks(){
				cout<<"marks in sub 1:"<<s1<<endl;
				cout<<"marks in sub 2:"<<s2<<endl;
			}
};
class result:public test{
	float total;
	public:
		void display(){
			total=s1+s2;
			showrno();
			showmarks();
			cout<<"total is:"<<total<<endl;
		}
};
int main(){
	result r;
	r.getrno(4);
	r.getmarks(100,200);
	r.display();
}