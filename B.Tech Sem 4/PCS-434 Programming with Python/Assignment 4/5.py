def startEndVowels(word:str):
    vowels = ['a','e','i','o','u']
    return word.lower()[0] in vowels and word.lower()[-1] in vowels 

print(f'Starts and Ends with Vowels? {startEndVowels(input("Enter word: > "))}')
