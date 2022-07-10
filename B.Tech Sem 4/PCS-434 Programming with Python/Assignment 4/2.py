# Consider a  scenerio where a son eats five chocolates every day. 
# The price of each chocolate is different. 
# His father pays the bill to the chocolate vendor at the end of every week.
# Develop a program that can generate the bills for the chocolates and send to the father. 
# Also state which loop will be used to solve this problem.

amounts = []

for i in range(7):
    print(f'Day {i+1} of 7: ')
    amounts.append([int(input(f"    Price of Chocolate {j+1}: > ")) for j in range(5)])

sum = 0
print("\nBILL:")
for day, amount in enumerate(amounts):
    print(f'Day {day+1}: ')
    for i, a in enumerate(amount):
        print(f'            {i+1} : {a}')
        sum += a
print('---------------------------------')
print(f"Total: {sum}")