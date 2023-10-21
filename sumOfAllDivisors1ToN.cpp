class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        int num = 1;
        long long store = 0;
        while (num - 1 != N)
        {

            for (int i = 1; i <= num; i++)
            {
                if (num % i == 0)
                {
                    store += i;
                }
            }
            num++;
        }
        return store;
    }
};