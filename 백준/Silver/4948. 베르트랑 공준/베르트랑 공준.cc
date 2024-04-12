#include <iostream>
using namespace std;

int num = 0;
int arr[246913] = {0};

void isPrime() {
    int i = 2;
    arr[0] = false; // 소수 아닌애들 전처리
    arr[1] = false; // 소수 아닌애들 전처리

    while (i <= 246912) {
        if (arr[i])
            for (int j = i + i; j <= 246912; j += i)
                if (arr[j])
                    arr[j] = false;
        i++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> num;

    fill(arr, arr + 246913, true);
    isPrime();

    while (num) { // 입력값이 0이면 종료
        int result = 0; // 반복마다 result를 초기화해줘야함!!!!

        for (int i = num + 1; i <= 2 * num; i++)
            if (arr[i])
                result++;

        cout << result << "\n";

        cin >> num;
    }

    return 0;
}