FROM ubuntu:22.04
RUN sed -i -r 's/ports.ubuntu.com/mirrors.tuna.tsinghua.edu.cn/g' /etc/apt/sources.list
RUN apt-get update -y
RUN apt-get install -y build-essential
WORKDIR /usr/src/app