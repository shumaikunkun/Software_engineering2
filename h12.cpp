//const と mutable
#include <iostream>
using namespace std;

class rectangle{
  double width, height;
  mutable double area;
public:
  int get_area() const {area = width * height; return area;};
  rectangle(double x, double y){width = x; height = y;};
};

int main(){
  rectangle rect(20, 30);
  cout << "area = " << rect.get_area() << endl;
}
