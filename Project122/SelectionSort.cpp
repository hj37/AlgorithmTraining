#include <stdio.h>

int main() {
	int i, j, min, index, temp;
	//min은 최소값 찾기, index는 원소위치
	//temp는 임시공간 
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 10; i++) {
		min = 9999;	//모든 원소들보다 더 큰 숫자 임의 가정

		for (j = i; j < 10; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];	//가장 앞으로 최솟값을 넘겨줘야됨 
		array[i] = array[index];
		array[index] = temp;
		//스왓핑 

	
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d", array[i]);
	}

	return 0;
}