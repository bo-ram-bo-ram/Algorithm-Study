#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    vector<string> num = {
        "zero","one","two","three","four","five",
        "six", "seven", "eight", "nine"};
    
    string answer ="";
    
    string tmp="";
    for(int i=0; i<s.size(); i++){
        if(!isalpha(s[i])){  //알파벳이아니다
            answer += s[i];
        }
        else tmp += s[i];   //알파벳이면 tmp에 저장
        if(find(num.begin(),num.end(),tmp)!=num.end()){
            //문자열이 저장된 tmp에 num에 들어있는 문자열(one..)을 반환한게 있다면
            answer += to_string(find(num.begin(),num.end(),tmp)-num.begin());
            tmp="";
        }
    }
    return stoi(answer);
}