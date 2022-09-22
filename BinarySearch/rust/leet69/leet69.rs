impl Solution {
    pub fn my_sqrt(x: i32) -> i32 {
        if x == 1{return 1;}
        if x == 4{return 2;}
        let mut L:i32 = 1; 
        let mut R:i32 = x;
        
        while L<=R{
            let mut pivot:i32 = L+(R-L)/2;
            if (x/pivot) == pivot{
                return pivot;
            }
            if (x/pivot) < pivot {
                R = pivot-1;
            }
            else{
                L = pivot+1;
            }
        }
        return R;
    }
}
