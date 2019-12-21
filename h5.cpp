//多重継承の実装
#include <iostream>
using namespace std;

class movie{
public:
  string title;
  movie(string t){title=t;};
};

class copyprotection{
public:
  string code;
  copyprotection(string c){code=c;};
};

class protectedMovie : public movie, public copyprotection{
public:
  protectedMovie(string t, string c) : movie(t), copyprotection(c){};
};

int main(){
  protectedMovie pm("matrix", "100-11");
  cout << pm.title << ":" << pm.code << "\n";
}
