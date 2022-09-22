impl Solution {
    pub fn search(nums: Vec<i32>, target: i32) -> i32 {
        if nums.len() == 0{return -1;}
        if nums.len() == 1 && nums[0] == target{return 0;}
        if nums.len() == 2 && nums[0] == target{return 0;}
        if nums.len() == 2 && nums[1] == target{return 1;}
        
        let mut L:i32 = 0;
        let mut R:i32 = nums.len() as i32 -1;
        while L<=R{
            let mut pivot:i32 = L+(R-L)/2;
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