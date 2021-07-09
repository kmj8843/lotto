using System;
using System.Collections.Generic;

namespace cs
{
    class Program
    {
        static void Main(string[] args)
        {
            SortedSet<int> set = new SortedSet<int>();
            Random rnd = new Random();

            while ( set.Count < 6 ) set.Add(rnd.Next(0, 46));

            Console.Write("CS => [ ");
            foreach (var val in set)
                Console.Write($"{val} ");
            Console.Write("]");
        }
    }
}
// dotnet new console
// dotnet run