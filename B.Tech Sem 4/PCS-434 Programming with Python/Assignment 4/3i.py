# Write a program using a for loop, that calculates exponentials. 
# Your program should ask for base and exp. value form user.
# Note: Do not use ** operator and math module.

base = int(input("Enter Base: > "))
exp = int(input("Enter Exponent: > "))

prod = 1
for i in range(exp):
    prod*=base

print("Result:", prod)
