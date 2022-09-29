impl Solution {
    pub fn find_peak_element(nums: Vec<i32>) -> i32 {
        let mut left:i32 = 0; 
        let mut right:i32 = nums.len() as i32 -1;
        let mut pivot:i32 = 0;
        
        while left<right{
            pivot = left + (right-left)/2;
            if nums[pivot as usize] > nums[pivot as usize+1]{
                right = pivot;
            }
            else{
                left = pivot+1;
            }
        }
        return left;
    }
}
