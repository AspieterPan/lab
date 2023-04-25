run: lab.out
	./$< "hello" "world!"

lab.out: lab.c
	gcc $< -o $@ -lpthread


py: lab.py
	python3 ./$<
	
thread:
	cd ./thread && make run

clean:
	rm -f ./*.out
