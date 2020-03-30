def countAndSay(n: int) -> str:
    s = '1'
    curr = 1
    new_s = None
    last = '1'
    while curr < n:
        count = 1
        new_s = ''
        last = ''
        for i in s:
            if i == last:
                count += 1
            elif last != '':
                new_s += str(count)+str(last)
                count = 1
            last = i
        new_s += str(count) + str(last)
        s = new_s
        curr += 1
    return s


print(countAndSay(1))
print(countAndSay(2))
print(countAndSay(3))
print(countAndSay(5))
