/*
�ǹ����� ���α׷����� �� ���� ��� �����͵��� ��ü�� �����Ǿ� ����������
���� ���� ������ �����ϰ� �ֱ� ����
Ư���� ������ �������� �����ϱ�
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
	//���� ������ ������ ��������
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