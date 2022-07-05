def isPalindrome(self, s):
    """
    :type s: str
    :rtype: bool
    """
    s = re.sub(r"[^a-zA-Z0-9]","",s)
    s = s.lower()
        
    i = 0
    j = len(s)-1
        
    while(i<j):
        if s[i] != s[j]:
            return False
        i+=1
        j-=1
    return True