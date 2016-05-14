# -*- coding: utf-8-*-
#启动模块常用的格式
from sys import argv
#每一个模块后面都要加上逗号和空格 最后在加上=argv
script, first, second, third = argv
# 开始进行模块的带入，其中，输入的字符串后面要加上逗号后在跟东西
print "The script is called:", script
print "You first variable is:", first
print "You second variable is:", second
print "You third variable is:", third