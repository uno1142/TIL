#rand()

乱数生成できる
友達の課題のお手伝いで学んだ

精度はそんなに高くないのと初期化しないと毎回同じ結果になるのに注意

0~1 の浮動小数点数の乱数
```
double num = (double)rand() / RAND_MAX;
```

範囲指定つき浮動小数点数の乱数(2.0~4.0など)
```
double num = rmin + (rmax - rmin) * ( (double)rand() / RAND_MAX);
```