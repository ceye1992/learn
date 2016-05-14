# -*- coding: utf-8-*-
#开启模块 
from sys import argv
from os.path import exists
#输入变量设置
script, from_file, to_file = argv

print "Copying from %s to %s" % (from_file, to_file)
#打开并且读
#We could do these two on one line too, how?
in_file = open(from_file)
indata = in_file.read()
#说明有多少个数据
print "The input file is %d bytes long" % len(indata)
#进行询问
print "Does the output file exist? %r " % exists (to_file)
print "Ready, hit RETURN to continue, CTRL-C to abort."
raw_input()

out_file = open(to_file, 'w')
out_file.write(indata)
#说明写完了
print "Alright, all done."
#关闭字符
out_file.close()
in_file.close()