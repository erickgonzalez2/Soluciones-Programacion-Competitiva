#include <iostream>
namespace Figures{
	class Rectangle{
		public: int width,height;
	};
	int rectangleArea(Rectangle r){
		return r.width*r.height;
	}
}
using namespace Figures;
using namespace std;
int main(){
	Rectangle r;
	cin>>r.height;
	cin>>r.width;
	cout<<rectangleArea(r);
	return 0;
}
