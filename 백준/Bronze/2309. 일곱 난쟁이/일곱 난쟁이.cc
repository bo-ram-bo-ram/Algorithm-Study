#include <iostream>
#include <algorithm>
using namespace std;
#define NUM 9

int input(int height[], int size);
void find(int height[], int size);

int main() {
	int height[NUM] = { 0 };

	int total=0;

	total=input(height, NUM);

	sort(height,height+NUM);

    for (int i = 0; i < NUM; i++) {
        for (int j = i + 1; j < NUM; j++) {
            if (total - height[i] - height[j] == 100) {
                for (int k = 0; k < NUM; k++) {
					if (k != i && k != j) {
                        cout << height[k] << "\n";
                    }
                }   
				return 0; // 일곱 난쟁이를 찾았으므로 프로그램 종료 
            }
        }
    }
	return 0;
}

int input(int height[], int size) {
	int sum=0;
	//std::cout << "9명의 난쟁이의 키를 입력하세요 :\n";

	for (int i = 0; i < size; i++) {
		cin >> height[i];
		sum+= height[i];
	}
	return sum;
}
