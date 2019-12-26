//演算子オーバーロード
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class case_ins : public string{
public:
  case_ins(const char *str) : string(str) {}
};

bool operator==(case_ins a, case_ins b){
  if(a.size()!=b.size()){return false;}
  for(int i=0; i<a.size(); i++){if(a[i]-b[i]!=0 && a[i]-b[i]!=-32 && a[i]-b[i]!=32){return false;}}
  return true;
}

int main(){
  case_ins c="aaa";
  case_ins arr[]={"aaa","AAA","bbb","12345","x"};
  for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){cout << c << " and " << arr[i] << " is " << (c==arr[i]?"true":"false") << endl;}
}
