#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    int iBindex = 0;
    int iAindex = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < A.size(); i++)
    {
        if (A[iAindex] < B[i])
        {
            iAindex++;
            answer++;
        }
    }

    return answer;
}