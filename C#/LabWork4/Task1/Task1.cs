using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            int a, b;

            Console.WriteLine("������� ��� ����� (������� ��������������): ");
            a = Convert.ToInt32 (Console.ReadLine());
            b = Convert.ToInt32 (Console.ReadLine());

            Console.WriteLine("������� �������������� �����: " + (a * b) + "\n�������� �������������� �����: " + ((a + b) * 2));
        }
    }
}