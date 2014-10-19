IMAGE_NAME="learning_c/build"
PWD=$(shell pwd)

docker: docker-build docker-run

docker-build:
	@docker build -t $(IMAGE_NAME) .

docker-run:
	@docker run -t -i -v $(PWD):$(PWD) -w $(PWD) $(IMAGE_NAME) bash
