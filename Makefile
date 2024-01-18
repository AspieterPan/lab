lab.out: lab.cpp 
	clang++ -g -std=c++20 -Wall $< -o $@


py: lab.py
	python3 ./$<
	
thread:
	cd ./thread && make run

run: lab.out
	./$< 


clean:
	rm -f ./*.out
