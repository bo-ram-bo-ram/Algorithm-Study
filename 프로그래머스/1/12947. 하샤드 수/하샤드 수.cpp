#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum=0;
    int num=x;
    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    if(x%sum!=0)
        answer=false;
    return answer;
}