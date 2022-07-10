while True:
    try:
        h = int(input("Enter Hours: > "))
        break
    except ValueError: print("Error: Please Enter Numeric Input")

while True:
    try:
        p = int(input("Enter Pay: > "))
        break
    except ValueError: print("Error: Please Enter Numeric Input")

print(f"Pay = {h * p if h < 40 else (40 * p) + ((h-40) * (p*1.5))}")
