# Halley-Template

## Getting started

* Install [cmake](https://cmake.org/download/)
  * linux (debian(ish)):
    ```bash
    apt-get install cmake
    ```
  * linux (red(ish))
    ```bash
    yum install cmake
    ```
* Initialize the submodule (Halley)
```bash
git submodule init
git submodule update
```
* Download [boost](https://www.boost.org/doc/libs/1_70_0/more/getting_started/unix-variants.html) headers
```bash
wget https://downloads.sourceforge.net/project/boost/boost/1.66.0/boost_1_66_0.tar.bz2 -O boost.tar.bz2
mkdir -p boost
tar --bzip2 -xf boost.tar.bz2 --strip-components=1 -C boost && rm boost.tar.bz2
```
* Install [SDL](https://www.libsdl.org/download-2.0.php)
  * linux (debian(ish)):
    ```bash
    apt-get install libsdl2-dev 
    ```
  * linux (red(ish))
    ```bash
    yum install SDL2-devel
    ```
  * otherwise build from source
* Set an environment varriable for BOOST_DIR, to your boost folder

