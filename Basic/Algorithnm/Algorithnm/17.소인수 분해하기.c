#include <stdio.h>
#include <math.h>

//수정 요망 ㅠㅠ


int main() {
	int a[100];	//소인수가 저장될 배열
	int b;	//소인수로 분해하기 위해 입력 받은 숫자가 저장 될 변수
	int c;	//소인수를 저장 할 배열 A의 위치를 지정 해주는 변수
	int d;	//제수가 저장 될 변수, 2부터 입력 받은 수 B의 제곱근까지 1씩 증가하는 숫자가 저장된다.
	int e;	//입력 받은 수 B의 제곱근이 저장될 변수, 즉 B가 20이면 E에는 4가 저장된다.
	int	mok, nmg;

	scanf("%d " , &b);
	c = -1;	//소인수를 저장할 배열 위치 
	
	d = 2;

	while (1)
	{
		e = (int)sqrt(b);	//입력 받은 b의 제곱근을 구해 정수로 변환 후 e에 저장

		while (1)
		{
			if (d>e)
			{
				d = b;
				break;
			}
			
			mok = b / d;
			nmg = b - (mok * d);

			if (nmg == 0)
			{
				break;
			}
			else
			{
				d++;
			}
		}

		c++;
		a[c] = d;
		if (b == d)
		{
			break;
		}
		b = mok;
	}

	for (int i = 0; i <=c; i++)
	{
		printf("%d", a[i]);
	}
}