#include<iostream>
using namespace std;
class counter{
	private:
		int count;
		public:
			counter():count(0){
			};
			void inccount(){
				count++;
			}
			int getcount(){
				return count;
			}
};
int main(){
	counter c1,c2;
	c1.getcount();
	c2.getcount();
	
	c1.inccount();
	c2.inccount();
	
	c1.getcount();
	c2.getcount();
}