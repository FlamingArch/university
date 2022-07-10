count = dict()

with open(input("Enter Filename: > ")) as stream:
    for line in stream.readlines():
        try:
            words = line.split(' ')
            count[words[words.index('From') + 2]] += 1
        except KeyError:
            count[words[words.index('From') + 2]] = 1
        except ValueError:
            print("No Days Found")

print(count)