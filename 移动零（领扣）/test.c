//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//示例 :
//输入 : [0, 1, 0, 3, 12]
//输出 : [1, 3, 12, 0, 0]
// 说明 :
//	必须在原数组上操作，不能拷贝额外的数组。
//	尽量减少操作次数

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
		j = i;
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
	int nums[] = {1,1 };
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

//解题思路

//首先遍历一遍数列，用另个数列按顺序存储所有非 0 的元素，在将存储的非零元素按顺序复制到原数列中，空位补 0 即可。

//直观的解题思路新建额外的数组，不符合要求，但是对于我们下面的优化算法很有起始。