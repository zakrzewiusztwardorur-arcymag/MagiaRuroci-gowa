import math
import random

def po():
    numbers = [random.randint(1,100) for _ in range(10)]
    total = sum(numbers)
    return total % 7

def dalsze(x):
    squared = [i**2 for i in x]
    return sum(squared)

def kroki(n):
    factorial = 1
    for i in range(1, n+1):
        factorial *= i
    return factorial

def main():
    nums = [1,2,3,4,5]
    print(po())
    print(dalsze(nums))
    print(kroki(5))

if __name__ == "__main__":
    main()
