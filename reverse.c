#include <stdio.h>
#include <stdlib.h>

void reverse(char *str1, int length, int d)
{
	char temp;
	if (d > 0) {											// if d > 0
		for (int i = 0;i < d/2;i++) {						// reverse A
			temp = str1[i];
			str1[i] = str1[d - 1 - i];
			str1[d - 1 - i] = temp;
		}
		for (int i = 0;i < (length - d)/2;i++) {			// reverse B
			temp = str1[d+i];
			str1[d + i] = str1[length - 1 - i];
			str1[length - 1 - i] = temp;
		}
		for (int i = 0;i < length / 2;i++) {				// reverse ArBr
			temp = str1[i];
			str1[i] = str1[length - 1 - i];
			str1[length - 1 - i] = temp;
		}
	}
	else {													// if d<=0
		d = -d;
		for (int i = 0;i < length / 2;i++) {				// reverse ArBr
			temp = str1[i];
			str1[i] = str1[length - 1 - i];
			str1[length - 1 - i] = temp;
		}
		for (int i = 0;i < d / 2;i++) {						// reverse A
			temp = str1[i];
			str1[i] = str1[d - 1 - i];
			str1[d - 1 - i] = temp;
		}
		for (int i = 0;i < (length - d) / 2;i++) {			// reverse B
			temp = str1[d + i];
			str1[d + i] = str1[length - 1 - i];
			str1[length - 1 - i] = temp;
		}
	}
}
