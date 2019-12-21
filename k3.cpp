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
  person find(string query);
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

person addressbook::find(string q){
  person no_one;
  no_one.name = "";
  for(int i = 0; i < numberOfFriends; i++){
    if(friends[i].name==q){
      return friends[i];
    }
  }
  return no_one;
}

int main(){
  addressbook abook;
  string name;
  string address;
  string query;

  while(1){
    cout << "住所録に登録する名前を入力してください（終了するにはquitと入力してください : ";
    cin >> name;
    if(name=="quit"){ break; }
    cout << "住所録に登録する住所を入力してください : ";
    cin >> address;
    abook.addFriend(name,address);
  }

  cout << "探したい人の名前を入力してください : ";
  cin >> query;
  person found = abook.find(query);
  if(found.name == ""){
    cout << "見つかりませんでした。";
  }else{
    cout << found.name << ":" << found.address;
  }

}
