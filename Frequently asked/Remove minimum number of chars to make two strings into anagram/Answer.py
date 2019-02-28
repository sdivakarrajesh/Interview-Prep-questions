ALPHABETS = 26


def getCountArray(s):
    i = 0
    count = [0]*ALPHABETS
    while i < len(s):
        count[ord(s[i])-ord('a')] += 1
        i += 1
    return count


def makeAnagram(a, b):
    count1 = getCountArray(a)
    count2 = getCountArray(b)
    ans = 0
    for i in range(ALPHABETS):
        ans += abs(count1[i] - count2[i])
    return ans


if __name__ == '__main__':

    a = input()
    b = input()
    res = makeAnagram(a, b)
    print(res)
