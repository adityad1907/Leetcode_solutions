class Solution:
    def isPalindrome(self, x: int) -> bool:
        xcopy = x 
        reverse = 0
        if  x < 0:
          return False
        if  x>0:
            
            while x > 0:
                digit = x % 10
                reverse = reverse * 10 + digit
                x //= 10
            
        return reverse == xcopy

         
           
        
    
        