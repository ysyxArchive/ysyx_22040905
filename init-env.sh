# Update apt software source (for China mainland):
sudo sed -i s:/archive.ubuntu.com:/mirrors.tuna.tsinghua.edu.cn:g /etc/apt/sources.list

# Prerequisites
sudo apt-get clean 
sudo apt-get -y update --fix-missing 
sudo apt-get install -y ca-certificates 
sudo apt-get install -y build-essential gdb git libreadline-dev libsdl2-dev libsdl2-image-dev llvm-12 llvm-12-dev 
ln -s /usr/bin/llvm-config-12 /usr/bin/llvm-config 
sudo apt-get install -y g++-riscv64-linux-gnu binutils-riscv64-linux-gnu device-tree-compiler 
sudo apt-get install -y openjdk-17-jdk wget curl 
sudo apt-get install -y help2man perl python3 make autoconf g++ flex bison ccache libgoogle-perftools-dev numactl perl-doc libfl2 libfl-dev zlib1g zlib1g-dev 
sudo apt-get install -y gtkwave 
sudo apt-get clean

# Verilator
cd ~ 
git clone https://github.com/verilator/verilator 
unset VERILATOR_ROOT 
cd verilator 
git pull 
git checkout v5.008 
autoconf 
./configure 
make  
make install 
cd ~
rm -rf ./verilator

# Clone ysyx-workbench
mkdir ~/exam-test
cd ~/exam-test
git clone https://github.com/cyh834/ysyx-workbench ysyx-exam
cd ysyx-exam/ysyx-exam
source ./exam-init.sh
cd nanos-lite
