primeiraPalavra = input()
segundaPalavra = input()
terceiraPalavra = input()

if primeiraPalavra == "vertebrado":
	if segundaPalavra == "ave":
		if terceiraPalavra == "carnivoro":
			print("aguia")
		if terceiraPalavra == "onivoro":
			print("pomba")
	if segundaPalavra == "mamifero":
		if terceiraPalavra == "onivoro":
			print("homem")
		if terceiraPalavra == "herbivoro":
			print("vaca")
if primeiraPalavra == "invertebrado":
	if segundaPalavra == "inseto":
		if terceiraPalavra == "hematofago":
			print("pulga")
		if terceiraPalavra == "herbivoro":
			print("lagarta")
	if segundaPalavra == "anelideo":
		if terceiraPalavra == "hematofago":
			print("sanguessuga")
		if terceiraPalavra == "onivoro":
			print("minhoca")
