def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        d = {'a':1, 'e':1, 'i':1, 'o':1, 'u':1, 'A':1, 'E':1, 'I':1, 'O':1, 'U':1}
        vowels = []
        m = 0
        for i in s: 
            if i in d:
                vowels.append(m)
            m+=1
        i = 0
        j = len(vowels)-1
        test = list(s)
        
        while(i<j): 
            temp = test[vowels[i]]
            test[vowels[i]] = test[vowels[j]]
            test[vowels[j]] = temp
            i+=1
            j-=1
        return ''.join(test)