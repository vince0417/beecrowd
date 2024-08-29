//Soma Simples
using System;

namespace Problem
{
    class P1003
    {
        public static void Solution()
        {
            int n1, n2, soma;
            n1 = int.Parse(Console.ReadLine());
            n2 = int.Parse(Console.ReadLine());
            soma = n1 + n2;
            
            Console.WriteLine("SOMA = " + soma);
        }
    }
}