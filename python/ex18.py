# -*- codingutf-8-*-
#这和变量一样，先设置一个函数，用def 空格然后加上函数的名称，后面再加上括号中间包含函数的变量
# This one is like your script with argv
def print_two(*args):
 arg1, arg2 = args
 print "arg1: %r, arg2: %r" % (arg1, arg2)
#是上一层的简化
# ok, that *args is actually pointless, we can just do this
def print_two_again(arg1, arg2):
 print "arg1: %r, arg2: %r" % (arg1, arg2)
#只有一个函数
# this just takes one argument
def print_one(arg1):
 print "arg1: %r" % arg1
#没有变量
#this one takes no arguments
def print_none():
 print "I got nothin'."
#这个是给函数赋值
print_two("Zed","Shaw")
print_two_again("Zed","Shaw")
print_one("First!")
print_none()