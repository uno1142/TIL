//各桁の総和を求める関数を作る
int souwa(int N){
  int sum = 0;
  while(N > 0){
    sum += N %10;
    N /= 10; //これで総和が出る
  }
  return sum; //総和を返す
}
