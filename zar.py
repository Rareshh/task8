import random

zar1 = random.randint(1,6)
zar2 = random.randint(1,6)

if zar1 < zar2:
	zar1, zar2 = zar2, zar1

if zar1 == 6 and zar2 == 5:
	print("Dau cu zaru 6 5 n-am nevoie de servici")
elif zar1 == 6 and zar2 == 6:
	print("Dau cu zaru 6 6 ca mine nu se mai naste")
else:
	print(f"Dau cu zaru {zar1} {zar2}")
