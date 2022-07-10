# Exercise 1: Take the following Python Code that stores a String: 
# str = 'X-DSPAM-Confidence:0.08475'
# Use find and string slicing to extract the portion of the string after the colon character and then use the float function to convert the extracted string into floating point number:

string = 'X-DSPAM-Confidence:0.08475'

float_var = float(string[-7:len(string)])
print(f'float_var = {float_var}, type() = {type(float_var)}')
