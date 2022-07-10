# Rewrite the grade program from the previous chapter using a function called computegrade that takes score as it's parameter and returns a grade as string.
# SCORE | GRADE
# >=0.9 | A
# >=0.8 | B
# >=0.7 | C
# >=0.6 | D
# >=0.5 | F
# EXAMPLE:
#   Enter score 0.95
#   A
#   Enter score perfect
#   Bad score

def computegrade(score):
    if score > 1: return 'Invalid Score, must be less than 1'
    scores, grades = [1, 0.9,0.8,0.7,0.6,0.5], ['A', 'A', 'B', 'C', 'D', "F"]
    return grades[scores.index(round(score,1))] if score >= 0.5 else 'F'
    
while True:
    try: print(computegrade(float(input("Enter Score: > "))))
    except: print(f'Bad Score!')
