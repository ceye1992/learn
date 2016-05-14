# -*- coding: utf-8-*-
#创建模块
from sys import argv
script, filename = argv
#输入内容
print "We are going to erase %r ." % (filename)
print "If you don't want that, hie CTRL_C (^c). "
#与交互
raw_input("?")
#创建文件，并且打开target是来说明做了什么事情
print "opening the file..."
target = open(filename, 'w')
#truncate 是快速删除数据表格中的所有记录
print "Truncating the file. Goodby!"
target .truncate()
#输入内容
print "How I'm going wo ask you for three lines."
#第一行，第二行等
line1 = raw_input("line 1: ")
line2 = raw_input("line 2: ")
line3 = raw_input("line 3: ")
#说明
print "I'm going to write these to the file. "
#写上去 同时空行
target.write(line1)
target.write("\n")
target.write(line1)
target.write("\n")
target.write(line3)
target.weite("\n")
#关闭整个文件
print "And finally, we close it."
target.close()