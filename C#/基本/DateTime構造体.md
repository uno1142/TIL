# DateTime構造体

## 現在の日時を取得

Nowプロパティを使う。

```
var now  = DateTime.Now;
//時間も取得する
```

日付だけ欲しいときは、Todayを使う。

```
var today = DateTime.Today;
//時間は取得しないのですべて0になる
```

## N日後/N日前を得る

AddDaysメソッドを使う。

```
var date1 = new DateTime(2020,9,10);
var date2 = date1.AddDays(10);//10日後
var date3 = date1.AddDays(-7);//7日前

```

## 書式を指定して日付を文字列変換する

ToStringメソッド。オプションいっぱい。
```
var s1 = date.ToString("d");//2019/04/03  のような形
var s2 = date.ToString("D");//2019年4月3日
var s3 = date.ToString("f");//2019年4月3日 19:08 のように日付つき
var s4 = date.ToString("F");//2019年4月3日 19:08:53
```

ほかにもいっぱいできるよ！形式に合わせてggって書こう。