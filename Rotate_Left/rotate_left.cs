using System;
using System.Collections.Generic;

namespace Rotate
{
    class Result
    {
        
        public static List<int> rotLeft(List<int> a, int d)
        {
            List<int> rotated = new List<int>(a);
            for(int i = 0; i < a.Count; i++)
            {
                rotated[i] = a[(i + d) % a.Count];
            }
            return rotated;
        }
        public static void Main(string[] args)
        {
            List<int> test = new List<int> {1,2,3,4,5};
            int amount = 3;
            test = rotLeft(test, amount);
            foreach(int num in test)
            {
                System.Console.Write(num);
            }
            System.Console.Write("\n");
        }
    }
}
