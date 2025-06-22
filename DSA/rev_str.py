#string reverse program
def reverse(original):
    stack=[]
    rev_str=''
    str=input("Enter a string:")

    for i in str:
        stack.append(i)

    for i in range(len(stack)):
        rev_str=rev_str+stack.pop()
    print("Reversed string:",rev_str)

reverse(str)

