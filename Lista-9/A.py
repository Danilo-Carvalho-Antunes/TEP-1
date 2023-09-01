N = (int)(input())
A = (int)(input())
rest = N%500
if (A==0 and rest != 0):
    print("No")
else:
    if(rest > A):
        print("No")
    else:
        print("Yes")
