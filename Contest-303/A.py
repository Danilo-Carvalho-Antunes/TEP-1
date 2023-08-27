N = (int)(input())
S = input()
T = input()

equals_similar = 0


for i in range(0,N,1):
    if(S[i] == T [i]):
        equals_similar +=1
        continue
    if(S[i] == 'o' or S[i] =='0'):
        if(T[i] == 'o' or T[i] =='0'):
            equals_similar +=1
            continue
    if(S[i] == 'l' or S[i] =='1'):
        if(T[i] == 'l' or T[i] =='1'):
            equals_similar +=1

if(equals_similar == N):
    print("Yes")
else:
    print("No")
