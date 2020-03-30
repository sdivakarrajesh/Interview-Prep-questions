import sys
sys.setrecursionlimit(10000)

def knapsack(memo, target, curr, nums):
    if curr >= len(nums):
        return 0
    elif memo[curr][target]:
        return memo[curr][target]
    elif target==0 or len(nums)==0:
        return 0
    else:
        temp1,temp2,temp3 = 0,0,0
        # print("curr %s len(nums) %s"%(curr, len(nums)))
        if target - nums[curr] >= 0:
            temp1 = nums[curr] + knapsack(memo, target - nums[curr], curr+1,nums )
            temp2 = nums[curr] + knapsack(memo, target - nums[curr], curr, nums)
        temp3 = knapsack(memo, target, curr+1, nums)
        result = max(temp1, temp2, temp3)
        memo[curr][target] = result
        # print("temp1 %s, temp2 %s, temp3 %s, result %s"%(temp1, temp2, temp3, result))
        return result


def solve():
    n, target = [int(x) for x in input().strip().split()]
    nums = [int(x) for x in input().strip().split()]
    if any(map(lambda n: n <= target, nums)):
        memo = [[None for x in range(target + 1)] for x in range(n + 1)]
        # print(memo)
        ans = knapsack(memo, target, 0, nums)
        # print("ans %s memo %s"%(ans, memo))
        # print("Ans: ",ans)
        print(ans)
    else:
        # print("Ans: ",0)
        print(0)

testCases = int(input())
for t in range(testCases):
    solve()

# 1
# 3 12
# 1 6 9
