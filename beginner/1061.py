lixo, diaInicio = input().split("Dia ")
horaInicio, minutoInicio, segundoInicio = input().split(" : ")

lixo, diaTermino = input().split("Dia ")
horaTermino, minutoTermino, segundoTermino = input().split(" : ")
diaInicio, horaInicio, minutoInicio, segundoInicio, diaTermino, horaTermino, minutoTermino, segundoTermino = int(diaInicio), int(horaInicio), int(minutoInicio), int(segundoInicio), int(diaTermino), int(horaTermino), int(minutoTermino), int(segundoTermino)

diasDuracao = diaTermino - diaInicio
horasDuracao = horaTermino - horaInicio
minutosDuracao = minutoTermino - minutoInicio
segundosDuracao = segundoTermino - segundoInicio

if segundosDuracao < 0:
	segundosDuracao += 60
	minutosDuracao -= 1
	
if minutosDuracao < 0:
	minutosDuracao += 60
	horasDuracao -= 1

if horasDuracao < 0:
	horasDuracao += 24
	diasDuracao -= 1
	
if diasDuracao < 0:
	diasDuracao += 1

print(f"{diasDuracao} dia(s)")
print(f"{horasDuracao} hora(s)")
print(f"{minutosDuracao} minuto(s)")
print(f"{segundosDuracao} segundo(s)")
