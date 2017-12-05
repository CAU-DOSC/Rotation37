#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BlockSwap(char *str, int n, int d)
{
	int data = (d < 0) ? -d : d;
	char *TempStr = (char*)malloc(sizeof(char)*data);
	
	if (d > 0)//Clockwise Rotation
	{
		for (int i = 0;i < data;i++)//str�� �պκ� data��ŭ�� TempStr�� ����
			TempStr[i] = str[i];

		for (int i = 0;i < n - data;i++)//str�� �պκ� data��ŭ�� ������ �޺κ��� �������� ��ܿ�
			str[i] = str[i + data];

		for (int i = 0;i < data;i++)//str�� �޺κ� data��ŭ�� TempStr�� �������� ä��
			str[n - data + i] = TempStr[i];
	}
	else if (d < 0)//CounterClockwise Rotation
	{
		for (int i = 0;i < data;i++)//str�� �޺κ� data��ŭ�� TempStr�� ����
			TempStr[i] = str[n - data + i];

		for (int i = 0;i < n - data;i++)//str�� �޺κ� data��ŭ�� ������ �պκ��� �������� ��ܿ�
			str[n - i - 1] = str[n - i - 2];

		for (int i = 0;i < data;i++)//str�� �޺κ� data��ŭ�� TempStr�� �������� ä��
			str[i] = TempStr[i];
	}

	free(TempStr);
}