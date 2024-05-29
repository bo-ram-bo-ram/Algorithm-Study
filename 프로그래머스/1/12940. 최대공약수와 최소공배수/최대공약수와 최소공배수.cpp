#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a=n;    //최대공약수
    int b=m;    //최소공배수
    int r=0;    //나머지
    
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    answer.push_back(a);
    answer.push_back(n * m / a);
    return answer;
}