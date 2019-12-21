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
  void addFriend(string n, string a);
};

// constructor
addressbook::addressbook(){
  numberOfFriends = 0;
}

void addressbook::addFriend(string n, string a){  //input
  friends[numberOfFriends].name = n;
  friends[numberOfFriends].address = a;
  numberOfFriends++;
}

void addressbook::listFriends(){  //output list
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << ":" << friends[i].address << "\n";
  }
}

int main()
{
  addressbook abook;
  string name;
  string address;

  while(1){
    cout << "住所録に登録する名前を入力してください（終了するにはquitと入力してください : ";
    cin >> name;
    if(name=="quit"){ break; }
    cout << "住所録に登録する住所を入力してください : ";
    cin >> address;
    abook.addFriend(name,address);
  }

  cout << "\n名前リスト:\n";
  abook.listFriends();
}
