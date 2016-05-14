# -*- coding: utf-8-*-
#模块常用的东西
from sys import argv
#要在输入的时候直接输入的东西，符号必须要是英文，中文的不行
script, user_name = argv
prompt ='< '
#开始进行提问，并且弄成变量
print "Hi, %s, I'm the %s script." % (user_name, script )
print "I'd like wo ask you a few questions. "
print "Do you like me %s? " % user_name
like = raw_input(prompt)

print "Where are you live %s ?" % user_name
lives = raw_input(prompt)

print "What kind of computer do you have? "
computer = raw_input(prompt)
#最后所有变量重新进行整合
print """
Alright, so you said %r about liking me .
You live in %r. Not sure where that is.
And you have a %r computer. Nice.
""" % (like, lives, computer)
