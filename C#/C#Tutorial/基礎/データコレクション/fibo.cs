using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Hello
{
    class Program
    {
        static void Main(string[] args)
        {
            var fibo = new List<int> {1,1};

            for(int i = 2; i < 20; i++){
                var prev = fibo[fibo.Count-1];
                var prev2 = fibo[fibo.Count -2];
                fibo.Add(prev + prev2);
                Console.WriteLine(fibo[i]);
            }

        }
    }
}