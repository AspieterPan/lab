lab: lab.c
	gcc $< -o $@.out -lpthread

lab2: lab2.c
	gcc $< -o $@.out

r: lab
	./$<.out

r2: lab2
	./$<.out

py: lab.py
	python3 ./$<

clean:
	rm -f ./*.out
