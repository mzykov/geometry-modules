FROM gcc:15.2

WORKDIR /usr/src/yet-another.ru

RUN apt update && apt upgrade -y
RUN apt install -y wget binutils

ENV CMAKE_VERSION=4.2.1

RUN set -ex; \
    wget https://github.com/Kitware/CMake/releases/download/v${CMAKE_VERSION}/cmake-${CMAKE_VERSION}-linux-x86_64.sh; \
    chmod +x cmake-${CMAKE_VERSION}-linux-x86_64.sh; \
    ./cmake-${CMAKE_VERSION}-linux-x86_64.sh --skip-license --prefix=/usr; \
    rm cmake-${CMAKE_VERSION}-linux-x86_64.sh

RUN apt install ninja-build

COPY . /usr/src/yet-another.ru
WORKDIR /usr/src/yet-another.ru
RUN cmake -G Ninja -B build && cmake --build build -v

CMD ["./build/src/yet_another_pet"]
