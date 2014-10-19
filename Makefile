IMAGE_NAME="learning_c/build"

clean:
	for dir in $(shell ls -1 | egrep '^ex'); do \
		(cd "$$dir"; make clean) \
	done

docker: docker-build docker-run

docker-build:
	@docker build -t $(IMAGE_NAME) .

docker-run:
	@docker run -t -i -v $(PWD):$(PWD) -v $(HOME)/.vimrc:/root/.vimrc -v $(HOME)/.vim:/root/.vim -w $(PWD) $(IMAGE_NAME) bash
