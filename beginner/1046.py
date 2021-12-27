n1, n2 = input().split(" ")
n1, n2 = int(n1), int(n2)

duracao = 24 - n1
duracao = duracao + n2

if duracao > 24:
	duracao = n2 - n1
	print("O JOGO DUROU",duracao,"HORA(S)")
else:
	print("O JOGO DUROU",duracao,"HORA(S)")
