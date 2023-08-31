x = (int)(input())
found = 0
if(x < 4):
    print(1)
else:
    for i in range(x,1,-1):
        if(found == 1):
                break
        for coeficiente in range(2,9,1):
            raiz = (i) ** (1 / coeficiente)
            #print(f'raiz {coeficiente} de {i} ={raiz}')
            if(raiz%1 == 0):
                print(i)
                found += 1
                break
    
