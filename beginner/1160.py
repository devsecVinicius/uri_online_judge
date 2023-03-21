t = int(input())

i = 0


while i < t:
    i+=1
    pa, pb, g1, g2 = input().split(' ')
    pa, pb, g1, g2 =  int(pa), int(pb), (float(g1) / 100), (float(g2) / 100)

    tempo = 0
    

    while pa <= pb or tempo > 100:
        tempo+=1
        if tempo > 100:
            break
        aux = int(pa * g1)
        aux1 = int(pb * g2)     
        pa += aux
        pb +=  aux1
        

    if tempo <= 100:
        print(f'{tempo} anos.')
    else:
        print('Mais de 1 seculo.')
