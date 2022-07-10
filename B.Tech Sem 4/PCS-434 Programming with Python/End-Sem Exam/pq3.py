def overlappingCount(s1, s2):
    c, p = 0, 0
    while(True):
        p = s1.find(s2, p)
        if p > -1:
            c += 1
            p += 1
        else:
            break
    return c


s = input()
prefixes = []
longest_prefix = s[0]

for i in range(1, len(s)):
    prefixes.append(s[:i])

# print(prefixes)

for prefix in prefixes:
    if overlappingCount(s, prefix) > 1:
        longest_prefix = prefix

print(longest_prefix)
