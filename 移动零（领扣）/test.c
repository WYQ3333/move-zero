//����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��
//ʾ�� :
//���� : [0, 1, 0, 3, 12]
//��� : [1, 3, 12, 0, 0]
// ˵�� :
//	������ԭ�����ϲ��������ܿ�����������顣
//	�������ٲ�������

#include<stdio.h>
#include<Windows.h>

void moveZeroes(int* nums, int numsSize) {
	int i = 0;
	int j = 0;
	int k = 0;
	while (k < numsSize)
	{
		while (i<numsSize&&nums[i] != 0)
		{
			i++;
		}
		while (j<numsSize&&nums[j] == 0)
		{
			j++;
		}
		if (i>=numsSize || j>=numsSize)
		{
			return;
		}
		if (i < j)
		{
			int tmp = -1;
			tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
		}
		k++;
	}
}

int main()
{
	int nums[] = { 0, 1, 0, 3, 12 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	moveZeroes(nums, numsSize);
	printf("\n");
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	system("pause");
	return 0;
}