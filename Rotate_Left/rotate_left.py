def rotLeft(a,d):
    rotated = []
    for i in range(len(a)):
        rotated.append(a[(i + d) % len(a)])
    return rotated

def main():
    test = [1,2,3,4,5,6,7,8,9,10]
    print(rotLeft(test, 13),"\n", rotLeft(test, 4))

main()