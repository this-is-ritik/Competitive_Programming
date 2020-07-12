# cook your dish here
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().strip().split()))
    count=0
    for i in range(1,len(a)):
        print(abs(a[i]-a[i-1])-1)
        count+=abs(a[i]-a[i-1])-1
    print(count)