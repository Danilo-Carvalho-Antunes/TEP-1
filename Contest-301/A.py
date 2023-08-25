N = int(input())
S = input()
if S.count('T') > S.count('A') :print("T")
if S.count('A') > S.count('T') :print("A")
if S.count('A') == S.count('T') : 
    if S[N-1] == 'A' : print("T")
    else : print("A")
