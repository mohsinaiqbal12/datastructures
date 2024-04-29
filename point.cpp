#include<iostream>
using namespace std;
class point{
	int x,y;
	public:
		void getxy(){
			cout<<"enter the coordinates:";
			cin>>x>>y;
		}
		point operator+=(point a){
			point temp;
			temp.x=x+a.x;
			temp.y=y+a.y;
			return temp;
		}
		void showxy(){
			cout<<x<<y;
		}
};
int main(){
	point p1,p2;
	p1.getxy();
	p2.getxy();
	p1+=p2;
}