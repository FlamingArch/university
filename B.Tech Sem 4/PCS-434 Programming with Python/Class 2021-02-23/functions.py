# Survi: Input -> rate of pay per hour, days, and find rate of input
# Review your pay computation with time and a half for overtime and create a function called computepay whch takes two parameters (hours and rate). Overtime counts after 40 hours

def computepay(rate: int, hours: int): 
    return hours*rate if hours <= 40 else (hours-40)*(rate*1.5) + (40*rate) 

def inp():
    print(computepay(int(input('Rate of pay: > ')), int(input('Hours Worked: > '))))

while True:
    try: inp()
    except: print('Invalid Input')

