# -*- coding: utf-8-*-
#调用模块
from sys import argv
# 把文件里面的内容为模块
script, input_file = argv
# 设置函数，读出全部文档内容
def print_all(f):
 print f.read()
#设置函数，回到第0个字节
def rewind(f):
 f.seek(0)
 #设置函数，读出一行
def print_a_line(line_count, f):
  print line_count, f.readline()
  #设置函数。打开文档
current_file = open(input_file)
#输入
print "First let's print the whole file:\n"
#全部文档
print_all(current_file)
#继续输入
print "Now let's rewind, kind of like a tape."
#重新来
rewind(current_file)
#输入
print "Let's print three lines:"
#选择行数
current_line = 1
print_a_line(current_line, current_file)

current_line = current_line + 1
print_a_line(current_line, current_file)

current_line = current_line + 1
print_a_line(current_line, current_file)

