/* sample 3 */
#include <iostream>
using namespace std;

class person{
public:
  string address;
  string name;
};

class addressbook{
  person friends[100]; //スコープがメソッド内だけのインスタンス変数
  int numberOfFriends; //スコープがメソッド内だけのインスタンス変数
public:
  addressbook();
  void listFriends();
  void addFriend(string n);
};

// constructor
addressbook::addressbook(){
  numberOfFriends = 0;
}

void addressbook::addFriend(string n){
  friends[numberOfFriends].name = n;
  numberOfFriends++;
}

void addressbook::listFriends(){
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << "\n";
  }
}

int main()
{
  addressbook abook;
  string name;

  while(1){
    cout << "住所録に登録する名前を入力してください（終了するにはquitと入力してください）: ";
    cin >> name;
    //   cout << "name.length() = " << name.length() << "\n";
    if(name == "quit"){ break; }
    abook.addFriend(name);
  }

  cout << "\n名前リスト:\n";
  abook.listFriends();
}
