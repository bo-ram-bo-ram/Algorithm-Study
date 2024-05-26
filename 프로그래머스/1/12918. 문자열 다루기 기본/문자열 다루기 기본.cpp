#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    // 문자열의 길이가 4 또는 6인지 확인
    if (s.size() == 4 || s.size() == 6) {
        // 문자열의 모든 문자가 숫자인지 확인
        for (int i = 0; i < s.size(); i++) {
            if (!isdigit(s[i])) {
                return false;
            }
        }
        return true; // 모든 문자가 숫자라면 true 반환
    }
    return false; // 길이가 4 또는 6이 아니라면 false 반환
}
