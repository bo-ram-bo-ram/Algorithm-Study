#include <iostream>
using namespace std;

#include <stack>

int k = 0;
int result = 0;
int temp = 0;
stack<int> st;

void input(){
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> temp;

        if(temp==0){
            st.pop();
        }else{
            st.push(temp);
        }
    }
}

void solution(){
    while (!st.empty()) { // 스택이 비어있을 때까지 반복 
        result += st.top(); // 스택의 맨 위의 값 더하기
        st.pop(); // 스택에서 값 제거
    }
    cout << result;
}

void solve(){
    input();
    solution();
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}
