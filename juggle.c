#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2)
{
	int num_gcd = 1;
	int temp = (num1 > num2 ? num1 : num2);
	for (int i = 1; i < temp; i++)
	{
		if ((num1%i == 0) && (num2%i == 0))
			num_gcd = i;
	}
	return num_gcd;
}

void juggle(char *str1, int length, int d)
{
	int i, j, k, temp, g, s;
	int gcd_num = 0;
	if (d > 0)
		gcd_num = gcd(d, length);
	else
		gcd_num = gcd(-d, length);

	if (d > 0)
	{
		for (i = 0; i < gcd_num; i++)
		{
			temp = str1[i];
			j = i;
			while (1)
			{
				k = j + d;
				if (k >= length)
					k = k - length;

				if (k == i)
					break;

				str1[j] = str1[k];
				j = k;
			}
			str1[j] = temp;
		}
	}

	else
	{`
		d = -d;
		for (i = 0; i <gcd_num; i++)
		{
			k = i;

			while (k < length)
			{
				k += d;
			}
			k -= d;
			j = k;
			s = k;
			temp = str1[j];
			while (1)
			{
				k -= d;
				if (k < 0)
					k += length;
				if (k == j)
					break;
				str1[s] = str1[k];
				s = k;
			}
			str1[s] = temp;
		}
	}
	return;
}

