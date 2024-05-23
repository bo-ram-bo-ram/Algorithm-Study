#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int large = a >= b ? a : b;
    int small  = large == a ? b : a;

    for(int i=small; i<=large; i++)
        answer += i;
    return answer;
}