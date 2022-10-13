#include <iostream>
using namespace std;



void three_max(int& a, int& b, int& c)
{

	if (a >= b && a >= c)
	{
		b = a;
		c = a;
	}
	else
	{
		if (b >= a && b >= c)
		{
			a = b;
			c = b;
		}
		else
		{
			a = c;
			b = c;
		}
	}

}
int& func(int* m, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (m[i] < 0) return m[i];
	}

	return m[0];
}

void func(int* m1, int n1, int* m2, int n2)
{
	for (int j = 0; j < n2; j++)
	{
		//m2[j]
		for (int i = 0; i < n1; i++)
		{
			if (*(m1 + i) == *(m2 + j))
			{
				*(m2 + j) = 0;
				break;
			}
		}
	}
}

int main()
{
	
	int A = 3, B = 5, C = 4;

	three_max(A, B, C);
	cout << A << " " << B << " " << C << '\n';
	
	
		int m[] = { 3, 2, 4, -5, 3, 2 };
	int n   = sizeof(m) / sizeof(m[0]);

	int& c = func(m, n);
	c = 11;
	cout << m[3] << endl;
	

	int m1[] = { 3, 6, 4, 1,  4, 8, 2 };
	int n1 = sizeof(m1) / sizeof(m1[0]);

	int m2[] = { 5, 3, 1, 5, 10, 8 };
	int n2 = sizeof(m2) / sizeof(m2[0]);

	func(m1, n1, m2, n2);


	for (int i = 0; i < n2; i++)
	{
		cout << m2[i] << " ";
	}



}
