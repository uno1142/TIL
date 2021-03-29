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


        //コンストラクタの定義
        public VirtualPet()
        {
            Name = "エイミー";
            Mood = 5;
            Energy = 100;
        }
    }


}



