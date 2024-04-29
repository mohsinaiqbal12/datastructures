#include<iostream>
using namespace std;
class time{
	int hours;
	int minutes;
	public:
		void gettime(int h,int m){
			hours=h;
			minutes=m;
		}
		void putdata(){
			cout<<"hours is :"<<hours<<endl;
			cout<<"minutes is :"<<minutes<<endl;
		}
		void sum(time x,time y){
			minutes=x.minutes+y.minutes;
			hours=minutes/60;
			minutes=minutes%60;
			hours=hours+x.hours+y.hours;
		}
};
int main()
{
	time t1,t2,t3;
	t1.gettime(20,30);
	t2.gettime(9,38);
	t3.sum(t1,t2);
	cout<<"total time is :";
	t3.puttime();
	
}