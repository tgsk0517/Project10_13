#include <stdio.h>

class Thousand {
public:
	Thousand(int maxNum)
	{
		max = maxNum;
		int* thousandArray = new int[max];
	}

	~Thousand() {
		delete[] thousandArray;
		thousandArray = nullptr;
	}

	void SetThousandArray(int array, int num) 
	{
		if (array < 0 || array > max)
		{
			printf("配列外を参照しています。");
		}
		else
		{
			thousandArray[array] = num;
		}
	}

	int GetThousandArray(int array) 
	{
		if (array < 0 || array > max)
		{
			printf("配列外を参照しています。");
			return 0;
		}
		else
		{
			return thousandArray[array];
		}
	}

	void ApplyThousand()
	{
		for (int i = 0; i < max; i++)
		{
			SetThousandArray(i, i);
		}
	}
	
	int max;

private:
	int* thousandArray = new int[0];
};

int main()
{
	Thousand thou(1000);
	thou.ApplyThousand();
	for (int i = 0; i < thou.max; i++)
	{
		printf("%d\n", thou.GetThousandArray(i));
	}
}
