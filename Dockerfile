FROM ubuntu:22.04
ENV DEBIAN_FRONTEND=noninteractive
WORKDIR /workspaces/learn-github-2024

RUN apt update && apt upgrade -y

RUN apt install -y git
RUN apt install -y cmake g++
RUN apt install -y build-essential

RUN apt update && apt upgrade -y