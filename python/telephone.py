import sys


key = {
  '2' : "abc",
  '3' : "def",
  '4' : "ghi",
  '5' : "jkl",
  '6' : "mno",
  '7' : "pqrs",
  '8' : "tuv",
  '9' : "wxyz"}
  
def num_to_letter(numbers):
  word = []
  numbers = numbers.split()
  for num in numbers:
    word.append(key[num[0]][len(num) -1])
  return "".join(word)
  
  
def text_to_word(s):
  f = open("brit-a-z.txt")
  words = []
  for line in f:
    words.append(line)
  word = num_to_letter(s)
  for w in words:
    if w.startswith(word):
      print w,
  
  

text_to_word("7777 666 555 3")
  


