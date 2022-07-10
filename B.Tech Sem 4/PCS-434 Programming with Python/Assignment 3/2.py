# Program 2
# Write a program to convert the temperature to Fahrenheit, and print out the
# converted temperature.

print(
    "Fahrenheit: "
    + str(
        (float(input("Celsius: ")) * 9 / 5)
        + 32
    )
)
