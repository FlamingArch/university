# Program 1:
# Write a program to enter hours and rate per
# hour to compute gross pay.
# Enter Hours: 35
# Enter Rate: 2.75
# Pay: 96.25

print(
    "Pay: "
    + str(
        float(input("Enter Hours: "))
        * float(input("Enter Rate: "))
    )
)
