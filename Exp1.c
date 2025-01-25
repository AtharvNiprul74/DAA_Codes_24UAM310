#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int low=0;
    int high=numsSize-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[low]<=nums[mid])
        {
            if(nums[low]<=target && target < nums[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(nums[mid]<target && target<=nums[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}

void main()
{
    //Test case 1
    // int arr[6]={4,5,6,7,0,1};
    // int n=6;
    // int target=0;
    // int res=search(arr,n,target);
    // printf("%d",res);

    //Test case 2
    // int arr[6]={4,5,6,7,0,1};
    // int n=6;
    // int target=3;
    // int res=search(arr,n,target);
    // printf("%d",res);

    //Test case 3
    // int arr[1]={1};
    // int n=1;
    // int target=0;
    // int res=search(arr,n,target);
    // printf("%d",res);
}