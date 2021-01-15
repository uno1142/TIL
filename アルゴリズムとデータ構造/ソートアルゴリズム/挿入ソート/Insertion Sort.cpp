#include<bits/stdc++.h>
using namespace std;


int main(){
  int N;
  cin >> N;
  int A[1100];
  
  for(int i =0; i<N ;i++){
    cin >> A[i];//ここまで入力
  }
  
  for(int i = 0; i < N; i++){
    int v = A[i]; //i番目の配列の要素を保存しておく
    int j = i-1; //i-1番目のjを用意
    while( j >=0 && A[j] > v){ //i-1番目の要素がi番目の要素より大きいとき
      A[j+1] = A[j]; //A[i]が入っていた位置にA[i-1]にあった要素を引っ越し
      j--; //jを減らす
      A[j+1] = v; //減らしてから足したので、A[i-1]の位置に、もともとA[i]にあった要素vを移動させる
    }
    
    for(int j = 0; j < N; j++){
      if(j == N-1){
        cout << A[j]<< endl;
        break;
      }
      cout << A[j]<< " ";
    }

  }
}

