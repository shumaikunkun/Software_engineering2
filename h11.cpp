//フレンド関数と前方宣言
#include <math.h>
#include <iostream>
using namespace std;

#define PIE 3.1416
#define TOKYO_LOC 35.68

class site_loc;  //前方宣言（distance関数でクラス定義前に呼び出すため）

class user_loc{
  double longitude;
  double latitude;
public:
  user_loc(double x, double y){longitude=x; latitude=y;}
  friend double distance(user_loc u, site_loc s);
};

class site_loc{
  double longitude;
  double latitude;
public:
  site_loc(double x, double y){longitude=x; latitude=y;}
  friend double distance(user_loc u, site_loc s);
};

double distance(user_loc u, site_loc s){
  double dlon=u.longitude-s.longitude;
  double dlat=u.latitude-s.latitude;
  return sqrt(pow(dlon*40000/360,2) + pow(dlat*40000*cos(TOKYO_LOC*PIE/180)/360,2));
}

int main(){
  user_loc ul(35.681236, 139.767125);  //東京駅の緯度経度
  site_loc sl(36.048783, 140.036734);  //つくば駅の緯度経度
  cout << "東京駅とつくば駅の直線距離は、" << distance(ul,sl) << "kmです。\n";
}
