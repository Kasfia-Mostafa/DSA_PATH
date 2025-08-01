class Solution(object):
    def isPalindrome(self, x): 
        boolean = False
        
        if str(x) == str(x)[::-1]:
            boolean = True
        

        return boolean
        