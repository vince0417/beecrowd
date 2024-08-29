using System;

namespace Problem
{
    class P1001
    {
        public static void Solution()
        {
            int n1, n2, soma;
            n1 = int.Parse(Console.ReadLine());
            n2 = int.Parse(Console.ReadLine());
            soma = n1 + n2;
            
            Console.WriteLine("X = " + soma);
        }
    }
}