//汎用関数
#include <iostream>
#include <random>
#define N 4
#define RMAX 10
using namespace std;
// defines a generic class
template <class X> class myArray{
public:
  X data[N];
  X max();
};
// defines a generic function
template <class X> X myArray<X>::max(){
  X largest;
  for(int i = 1; i < sizeof(data)/sizeof(data[0]); i++){ if(largest < data[i]){ largest = data[i]; }}
  return largest;
}
int main(){
  myArray<int> forInt={1,2,5,3};
  myArray<double> forDouble={0.1,0.2,0.5,0.2};
  myArray<char> forChar={'a','b','x','c'};
  myArray<bool> forBool={true,false,true,false};

  cout << "forInt.max() = " << forInt.max() << endl;
  cout << "forDouble.max() = " << forDouble.max() << endl;
  cout << "forChar.max() = " << forChar.max() << endl;
  cout << "forBool.max() = " << (forBool.max()?"true":"false") << endl;
}
