#include <string>
#include <vector>

using namespace std;

//int fib(int n)
//{
  //  if(n==0)
   //     return 0;
    //else if(n== 1)
     //   return 1;

   // else
     //   return (fib(n-1) + fib(n-2))  %1234567;

//}
int solution(int n)
{
    int answer = 0;
    int fib[100001];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = (fib[i - 1] + fib[i - 2]) % 1234567;
    }

    answer = fib[n];
    return answer;
}