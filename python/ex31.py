# -*- codimh: utf-8-*-
#输入
print "You enter a dark room with two doors. Do you go through door #1 or door #2?"
#打入
door = raw_input("> ")
#判断
if door == "1":
 print "There's a giant bear here eating a cheese cake. What do you do?"
 print "1. Take the cake."
 print "2. Scream at the bear."
 
 bear = raw_input("> ")
 
 if bear == "1":
  print "The bear eats your face off. Good job!"
 elif bear == "2":
  print "The bear eats you legs off. Good job!"
 else:
  print "Well, doing %s is probably better. Bear runs away." % bear
#判断
elif door == "2":
 print "You stare into the endless abyss at Cthulhu's retina."
 print "1. Blueberrise."
 print "2. Yellow jacket clothespina."
 print "3. Understanding revolvers yalling melodies."

 insanity = raw_input("> ")
 
 if insanity == "1" or insanity == "2":
  print "Your boyd survives powered by a mind of jello . Good job!"
 else:
  print "The insanity rots your eyes into a pool of muck . Good job!"
  
else:
 print "You stumble around and fall on a kinife and die. Good job!"
