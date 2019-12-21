#include <iostream>
using namespace std;

class bookshelf{
public:
  bookshelf(){top=""; middle=""; bottom="";};
  void showShelves();
  string top;
  string middle;
  string bottom;
};

void bookshelf::showShelves(){
  cout << "\n現在の本棚の本一覧：\n";
  cout << " top:" << top << "\n";
  cout << " middle:" << middle << "\n";
  cout << " bottom:" << bottom << "\n";
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

    if (whenRead=="a"){
      bs->top=bookName;
    }else if(whenRead=="b"){
      bs->middle=bookName;
    }else if(whenRead=="c"){
      bs->bottom=bookName;
    }else{
      cout << "a,b,cのどれかでいつ読むか答えてください\n";
    }

    bs->showShelves();

  }

}
