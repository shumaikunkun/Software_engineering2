//ファイル入出力
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main(){
  // ファイル書き出し
  ofstream fout("test.txt");
  if(!fout){cout << "出力ファイルが開けません"; return 1;}
  for(int i = 0; i < 5; i++){fout << i << "\n";}
  fout.close();

  // ファイル読み込み
  ifstream fin("test.txt");
  if(!fin){cout << "入力ファイルが開けません"; return 1;}
  int i;
  while(!fin.eof()){
    string str;
    fin >> str;
    if(str!=""){cout << "line " << i++ << ": " << str << "\n";}
  }
  fin.close();
  return 0;
}
