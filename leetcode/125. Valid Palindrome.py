class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_string = re.sub(r'[^a-zA-Z0-9]', '', s).lower()


        y = len(new_string) - 1

        for i in range(0, len(new_string) // 2):
            if new_string[i] != new_string[y]:
               return False
            y -= 1
        
        
        return True
       