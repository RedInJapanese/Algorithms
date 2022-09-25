// The API isBadVersion is defined for you.
// isBadVersion(version:i32)-> bool;
// to call it use self.isBadVersion(version)

impl Solution {
    pub fn first_bad_version(&self, n: i32) -> i32 {
        let mut left:i32 = 1; 
        let mut right:i32 = n; 
        let mut pivot:i32 = 0; 
        
        while left<=right{
            pivot = left+(right-left)/2; 
            if self.isBadVersion(pivot) && !self.isBadVersion(pivot-1){
                return pivot;
            }
            if self.isBadVersion(pivot) && self.isBadVersion(pivot-1){
                right = pivot-1;
            }
            else{
                left = pivot+1;
            }
        }
        left
    }
}
