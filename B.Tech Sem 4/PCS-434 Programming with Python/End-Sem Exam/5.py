class A:
    def __str__(self):
        return "A"

class B(A):
    def __init__(self):
        super().__init__()

class C(B):
    def __init__(self):
        super().__init__()

def main():
    b = B()
    a = A()
    c = C()

    print(a, b, c)
    
main()