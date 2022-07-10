class Stack:
    def __init__(self):
        self._list = []
    def push(self, data):
        self._list.append(data)
    def peek(self):
        return self._list[-1]
    def pop(self):
        return self._list.pop()

stack = Stack()
stack.push(1)
stack.push(2)
stack.push(3)
print(stack.peek())
print(stack.pop())
print(stack.pop())
print(stack.pop())
