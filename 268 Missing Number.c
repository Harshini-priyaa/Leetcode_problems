
int missingNumber(int* nums, int numsSize) {
    int sum_of_n = (numsSize * (numsSize + 1))/2;
    int sum = 0;
    for(int i =0; i< numsSize;i+=1){
        sum += nums[i];
    }
    int res = sum_of_n - sum;
    return res;
}