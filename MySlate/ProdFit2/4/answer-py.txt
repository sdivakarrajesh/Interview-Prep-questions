n = input()
nums = input().split()
ans = []
for i in nums:
    if i not in ans:
        ans.append(i)
print("".join(ans))
