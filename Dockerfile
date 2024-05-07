FROM ubuntu:22.04
ENV DEBIAN_FRONTEND=noninteractive
WORKDIR /workspaces/learn-gtest

RUN apt update && apt upgrade -y

RUN apt install -y git
RUN apt install -y cmake g++
RUN apt install -y wget
RUN apt install -y build-essential

RUN git clone https://github.com/google/googletest

RUN chmod 755 build_make_install.sh
RUN chmod 755 gtest_all.sh

RUN apt update && apt upgrade -y