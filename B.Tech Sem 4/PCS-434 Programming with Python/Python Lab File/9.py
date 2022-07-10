def computegrade(score):
    if score > 1:
        return 'Invalid Score, must be less than 1'
    scores, grades = [1, 0.9, 0.8, 0.7, 0.6, 0.5], [
        'A', 'A', 'B', 'C', 'D', "F"]
    return grades[scores.index(round(score, 1))] if score >= 0.5 else 'F'


while True:
    try:
        print(computegrade(float(input("Enter Score: > "))))
    except ValueError:
        print(f'Bad Score!')
