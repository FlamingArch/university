#version 0.1a

print("Python Workshop")
print("Grahpic Era Unversity\n")

print("For using in-companion with the Study Material\n")

def chList(chNo):
    tupleChapterNames= ("Introduction to Python", "Deep Dive into Python", "Python Libraries", "Error Handling", "Other Topics", "Regression (Use Case Study)", "Other Regression Related Topics.", "Advance")

def chTpList(chNo, tpNo):    
    
    tupleChapter1Topics = ("What is Python", "Advantages and Disadvantages", "Downloading and Installing", "Python Versions", "Running Python Scripts", "Using the interpreter interactively", "Using Variables", "String Types: Normal, Raw and Unicode", "String Operators and Functions", "Math Operators and Functions", "Writing to Screen", "Test your Knowledge")

    tupleChapter2Topics = ("Reading from the keyboard", "Indenting is significant", "Boolean", "The if and elif statements", "While loops", "Using lists", "Dictionaries", "Using the \'for\' statement", "Opening, reading and writing to a text file", "Test your Knowledge")

    tupleChapter3Topics = ("Using PANDAS - the Python data analysis library", "Series and Data frames", "Grouping, aggregating and applying", "Merging and Joining", "Test your Knowlegde")

    tupleChapter4Topics = ("Dealing with syntax errors", "Exceptions", "Handling exceptions with Try/Except", "Test your Knowledge")

    tupleChapter5Topics = ("RE Objects", "Pattern Matching", "Parsing Data", "Test your Knowledge")

    tupleChapter6Topics = ("Introduction to Regression", "Why use regression analysis", "Types of regression", "Test your knowledge")

    tupleChapter7Topics = ("Exploratory Data Analysis", "Correlation Matrix", "Visualisations using matplotlib", "Implementing Linear Regression", "Use Case: Churn Analysis", "Implementing Linear Regression (Using Scikit Learn)", "Results of Linear Regression", "Test your Knowledge")

    tupleChapter8Topics = ("Machine Learning Algorithms", "Support Vector Machine", "Random Forest")

    if chNo == 1:
        if 0 <= toNo <= tupleChapter1Topics.len():
            return tuptupleChapter1Topics[tpno]
        else:
            return 1        
    elif chNo == 2:
        if 0 <= toNo <= tupleChapter1Topics.len():
            return tuptupleChapter1Topics[tpno]
        else:
            return 1
    elif chNo == 3:
        if 0 <= toNo <= tupleChapter1Topics.len():
            return tuptupleChapter1Topics[tpno]
        else:
            return 1
    elif chNo == 4:
        if 0 <= toNo <= tupleChapter1Topics.len():
            return tuptupleChapter1Topics[tpno]
        else:
            return 1
    elif chNo == 5:
        if 0 <= toNo <= tupleChapter1Topics.len():
            return tuptupleChapter1Topics[tpno]
        else:
            return 1
    elif chNo == 6:
        if 0 <= toNo <= tupleChapter1Topics.len():
            return tuptupleChapter1Topics[tpno]
        else:
            return 1
    elif chNo == 7:
        if 0 <= toNo <= tupleChapter1Topics.len():
            return tuptupleChapter1Topics[tpno]
        else:
                return 1
    elif chNo == 8:
        if 0 <= toNo <= tupleChapter1Topics.len():
            return tuptupleChapter1Topics[tpno]
        else:
            return 1



def askChapter():
    print("Select Chapter Number between 1 to 8, or enter \'ch\' to view chapters list, or \'exit\' to exit the application.")
    inputString = ""
    
    inputString = input("\nEnter Chapter Number: > ")
    
    try:
        inChNo = int(inputString)
        print(inChNo)
    except Exception as e:
        if inputString.lower() == "ch":
            chlist()
        elif inputString.lower() == "exit":
            exit(0)



askChapter()