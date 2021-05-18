def countt(n):
    count=(len(str(n))-1)*9
    num=int(len(str(n))*'1')
    count+=int(n)//num
    return count

t=int(input ())
for i in range(t):
    n=int(input())
    print(countt(n))