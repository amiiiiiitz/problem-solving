class Solution:
    def maxProduct(self, nums: list[int]) -> int:
        maxi = float("-inf")
        prod = 1

        for i in range(len(nums)):
            prod *= nums[i]
            maxi = max(prod, maxi)

            if prod == 0:
                prod = 1

        prod = 1

        for i in range(len(nums) - 1, -1, -1):
            prod *= nums[i]
            maxi = max(prod, maxi)

            if prod == 0:
                prod = 1

        return maxi