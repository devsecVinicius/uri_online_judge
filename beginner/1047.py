h1, m1, h2, m2 = input().split(" ")
h1, m1 = int(h1), int(m1)
h2, m2 = int(h2), int(m2)

duracaoHoras = h2-h1
duracaoMinutos = m2 - m1

if duracaoHoras == 0 and duracaoMinutos == 0: # como o minimo de tempo é 1 min, caso as durações sejam de 0 passou um dia
	duracaoHoras += 24 
else:
	if duracaoMinutos < 0:
		duracaoMinutos += 60
		duracaoHoras -= 1 # decrementando uma hora, pois em algumas situações como "4 30 5 10" pode ocorrer de ficar registrado que passou uma hora, pois 5-3 = 1, mas na realidade, só passou 40 minutos
			# se minutos ou horas for menor que zero ele incrementa, pois isso significa que passou pro outro dia ou pro proximo minuto
	if duracaoHoras < 0:
		duracaoHoras += 24

print("O JOGO DUROU",duracaoHoras,"HORA(S) E",duracaoMinutos,"MINUTO(S)")
