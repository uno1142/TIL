using ll = long long;

//n^kをMODで割ったあまりを求める繰り返し二乗法

ll pow_mod(ll n, ll k, ll MOD){
  ll r = 1;
  //kの下の桁から処理。右シフトで処理し終わった桁を追い出す。
  //ゼロになるまでやる
  for(;k>0; k >>= 1){
    if(k & 1) r = (r * n) % MOD; //kの一番下の桁のフラグが立っていたらnをかける
    n = (n * n) % MOD; //次の桁の処理にむけてnを自乗しておく
  }
  return r;
}
