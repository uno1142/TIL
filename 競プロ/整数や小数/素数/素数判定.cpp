#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  if(N == 0){
    cout << "NO" << endl;
    return 0;
  }
  bool prime = true;
  
  for(long long i =2; i * i <= N; i++){ //注意！ i * i <= Nはi*i=N も含めること(例:N=9のi=3などの素べき)！また、sqrt(N)でもいいが可能な限り整数のみ使いたいのでこちらのほうが完結
    if(N % i == 0) prime = false;
  }
  if(prime) cout << "YES" << endl;
  else cout << "NO" << endl; 
  
}
