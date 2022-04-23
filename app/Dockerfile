FROM base:latest

RUN mkdir /app
WORKDIR /app
COPY . /app

RUN g++ -O3 -Wall -shared -std=c++17 -fPIC $(python3 -m pybind11 --includes) hello.cpp -o testy.so
RUN python3 hello.py