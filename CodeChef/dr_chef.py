from math import ceil, log
for _ in range(int(input())):
    n, x = map(int, input().strip().split())
    a = list(map(int, input().strip().split()))
    a.sort()
    days = 0
    left=0
    for i in range(n):
        if(a[i]<x):
            if(a[i]*2>=x):
                days+=1
                x=a[i]*2
            else:
              left+=1
            print(f"{days} {x} {a}")
        elif(a[i]==x):
            days+=1
            x=x*2
            print(f"{days} {x} {a}")
        else:               # a[i]>x
            while(a[i]>x):
                x=x*2
                days+=1
                print(f"{days} {x} {a}")
            if(a[i]*2>x):
                x=a[i]*2
                days+=1
            else:
                left+=1
    days+=left
    print(f"{days} {x} {a}")
    print(days)