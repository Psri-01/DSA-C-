def can_segment_string(s, dictionary):
  for i in range(1, len(s) + 1):
    first = s[0:i]
    if first in dictionary:
      second = s[i:]
      if not second or second in dictionary or can_segment_string(second, dictionary):
        return True
  return False
  
s = "hellonow";
dictionary= set(["hello","hell","on","now"])
if can_segment_string(s, dictionary):
  print("String Can be Segmented")
else:
  print("String Can NOT be Segmented")
  
'''
ALGO:
n = length of input string
for i = 0 to n - 1
  first_word = substring (input string from index [0, i] )
  second_word = substring (input string from index [i + 1, n - 1] )
  if dictionary has first_word
    if second_word is in dictionary OR second_word is of zero length, then return true
    recursively call this method with second_word as input and return true if it can be segmented'''
