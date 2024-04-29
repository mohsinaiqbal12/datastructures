//overloading binary operator
using namespace std;
class complex{
	private:
		float x,y;
		public:
			complex(float o,float q):x(o),y(q){
			}
			void show(){
				cout<<x<<"+ i"<<y<<endl;
			}
			complex operator+(complex m){
				return complex((x+m.x),(y+m.y));
			}
};
int main(){
	complex A(20,30);
	complex B(30,40);
	complex C=A+B;
	c.show();
}