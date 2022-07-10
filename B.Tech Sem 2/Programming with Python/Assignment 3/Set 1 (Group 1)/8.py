i = int(input("Enter Number: "))
for divisor in range(2, i):
    if i%divisor==0:
        print("Not Prime")
        break
else:
    print("Prime")