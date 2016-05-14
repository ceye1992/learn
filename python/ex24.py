# -*- coding: utf-8-*-
#输入的内容，\n表示换行，\t 表示一个空格
print "Let's practice everything."
print 'You\'d need wo know \'nout escapes with \\ that do \n newlines and \t tabs.'
#变量的命名
poem = """
\tThe lovely world
with logic so firmly plantde
cannot discern \n the needs of love 
nor comprehend passion from intuition
and requires an explanation
\n\t\twhere there is none
"""
#输入
print "--------------"
print poem
print "--------------"
#变量以及输入
five = 10 - 2 + 3 - 6
print "This should be five: %s" % five
#函数
def secret_formula(started):
 jelly_beans = started * 500
 jars = jelly_beans / 1000
 crates = jars / 1000 
 return jelly_beans, jars, crates
#赋值 
start_point = 1000
beans, jars, crates = secret_formula(start_point)
 
print "With a starting point of: %d" % start_point
print "We'd jabe $d beans, %d jars, and %d crates." % (beans, jias, crates)

start_point = start_point / 10


print "We can also do that this way."
print "We'd have %d beans, %d jars, and %d crates." % secret_formula(start_point)