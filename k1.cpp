#include <iostream>
using namespace std;

class person{
public:
  string name;
  string email;
};

int main()
{
  int n=3; //人数
  person friends[n];
  for(int i=0; i<n; i++){
    cout << i + 1 << "番目の名前は？";
    cin >> friends[i].name;
    cout << i + 1 << "番目のメールアドレスは？";
    cin >> friends[i].email;
  }
  cout << "\n名前リスト:\n";
  for(int i=0; i<n; i++){
    cout << " " << friends[i].name << ":" << friends[i].email << "\n";
  }
}
