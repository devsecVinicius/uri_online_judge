# Leia quatro números (N¹, N², N³, N4) cada um com uma
# casa decimal, correspondendo a 4 notas de um aluno.
# Calcule a media com os pesos 2, 3, 4 e 1 
# respectivamente para essas 4 notas e imprima a 
# mensagem "Media: " seguida da media que tu calculou.
# Se a media for 7.0 ou mais imprima a mensagem:
# "Aluno aprovado." Se a media for menor que 5.0 
# imprima a mensagem "ALuno reprovado.", se a media
# for entre 5.0 e 6.9 o programa deve imprimir 
# "Aluno em exame."

# Em caso de exame, leia mais uma nota, Imprima a
# mensagem "Nota do exame: " seguido da nota recalculada
# some a nota anterio e a nota do exame e divida por 2
# e imprima "Aluno aprovado." em caso de media 5 ou
# mais, ou "Aluno reprovado." em caso de meida 4.9 ou
# menos, para esses dois casos imprima a mensagem:
# "Media final: " segfuido da media final do estudante

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
