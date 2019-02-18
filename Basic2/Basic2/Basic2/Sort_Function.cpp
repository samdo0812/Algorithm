#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int main() {

	int a[10] = {9,3,5,4,1,10,8,6,7,2};

	sort(a, a+10,compare);	//기본적으로 sort함수는 오름차순 정렬을 내부적으로 포함하고 있었다.

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';
	}
}