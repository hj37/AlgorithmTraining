#include <stdio.h>

int main() {
	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{//뒤에서부터 하나씩 최소값이 담겨서

			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				//바로 옆에 있는거를 계속해서 비교해감 
			}			
		}

	}

	for (int k = 0; k < 10; k++)
	{
		printf("%d ", array[k]);
	}

	return 0;

}