# map

連想配列。mapを使うと特定の値に、ある値が紐づいているようなデータが扱える。  
`map<keyの型,valueの型> 変数名;`  

例
```
int main(){
  map<string, int> score;
  score["Alice"] = 100
  score["Bob"] = 89;
  score["Charlie"] = 95;
  
  cout << score.at("Alice") << endl; //Aliceの成績が出力される。
}
```

この例の氏名の方をkey、成績の方をvalueと呼ぶ。

- 値の追加  
`変数[key] = value;`    
`score[Dave] = 70;`

- 値の削除  
`変数.erase(key);`  
`score.erase("Bob");`

- アクセス  
`変数.at(key) //keyに対応するvalueが存在しない場合はエラーになる`
`変数[key] //keyに対応するvalueが存在しない場合はvalueの型の初期値が追加される`

- 所属判定  
keyに対応するvalueが存在するか判定  
```
if(score.count("Alice")){ //存在すればtrue
  cout << "Alice" << score.at("Alice") << endl;
  //scoreのkeyに"Alice"が存在すれば出力されるが、存在しなければ("Alice:"を含め)なにも出力されない
}
```
