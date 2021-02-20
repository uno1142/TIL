# Mathクラス

使いそうなものを覚えておこう。競プロなら特に使うかも？

# Abs

大文字。
`Math.Abs(-100)`など。

## Max,Min

`Math.Max(a,b)`
`Math.Min(a,b)`

大文字！！！！

## 小数点切り捨て/切り上げ

```
var n = 3.7;
var floor = Math.Floor(n);//切り捨て
var ceiling = Math.Ceiling(n);//切り上げ
```


## 四捨五入

偶数丸めというのがあり、普通にRoundを使うと端数が0.5のとき偶数に近いほうに丸める。
一般的な四捨五入の時は第二引数に`MidpointRounding.AwayFromZero`を指定する必要がある。

偶数丸めは、大量のデータを処理する際に値が大きいほうにぶれてしまうのを防ぐためにある。

