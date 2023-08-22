n,m=map(int,input().split())
end = False
while(end == False):
    for i  in range(1,n+1):
        if(m-i < 0):
            print(m)
            end = True
            break
        else:
            m = m-i