#include <stdio.h>
int *TwoSum(int arr[], int size, int target, int res[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
                if (arr[i] + arr[j] == target)
                {
                    res[0] = i;
                    res[1] = j;
                    return res;
                }
                else
                {
                    printf("Target not found!");
                    return NULL;
                }
        }
    }
}
int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int res[2];
    int *arr = TwoSum(nums, 4, target, res);
    if (arr != NULL)
    {
        printf("[%d,%d]", res[0], res[1]);
    }
    return 0;
}