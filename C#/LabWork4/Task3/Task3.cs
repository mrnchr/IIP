using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            double a, b;

            Console.WriteLine("������� ��� �����: ");
            a = Convert.ToDouble(Console.ReadLine());
            b = Convert.ToDouble(Console.ReadLine());

            Console.Write("������� �������������� �����: " + (a + b) / 2 + "\n");

            Console.Write("������� ����� ������� ��� �����������...");
            Console.ReadKey();
        }
    }
}