#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int A[110];
  
  for(int i =0; i<N ;i++){
    cin >> A[i];
  }
  
  //配列Aにカードを入れる。
  //配列Aを降順にソートする
  //バブルソート
  bool flag = 1;
  for(int i =0; flag; i++){ //フラグが立っている=交換があった。　交換がなくなるまでやる
    flag = 0;
    for(int j= N -1; j > i; j-- ){
      if(A[j] > A[j-1] ) {
        swap(A[j],A[j-1]);
        flag = 1;
      }
    }
    
  }

  int sum_a =A[0];
  int sum_b =0; //アリスとボブの点数
  for(int i =1; i < N; i++){
    if(i % 2 == 0){ //iが偶数の時。0,2,4...なのでアリス
      sum_a += A[i];
    }
    else sum_b += A[i];
    
  }
  
  cout << sum_a - sum_b << endl;
}
