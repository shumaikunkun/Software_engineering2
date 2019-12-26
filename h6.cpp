//ファイル入出力
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(){
  string inFileName;
  cout << "複製するファイル名を入力してください(例 test.txt) : ";
  cin >> inFileName;

  ifstream fin(inFileName.c_str());
  if(!fin){cout << "入力ファイルが開けません"; return 1;}
  ofstream fout(inFileName+".backup");
  while(!fin.eof()){
    string str;
    fin >> str;
    if(str!=""){fout << str << "\n";}  //最後の改行が1つ増えないように
  }
  fout.close();
  fin.close();
  return 0;
}
