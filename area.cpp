#include<iostream>
#include<math.h>
using namespace std;
float area(float a,float b){
	return a*b;
}
float area(int a,int b,int c){
	float s=(a+b+c)/2;
	float n=s*(s-a)*(s-b)*(s-c);
	return sqrt(n);
}
int area(int a,int b){
return a*b;
}
float area(int r){
	return 3.14f*r*r;
}
int main(){
	cout<<"area of reactangle is"<<area(3.0f,4)<<endl;
	cout<<"area of triangle is"<<area(3,4,5)<<endl;
	cout<<"area of square is"<<area(3,3)<<endl;
	cout<<"area of circle is"<<area(2)<<endl;
}