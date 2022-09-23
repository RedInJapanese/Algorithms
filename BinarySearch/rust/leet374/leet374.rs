/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * unsafe fn guess(num: i32) -> i32 {}
 */

 impl Solution {
    unsafe fn guessNumber(n: i32) -> i32 {
        if guess(1) == 0{return 1;}
        if guess(n) == 0{return n;}
        let mut left:i32 = 1; 
        let mut right:i32 = n;
        let mut pivot:i32 = 0; 
        
        while left<=right{
            pivot = left+(right-left)/2;
            if guess(pivot) == 0{
                return pivot;
            }
            if guess(pivot) > 0{
                left = pivot+1;
            }
            else{
                right = pivot-1;
            }
        }
        return left;
    }
}