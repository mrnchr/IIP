using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main (string[] args)
        {
            double d;
            const double pi = 3.14f;

            Console.Write("������� ������� �����: ");
            d = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("����� ����� �����: " + (pi * d));

            Console.Write("������� ����� ������� ��� �����������...");
            Console.ReadKey();
        }
    }
}