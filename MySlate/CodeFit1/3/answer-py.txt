count = int(input())
for i in range(count):
    n,str = input().split(maxsplit=1)
    n= int(n)
    vowels = ['a','e','i','o','u','A','E','I','O','U']
    str = [c for c in str if c not in vowels]
    print("".join(str))