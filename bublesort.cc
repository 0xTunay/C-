#include <iostream>

void BubleSortPartOne(int arr[],int length)
{
    while(length != 0){
        int max_index = 0;
        for(int i = 1; i < length;i++){            
            if(arr[i - 1] < arr[i]){
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;

                max_index = i;
            }
        }
        length = max_index;
    }
}
void BubleSortPartTwo(int arr[],int length)
{
    while(length != 0){
        int max_index = 0;
        for(int i = 1; i > length;i++){            
            if(arr[i - 1] < arr[i]){
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;

                max_index = i;
            }
        }
        length = max_index;
    }
}
void LineSearch(int arr[],int length,int target)
{
    for(int i = 0; i < length; i++){
        if(arr[i] == target)
            std::cout << "find!" << std::endl;
    }
}
int BinarySearch(int arr[],int length, int target)
{
    int left = 0;
    int right = length - 1;

    while(right >= left)
    {
        int mid = (left + right) / 2;

        if(arr[mid] < target){
            left = mid + 1;
        } else if(arr[mid] > target){
            right = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}
int main(void)
{
    int arr1[5] = {2, 5 , 6, 3, 0};
    int length =  sizeof(arr1) / sizeof(*arr1);
    int target = 6;

    std::cout << "PART A" << std::endl;

    BubleSortPartOne(arr1,length);


    for(int i = 0; i <length;i++)
    {
        std::cout << " " << arr1[i] << std::endl;
    }

    LineSearch(arr1,length,target);


    std::cout << "PART B" << std::endl;
    int arr2[] = {0, 9, 5, 6, 4, 2, 3, 1, 89, 8, 9, 14, 31, 32, 56, 14};
    int length2 =  sizeof(arr1) / sizeof(*arr1);

    for(int i = 0; i <length;i++)
    {
        std::cout << " " << arr2[i] << std::endl;
    }
    BinarySearch(arr2,length2,target);
    std::cout << "index find: " << BinarySearch(arr2,length2,target) << std::endl;
    return 0;
    
}