# function that return maximum occurring character in a string
def getMaxOccurringChar(str):
    # create dictionary to store frequency of every character
    mp = {}
    # to store length of string
    n = len(str)
    ans = ''
    # to check count of answer character is less or greater
    # than another elements count
    cnt = 0
    # traverse the string
    for i in range(n):
        # push element into dictionary and increase its frequency
        if str[i] in mp:
            mp[str[i]] += 1
        else:
            mp[str[i]] = 1
         # update answer and count
        if cnt < mp[str[i]]:
            ans = str[i]
            cnt = mp[str[i]]
    return ans
str = "she ate sea shells bstring"
print("Max occurring character is:", getMaxOccurringChar(str))
