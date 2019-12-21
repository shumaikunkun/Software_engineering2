//ポインタを用いて値を入れ替える

// //ポインタ渡しの場合
// #include <iostream>
// using namespace std;
// void func(int *a, int *b){
//   int *cp;
//   *cp = *a;
//   *a = *b;
//   *b = *cp;
// }
//
// int main(){
//   int x = 10;
//   int y = 20;
//   cout << x << ":" << y <<"\n";
//   func(&x,&y);
//   cout << x << ":" << y <<"\n";
// }

//参照渡しの場合
#include <iostream>
using namespace std;
void exchange(int &a, int &b){
  int cp;
  cp = a;
  a = b;
  b = cp;
}

int main(){
  int x = 10;
  int y = 20;
  cout << x << ":" << y << "\n";
  exchange(x,y);
  cout << x << ":" << y << "\n";
}
