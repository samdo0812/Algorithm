/*
실무에서 프로그래밍을 할 때는 모든 데이터들이 객체로 정리되어 내부적으로
여러 개의 변수를 포함하고 있기 때문
특정한 변수를 기준으로 정렬하기
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int score;

	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	//정렬 기준은 점수가 작은순서
	bool operator < (Student &student) {
		return this->score < student.score;
	}
};

/*
bool compare(int a, int b) {
	return a > b;
}
*/


int main() {
	Student students[] = {
		Student("A",100),
		Student("B", 90),
		Student("C", 80),
		Student("D", 70),
		Student("E", 60),
	};

	sort(students, students + 5);

	for (int i = 0; i < 5; i++)
	{
		cout << students[i].name << ' ';
	}

}