#include <stdio.h>

class Thousand {
public:
	~Thousand() {
		delete[] thousandArray;
		thousandArray = nullptr;
	}

	void SetThousandArray(int array, int num) { thousandArray[array] = num; }

	int GetThousandArray(int array) { return thousandArray[array]; }

	void ApplyThousand()
	{
		for (int i = 0; i < 1000; i++)
		{
			SetThousandArray(i, i);
		}
	}

private:
	int* thousandArray = new int[1000];
};

int main()
{
	Thousand thou;
	thou.ApplyThousand();
	printf("%d", thou.GetThousandArray(999));
}
