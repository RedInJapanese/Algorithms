class Solution {
    public int countGoodSubstrings(String s) {
        int nums = 0; 
        
        for(int i = 0; i+3<=s.length(); i++){
            if((s.charAt(i) != s.charAt(i+1)) && (s.charAt(i)!=s.charAt(i+2)) && (s.charAt(i+1)!=s.charAt(i+2))) {
                nums++;
            }
        }
        return nums;
    }
}