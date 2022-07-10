n = int(input())
print(n % 1000)
n = int(n/1000)

while n > 0:
    print(n % 100)
    n = int(n/100)