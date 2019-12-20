#include <iostream>
using namespace std;

class person{
public:
  string name;
};

class ticket{
public:
  int id;
  person* user;
  ticket(){user = new person;}  //コンストラクタ
};

class transTicket : public ticket {  //継承
public:
  string origin;  //出発地
  string destination;  //到着地
  transTicket(): ticket(){};  //コンストラクタの継承
};

class planeTicket : public transTicket{
public:
  string planeName;
  planeTicket(): transTicket(){};
};

int main()
{
  int ticketNum;
  cout << "チケットを何枚購入しますか？ : ";
  cin >> ticketNum;
  cout << "\n";

  planeTicket* tickets = new planeTicket [ticketNum];  //人数分のメモリ解放してインスタンス生成

  for(int i = 0; i < ticketNum; i++){
    tickets[i].id = i+1;
    cout << i+1 << "人目の利用者の名前を入力してください: ";
    cin >> tickets[i].user->name;
    cout << " 出発地を入力してください: ";
    cin >> tickets[i].origin;
    cout << " 到着地を入力してください: ";
    cin >> tickets[i].destination;
    cout << " 飛行機の名前を入力してください: ";
    cin >> tickets[i].planeName;
  }

  cout << "\n チケット利用者一覧：\n";
  for(int i = 0; i < ticketNum; i++){
    planeTicket t = tickets[i];
    cout << " " << t.id << " : " << t.user->name << " : " << t.origin << " => " << t.destination << ":" << t.planeName << "\n";
  }
}
