h = int(input("Enter Hours: > "))
p = int(input("Enter Pay: > "))

print(f"Pay = {h * p if h < 40 else (40 * p) + ((h-40) * (p*1.5))}")
