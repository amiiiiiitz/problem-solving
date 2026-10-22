class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        fre = 0
        ans = 0
        for num in nums:
            if fre == 0:
                ans = num
            if ans == num:
                fre +=1
            else:
                fre -= 1
        return ans