n = input()
nums = list(map(int,input().split()))
nums = sorted(nums)
ans = []
left = 0
right = len(nums)-1
while(left<right):
    ans.append(str(nums[right]))
    ans.append(str(nums[left]))
    left = left + 1
    right = right - 1
if len(nums)/2 != len(nums)//2:
    ans.append(str(nums[len(nums)//2]))
print(" ".join(ans))