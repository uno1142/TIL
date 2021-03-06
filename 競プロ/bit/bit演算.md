# bit演算とは

## AND

2つの数を二進法で表記したとき、それぞれの桁ごとにANDをとったもの

例) 45 AND 25

45 = 0b101101
25 = 0b011001  
なので
45 AND 25 = 0b001001  
0,3のフラグが立っているので1+8 = 9  
よって45 AND 25 = 9

## OR

ANDのとこをORにしただけ。  
例) 45 OR 25  
45 = 0b101101
25 = 0b011001  
より
45 OR 25 = 0b111101  
0,2,3,4,5のフラグが立っているので1+4+8+16+32 = 61

## std:bitsetを用いた出力

普通に出力すると整数値で出力されるが、bitsetを用いると2進数などで出力できる。  
正確にはbitset<値>の値に入れられた数だけのbool値を持つ配列を表現できる。(フラグが立っている、のイメージ)


## bit演算を用いたフラグ管理

ここまでで何となくフラグについては理解した！  
では表記するにはどうすればいいだろうか。  
c++にてa番目のフラグが立っている状態は(1<<a)と表せる。  
さらにa,b,c番目のフラグが立っている状態は(1<<a)|(1<<b)|(1<<c)と表せる！  

これを用いると、以下ようなフラグ管理ができる！  
|やりたいこと|実装|
|----|----|
|ビットbitにi番目のフラグが立っているかどうか|if(bit&(1<<i))|
|ビットbitにi番目のフラグが消えているかどうか|if(!(bit&(1<<i)))|
|ビットbitにi番目のフラグを立てる|bit｜= (1<<i)|
|ビットbitのi番目のフラグを消す|bit&= ~(1<<i)|
|ビットbitに何個のフラグが立っているか|_builtin_popcount(bit)|
|ビットbitにi番目のフラグを立てたもの|bit｜(1<<i)|
|ビットbitにi番目のフラグを消したもの|bit&~(1<<i)|

### ここまでに覚えること

A AND B は、(A&B)と表記する。  
A OR Bは、(A|B)と表記する。
(1 << i)で、i番目のフラグが1,つまり立っているということ。  
フラグを消すときは &=~(1 << i)

## XOR演算

書き方は^  
XOR演算では，x,yのビットの一方だけが1の場合に結果が1となる．  
言い換えると，x,yのビットが等しい場合に0になる．
例：`0111 XOR 0100 = 0011`

## NOT演算

書き方は~  
単純にbitを反転させる演算で，0ビットは1に，1ビットは0になる  
例：`NOT 0111 = 1000`

## test

変数.test(i)でiの位置のフラグが立っているか調べられる  
要はif(bit &(i << N))をif(s.test(i))で書ける．
