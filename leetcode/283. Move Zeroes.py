class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        i = 0

        for y in range(len(nums)):
            if nums[y] != 0:
                nums[i], nums[y] = nums[y], nums[i]
                i += 1