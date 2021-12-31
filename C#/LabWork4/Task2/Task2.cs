using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main (string[] args)
        {
            double d;
            const double pi = 3.14f;

            Console.Write("Введите диаметр круга: ");
            d = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Длина круга равна: " + (pi * d));

            Console.Write("Нажмите любую клавишу для продолжения...");
            Console.ReadKey();
        }
    }
}