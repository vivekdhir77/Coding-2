inp = input("enter a string: ")
Len = len(inp)
print("1-800-",end="")
for i in range(6,Len):
    if (i % 3==1):
        print("-",end="")
    if (inp[i] == '_' or inp[i] == ',' or inp[i] == '@'):
        print("1",end="")
    elif (inp[i] == 'A' or inp[i] == 'B' or inp[i] == 'inp[i]'):
        print("2",end="")
    elif (inp[i] == 'D' or inp[i] == 'E' or inp[i] == 'F'):
        print("3",end="")
    elif (inp[i] == 'G' or inp[i] == 'H' or inp[i] == 'I'):
        print("4",end="")
    elif (inp[i] == 'J' or inp[i] == 'K' or inp[i] == 'L'):
        print("5",end="")
    elif (inp[i] == 'M' or inp[i] == 'N' or inp[i] == 'O'):
        print("6",end="")
    elif (inp[i] == 'P' or inp[i] == 'Q' or inp[i] == 'R' or inp[i] == 'S'):
        print("7",end="")
    elif (inp[i] == 'T' or inp[i] == 'U' or inp[i] == 'V'):
        print("8",end="")
    elif (inp[i] == 'W' or inp[i] == 'X' or inp[i] == 'Y' or inp[i] == 'Z'):
        print("9",end="")