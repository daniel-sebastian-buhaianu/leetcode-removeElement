int removeElement(int* nums, int numsSize, int val){
    int count = 0;

    for (int i = 0; i < (numsSize - count); i++) {
        if (nums[i] == val) {
            int j = numsSize - 1 - count;

            count++;

            while (nums[j] == nums[i] && j > i) {
                count++;
                j--;
            }

            if (nums[j] != nums[i]) {
                nums[i] = nums[j];
                nums[j] = val;
            }
        }
    }

    return (numsSize - count);
}
