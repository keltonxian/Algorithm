# Algorithm

install SFML

windows:

install vcpkg:
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg
bootstrap-vcpkg.bat

install SFML
配置vcpkg.exe所在目录到环境变量
vcpkg install sfml
vcpkg list查看所安装的内容

Windows需要使用MSVC编译

default install path:
C:/vcpkg/installed/x64-windows/

macos:
brew install sfml

ubuntu:
sudo apt update
sudo apt install libsfml-dev
