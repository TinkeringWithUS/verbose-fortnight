.PHONY: build clean run git_add

executable_name = "Dialogue-Engine"
num_threads = 8

run:
	make build		
	cd build && make -j $(num_threads) && ./$(executable_name) 

build:
	mkdir -p build && cd build && cmake .. 

clean: 
	rm -rf build

git_add: 
	git add . && git status
