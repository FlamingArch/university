sum: int = 0
count: int = 0

while True:
    inp = input("> ")
    if inp.lower() == 'done':
        break
    try:
        sum+=int(inp)
        count+=1
    except ValueError:
        print("Invalid Value, Input Discarded")

print(f"Total: {sum}, Count: {count}, Average: {sum/count}")
