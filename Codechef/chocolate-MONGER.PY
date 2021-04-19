for _ in range(int(input())):
    n,x = list(map(int,input().split()))
    a = list(map(int, input().split() ))
    a.sort()
    a_len= len(a)
    uniq = len(set(a))
    rem = (a_len - uniq) - x
    if (rem>=0):
        print(uniq)
        continue
    else:
        uniq = uniq + rem
        print(uniq)


