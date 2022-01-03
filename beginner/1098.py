i = 0
j = 1

print(f"I={i} J={j}")
print(f"I={i} J={j+1}")
print(f"I={i} J={j+2}")
i += 0.2
j += 0.2


while i < 1.8:
	if i == 1.0:
		print(f"I={i:.0f} J={j:.0f}")
		print(f"I={i:.0f} J={j+1:.0f}")
		print(f"I={i:.0f} J={j+2:.0f}")
		i += 0.2
		j += 0.2
	else:
		print(f"I={round(i,1)} J={j:.1f}")
		print(f"I={round(i,1)} J={j+1:.1f}")
		print(f"I={round(i,1)} J={j+2:.1f}")
		i += 0.2
		j += 0.2
	
print(f"I={i:.0f} J={j:.0f}")
print(f"I={i:.0f} J={j+1:.0f}")
print(f"I={i:.0f} J={j+2:.0f}")
