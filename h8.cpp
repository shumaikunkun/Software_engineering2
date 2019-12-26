#include <iostream>
using namespace std;

class ex_account_too_long{
public:
  string account;
  ex_account_too_long(string str){account = str;};
  string show(){ return "アカウント '" + account + (account.length()>6 ? "' は長すぎます。" : "' は短すぎます。"); };
};

int main(){
  string account;
  int accountlenlim = 6;
  int accountshortlim = 3;
  cout << "希望アカウントを入力してください（英数字3文字以内6文字以内）: ";
  cin >> account;
  
  try{
    if(account.length() > accountlenlim || account.length() < accountshortlim){
      ex_account_too_long ex2long(account);
      throw ex2long;
    }else{
      cout << "\n" << account << "さん、ようこそ！\n\n";
    }
  }catch(ex_account_too_long e){
    cout << "\nException: " << e.show() << "\n\n";
  }
}
