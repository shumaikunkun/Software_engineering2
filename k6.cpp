#include <iostream>
using namespace std;

class person{
protected:
  string name;
public:
  void setName(string n){name = n;}  //セッター
  string getName(){return name;}  //ゲッター
};

int main()
{
  int n=3; //人数
  person friends[n];
  string inputName;

  for(int i=0; i<n; i++){
    cout << i + 1 << "番目の名前は？";
    cin >> inputName;
    friends[i].setName(inputName);
  }

  cout << "\n名前リスト:\n";
  for(int i=0; i<n; i++){
    cout << " " << friends[i].getName() << "\n";
  }
}
