sum: int = 0
count: int = 0
minm: int = 0
maxm: int = 0

while True:
    inp = input("> ")
    if inp.lower() == 'done':
        break
    try:
        minm = int(inp) if int(inp) < minm else minm
        maxm = int(inp) if int(inp) > maxm else maxm
        sum+=int(inp)
        count+=1
    except ValueError:
        print("Invalid Value, Input Discarded")

print(f"Total: {sum}, Count: {count}, Minimum: {minm}, Maximum: {maxm}")

str='X-DSPAM-Confidence:0.8475'