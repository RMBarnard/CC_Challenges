#Ryan Barnard
#Making Anagrams

#This is my python solution to the Making Anagrams problem from hackerrank.com under
#the string manipulation section of the Interview Preparation Kit at:
#https://www.hackerrank.com/challenges/ctci-making-anagrams/problem

def makeAnagram(a, b):
    removals = 0
    a_chars = [0]*26
    b_chars = [0]*26
    for letter in a:
        a_chars[ord(letter)-97] += 1
    for letter in b:
        b_chars[ord(letter)-97] += 1
    for i in range(26):
        removals += abs(a_chars[i]-b_chars[i])
    return removals

def main():
    a = "fcrxzwscanmligyxyvym"
    b = "jxwtrhvujlmrpdoqbisbwhmgpmeoke"
    if makeAnagram(a,b) == 30:
        print("Success")
    else:
        print("Failure")