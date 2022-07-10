prime = []
for n in range(2, int(input("Enter Limit: > ")) + 1):
    for i in range(2, n):
        if n % i == 0:
            break
    else:
        prime.append(n)
print(prime)
