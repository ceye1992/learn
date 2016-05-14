# -*- coding:utf-8-*-
#用来获取文件名的
from sys import	 argv
scrip, filename = argv

txt = open(filename)
#输入字符，并且读取文档内容
print "Here's your file %r:" % filename
print txt.read()
#继续打开文件夹
print "Type the filename again:"
file_again = raw_input ('> ')
#打开文件夹
tex_again = open (file_again)
#读取文件内容
print tex_again,read()