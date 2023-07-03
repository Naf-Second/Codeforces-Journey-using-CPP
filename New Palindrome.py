import math
t = int(input())
for i in range(t):
    cnt = 0
    s = str(input())
    fx = math.floor(len(s)/2)
    for i in range(fx):
        if s[i]!=s[i+1] and i!=fx-1:
            cnt+=1
            #print(cnt)
    if(cnt>0):
     print("Yes")
    else:
        print('No')


