n1, n2, n3, n4 = input().split(" ")
n1 = float(n1) 
n2 = float(n2) 
n3 = float(n3) 
n4 = float(n4)

media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10

print('Media:', round(media, 1))

if media >= 7:
	print("Aluno aprovado.") 

if media < 5:
	print("Aluno reprovado.")

if media >= 5 and media <= 6.9:
	print("Aluno em exame.")
	n5 = float(input())
	print('Nota do exame:', n5)
	if ((n5 + media) / 2) >= 5:
		print('Aluno aprovado.')
	if ((n5 + media) / 2) <= 4.9:
		print('Aluno reprovado.')
	print("Media final:",round(((n5 + media) / 2), 1))
