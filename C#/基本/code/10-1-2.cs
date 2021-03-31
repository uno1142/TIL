using System;


namespace ExampleApp2
{

    class Program
    {
        static void Main()
        {
            var mypet = new VirtualPet();
            Console.WriteLine($"Name: {mypet.Name}");
            Console.WriteLine($"Mood:{mypet.Mood}");
            Console.WriteLine($"Energy:{mypet.Energy}");
        }
    }

    class VirtualPet
    {
        public string Name{get; set;}
        public int Mood{get; set;}
        public int Energy{get; set;}

        /*


        //コンストラクタの定義
        public VirtualPet()
        {
            Name = "エイミー";
            Mood = 5;
            Energy = 100;
        }

        */

        //引数のあるコンストラクタ
        public VirtualPet(string name)
        {
            Name = name;
            Mood = 5;
            Energy = 100:
        }

        /*
        var name = Console.ReadLine();
        var mypet = new VirtualPet(name);

        などで引数を指定したコンストラクタを呼び出せる
        引数つきで定義した場合は呼び出し時に引数を指定しないとコンパイルエラーになるので注意
        初期化漏れを防ぐことができるというメリットがある

        オーバーロードも可能
        */
    }


}



