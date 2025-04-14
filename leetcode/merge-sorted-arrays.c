void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int temp;
    int nums[m+n];
    for(int i=0; i<m; i++){
        nums[i] = nums1[i];
    }
    for(int j=0; j<n; j++){
        nums[m+j] = nums2[j];
    }

    for(int x=0; x<m+n; x++){
        int min = x;
        for(int y=x; y<m+n; y++){
            if(nums[y] < nums[min]){
                min = y;
            }
        }
        temp = nums[min];
        nums[min] = nums[x];
        nums[x] = temp;

        nums1[x] = nums[x]; 
    }
}  


//using linear merging and selection sort
//time complexity 0((m+n)^2)