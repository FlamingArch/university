from random import randint

rand_num = randint(0, 100)

guess = int(input("Enter Initial Guess: > "))

while guess != rand_num:
    print("Too Low" if guess < rand_num else "Too High")
    guess = int(input("Enter New Guess: > "))

print("Correct")
