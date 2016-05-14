# -*- coding: utf-8-*-
# 开始进行赋值
x = "There are %d types of people." % 10
binary = "binary"
do_not = "don't"
y = "Those who konw %s and those who %s." %(binary, do_not)
# 输出值
print x
print y
# 整合后继续输出
print "I said: %r." %x
print "I also said : '%s'." %y
# 整合后继续输出
hilarious = False
joke_evaluation = "Isn't that joke so funny?! %r"

print joke_evaluation % hilarious
# w和e加起来
w = "This is the left side of ..."
e = "a string with a ringt side."

print w + e
