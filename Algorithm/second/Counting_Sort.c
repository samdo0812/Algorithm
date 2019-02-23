#include <stdio.h>

int main() {
	int temp;
	int count[6];
	int array[30] = {1,3,2,4,3,2,5,3,1,2,
					 3,4,4,3,5,1,2,3,5,2,
					 3,1,4,3,5,1,2,1,1,1,};

	//count 배열 초기화
	for (int i = 0; i <= 5; i++)
	{
		count[i] = 0;
	}

	//count 배열의 현재 요소값들이 0, array의 요소들을 확인 후 count의 요소값들을 ++ 해줌
	for (int i = 0; i < 30; i++)
	{
		count[array[i]]++;
	}
	
	//출력
	for (int i = 0; i <= 5; i++)
	{
		if (count[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
			{
				printf("%d",i);
			}
		}
	}
}