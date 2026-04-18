#!/usr/bin/env bash
git config --global user.email "camimarlyn@gmail.com"
git config --global user.name "Fantasma-27"
git config --global credential.helper store
cp ~/holbertonschool-low_level_programming/git_process.sh ~/git_process.sh
chmod u+x ~/git_process.sh
echo 'alias github="/root/git_process.sh"' >> ~/.bashrc
source ~/.bashrc
