# -*- coding: utf-8-*-
# 进行赋值 
name = 'Zed A. Shaw'
age = 35 # not a lie
height = 74 # inches
weighe = 180 # lbs
eyes = 'Blue'
teeth = 'White'
hair = 'Brown'
# 用%加上前面的变量
print "Let's talk about %s." % name
print "He's %d inches tall." % height
print "He's %d pounds heavy." % weighe
print "Actuclly that's not too heavy."
print "He's got %s eyes and %s hair." % (eyes, hair)
print "His teeth are usually %s depengding on the cffee ." % teeth

# this line is tricky, try to get it exactly right
print "If I Add %d, %d, and %d I get %d." % (age, height, weighe,age + height + weighe)
