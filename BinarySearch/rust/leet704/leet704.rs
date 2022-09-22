impl Solution {
    pub fn search(nums: Vec<i32>, target: i32) -> i32 {
        let mut L:i32 = 0;
        let mut R:i32 = nums.len() as i32 -1;
        let mut pivot:i32 = 0; 
        
        while L<=R{
            pivot = L+(R-L)/2;
            if nums[pivot as usize] == target{
                return pivot;
            }
            if target < nums[pivot as usize]{
                R = pivot-1;
            }
            else{
                L = pivot+1;
            }
        }
        return -1;
    }
}