# Copyright 2018 Sahaj Software Solutions, Inc.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0

# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

FROM ubuntu:latest

ENV DEBIAN_FRONTEND=noninteractive
# RUN DEBIAN_FRONTEND=noninteractive apt install -y tzdata

RUN apt-get update; apt-get install -y curl python3-dev python3-pip \
    wget libboost-python-dev libboost-dev build-essential \
    zlib1g-dev libboost-system-dev libboost-program-options-dev git python-dev libxml2-dev libxslt-dev
RUN apt-get -y install cmake protobuf-compiler
RUN pip install pybind11

# BOOST:
# RUN git init . && git submodule add -b stable https://github.com/pybind/pybind11 extern/pybind11 && git submodule update --init
# RUN cd extern/pybind11 && mkdir build && cd build && cmake .. && make -j 4
     

