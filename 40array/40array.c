//折半查找实现
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int findData = 10;
	int left = 0, right = 9, midIdx;
	int idx = -1;

	while (left <= right)
	{
		midIdx = (left + right) / 2;
		if (findData == arr[midIdx])
		{
			idx = midIdx;
			break;
		}
		else if (findData > arr[midIdx])
			left = midIdx + 1;
		else
			right = midIdx - 1;
	}
	if(idx == -1)
		printf("find none\n");
	else
		printf("idx = %d\n",midIdx);

	return 0;
}