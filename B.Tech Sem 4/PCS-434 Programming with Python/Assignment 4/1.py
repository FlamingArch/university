# Write a program that reads some linescontaining votes: each line contains a name.
# Have theprogram print the list of candidates in descending order of the number of votes received.
# Assume in the problem above each name is followed by a number between -10 and 10.
# Now make the program report the sum of the votes for each candidate, and list the candidates in that order.
# (descending by sum of votes/points received).

class InvalidVotesException(Exception):
    def __init__(self, message="Invalid Number of Votes", errors=""):
        super().__init__(message)


class Candidate:
    def __init__(self, string: str):
        try:
            self.name = string[0:-2]
            self.votes = int(string[-2:])
        except ValueError:
            try:
                self.name = string[0:-1]
                self.votes = int(string[-1:])
            except ValueError:
                raise InvalidVotesException
        if self.votes > 10 or self.votes < -10:
            raise InvalidVotesException

    def __str__(self):
        return f"Name: {self.name}\nVotes:{self.votes}"

    def __lt__(self, value):
        return self.votes < value.votes

    def __le__(self, value):
        return self.votes <= value.votes

    def __gt__(self, value):
        return self.votes > value.votes

    def __ge__(self, value):
        return self.votes >= value.votes


print("Enter Value (Press Ctrl+C when done)")

values = []
try:
    while True:
        values.append(Candidate(input(" > ")))
except KeyboardInterrupt:
    print()
    if len(values) > 0:
        values.sort()
        sum = 0
        for value in values:
            sum += value.votes
        print("Total Votes: ", sum)
        for value in values:
            print(value)
    else:
        print("No Candidates Entered\n")
