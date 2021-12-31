using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            int a, b;

            Console.WriteLine("Введите два числа (стороны прямоугольника): ");
            a = Convert.ToInt32 (Console.ReadLine());
            b = Convert.ToInt32 (Console.ReadLine());

            Console.WriteLine("Площадь прямоугольника равна: " + (a * b) + "\nПериметр прямоугольника равен: " + ((a + b) * 2));
        }
    }
}