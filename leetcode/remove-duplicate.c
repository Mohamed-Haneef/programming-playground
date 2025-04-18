int removeElement(int* nums, int numsSize, int val) {
    if(numsSize == 0){
        return 0;
    }
    int test[numsSize];
    int test_index=0, duplicate=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] == val){
            duplicate++;
        }else{
            test[test_index] = nums[i];
            test_index++;
        }
    }
    for(int x=0; x<test_index; x++){
        nums[x] = test[x];
    }
    return test_index;
}