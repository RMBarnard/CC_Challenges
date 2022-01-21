#Ryan Barnard
#Alternating Characters

#This is my python solution to the alternating characters challenge from HackerRank.com 
#which can be found at this link:
#https://www.hackerrank.com/challenges/alternating-characters

def alternatingCharacters(s):
    deletions = 0
    reference = s[0]
    for letter in s[1:]:
        if letter == reference:
            deletions += 1
        else:
            reference = letter
    return deletions

def main():
    inputs = ["AAAA", "BBBBB", "ABABABAB", "BABABABA","AAABBB"]
    expected = [3, 4, 0, 0, 4]
    success = True
    for i in range(5):
        if alternatingCharacters(inputs[i]) != expected[i]:
            success = False
    if not success:
        print("Failure")
    else:
        print("Success")

main()
