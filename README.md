## conpile library with pybind11 inside Docker

Python & C++

This was made as a workaround when developing on different systems, but works across systems by using Docker!

How to use:
```
cd pybind11-docker
cd base
docker build . -t base
cd ../app
docker build . -t app
docker run --rm -it app
```

when inside the container:

```
python3
import test
test.add(1, 5)
```
or
```
python3 hello.py
```

inspired by: https://medium.com/@keithwhitley/using-c-with-python-3-in-2018-480f3e46c8c and https://youtu.be/R9dtxqVdc8M
