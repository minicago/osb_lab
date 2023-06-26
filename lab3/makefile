all:
	./hex2raw<smoke_U202110780.txt>smoke_U202110780_raw.txt
	./hex2raw<fizz_U202110780.txt>fizz_U202110780_raw.txt
	./hex2raw<bang_U202110780.txt>bang_U202110780_raw.txt
	./hex2raw<boom_U202110780.txt>boom_U202110780_raw.txt
	./hex2raw -n<nitro_U202110780.txt>nitro_U202110780_raw.txt

run:
	cat smoke_U202110780.txt |./hex2raw | ./bufbomb -u U202110780 
	cat fizz_U202110780.txt |./hex2raw | ./bufbomb -u U202110780 
	cat bang_U202110780.txt |./hex2raw | ./bufbomb -u U202110780 
	cat boom_U202110780.txt |./hex2raw | ./bufbomb -u U202110780 
	cat nitro_U202110780.txt |./hex2raw -n | ./bufbomb -u U202110780 -n

smoke_U202110780_raw.txt:
	./hex2raw<smoke_U202110780.txt>smoke_U202110780_raw.txt
fizz_U202110780_raw.txt:
	./hex2raw<fizz_U202110780.txt>fizz_U202110780_raw.txt
bang_U202110780_raw.txt:
	./hex2raw<bang_U202110780.txt>bang_U202110780_raw.txt
boom_U202110780_raw.txt:
	./hex2raw<boom_U202110780.txt>boom_U202110780_raw.txt
nitro_U202110780_raw.txt:
	./hex2raw -n <nitro_U202110780.txt>nitro_U202110780_raw.txt


