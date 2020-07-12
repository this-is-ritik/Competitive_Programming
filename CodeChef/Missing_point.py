for _ in range(int(input())):
    n=int(input())
    size=4*n-1
    a=0
    b=0
    for i in range(size):
        x,y=map(int,input().strip().split())
        a=a^x
        b=b^y
    print(a,b,sep=" ")