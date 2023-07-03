t = int(input())
for i in range (t):
    n,a,b,c,d = map(int,input().split())
    ab = (a+b)*n
    ab2 = (a-b)*n

    if (ab>=c-d and ab2<=c+d):
         print('Yes')
    else:
        print('No')