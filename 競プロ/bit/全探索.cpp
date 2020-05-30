#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,W;
  cin >> N >> W;
  vector<int> a(N);
  for(int i =0; i < N; i++){
    cin >> a[i];
  }
  
  //bit全探索
  bool exist = false;
  for(int bit =0; bit < (1 << N); bit++){
    //組み合わせの全通りに、bitで番号を付けている！例：N=5,01001→9番目。N=5の時は10000つまり2の5乗通りある
    int sum = 0;
    for(int i = 0; i < N; i++){
      //i番目のフラグが立っているものを取り出す。
      if(bit &(1 << i)){//bit回目の探索の中で、bitのi番目のフラグが立っていたら
        sum += a[i]//選ばれている要素すべてのa[i]を足し合わせる。
      }
      
      if(sum == W){ //この合計値が、その探索したbit番目の組み合わせの合計値。Wと一致で存在する。
        exist = true;
      }
    }
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
