#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;



int main(){
  long long N, Q;
  cin >> N >> Q;
  vector<long long>A(N);
  rep(i,N)cin >> A[i];

  rep(j,Q){
    
    long long ans = 0;
    long long x;
    cin >> x;
    long long sum = 0;
    int right = 0;
    
    
    for(int left = 0; left <N; left++){
      while(sum +A[right] <= x && right< N){
        sum += A[right];
        right++;
      }
      //ここを抜けた時，rightは最大
      ans += (right - left);
      
      if(right == left){
        right++;
      }
      else{
        sum -= A[left];
      }
    }
    
    cout << ans << endl;
    
  }
  
}
