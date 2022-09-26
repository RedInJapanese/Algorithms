impl Solution {
    pub fn find_min(nums: Vec<i32>) -> i32 {
        let mut left:i32 = 0; 
        let mut right:i32 = nums.len() as i32 -1;
        let mut pivot:i32 = 0; 
        
        while left<right{
            pivot= left + (right-left)/2;
            if nums[pivot as usize]>nums[right as usize]{
                left = pivot+1;
            }
            else{
                right = pivot;
            }
        }
        return nums[left as usize];
    }
}