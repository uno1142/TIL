using System;
using System.Collections.Generic;



namespace ExampleApp2
{

    class Program
    {
        static void Main()
        {
            var lines = new List<string>
            {
                "おはよう",
                "こんにちは",
                "こんばんは",
            };
            lines.Add("おやすみ");
            lines.Add("さようなら");

            lines.RemoveAt(2);

            var str = lines[0];
            Console.WriteLine(str);

            var n = lines.Count;
            Console.WriteLine(lines[n-1]);

            lines.Clear();
            Console.WriteLine(lines.Count);

        }
    }


}



