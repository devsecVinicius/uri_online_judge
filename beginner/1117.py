score = []

while True:
	aux = float(input())
	if aux < 0 or aux > 10:
		print("nota invalida")
	else:
		score.append(aux)
	if len(score) > 1:
		break
print(f"media = {((score[0]+score[1])/2):.2f}")
