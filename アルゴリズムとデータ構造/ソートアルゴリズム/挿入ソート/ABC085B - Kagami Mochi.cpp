#include<bits/stdc++.h>
using namespace std;

int main(){
  //もちの直径を配列に入れてソートしてから数えあげる
  
  int N;
  cin >> N;
  int A[110]; //直径d1,d2...が入る配列
  for(int i =0; i <N; i++){
    cin >> A[i];
  }
  
  //ソートする
  //挿入ソート、昇順にする
  int v =0;
  for(int i =1 ; i <N ; i++){ //iが未ソート部分の先頭の要素
    v = A[i]; //vに一時的に保存しておく
    int j = i -1; //jはこの時点でソート済み部分の先頭になる
    while(j >= 0 && A[j] < v){ //A[j]が未ソート要素vより小さかったら
      A[j+1] = A[j]; //A[j+1]にA[j]をずらす
      j--; //jを減らす。
    }
    //A[j]がvと等しいか大きくなったら
    A[j+1] = v; //vを挿入する。while文内で1減らしているのでj+1
    
  }
  int ans = 1; //重なっていなくても1段になってる
  for(int i =1; i <N; i++){
    if(A[i] != A[i-1] ){
      ans++; //直径が同じじゃなければ大→小の順なので重なる
    }
  }
  cout << ans << endl;
}