//参照返しによるメンバへの代入
#include <iostream>
using namespace std;

class bookshelf{
public:
  bookshelf(){top=""; middle=""; bottom="";};
  string& getShelf (string destination);
  void showShelves();
  string top;
  string middle;
  string bottom;
};

string& bookshelf::getShelf (string destination){
  if (destination=="a"){
    return top;
  }else if(destination=="b"){
    return middle;
  }else if(destination=="c"){
    return bottom;
  }else{
    exit (0);
  }
}

void bookshelf::showShelves(){
  cout << "\n 現在の本棚の本一覧：\n";
  cout << "  top:" << top << "\n";
  cout << "  middle:" << middle << "\n";
  cout << "  bottom:" << bottom << "\n";
}

int main(){
  bookshelf* bs = new bookshelf;
  string bookName;
  string whenRead;

  while(1){
    cout << "\n本の名前を入力してください(やめるにはqを入力してください) : ";
    cin >> bookName;
    if (bookName=="q"){break;}
    cout << "いつ読見ますか？（すぐ読む=>a, あとで読む=>b, 積ん読=>c）: ";
    cin >> whenRead;

    if(whenRead=="a" || whenRead=="b" || whenRead=="c"){
      bs->getShelf(whenRead)=bookName;  //参照返しによってメンバに代入
      bs->showShelves();  //一覧表示
    }else{
      cout << "a,b,cのいずれかで答えてください\n";
    }
  }
}
