#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> temp;  //중복 값 없는 자료구조 
    
    for(int i=0;i<numbers.size();i++){
        for(int j=i+1; j<numbers.size();j++){
            temp.insert(numbers[i]+numbers[j]);
        }
    }
    
    vector<int> answer (temp.begin(), temp.end());
    return answer;
}
