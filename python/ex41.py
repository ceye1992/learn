# -- coding: utf-8--
# 开始调用exit和randint
from sys import exit
#randint 函数，生成一个（1，8）中间的整数，可以取得上下数值
from random import randint
#创建函数
def death():
 quips = ["You died. You kinda suck at this.",
          "Nice job, you died ...jakeass.",
		  "Such a luser,",
		  "I have a small puppy that's better at this ."]
		  
 print quips[randint(o,len(quips)-1)]
 wxit(1)
 #在中央走廊
def central_corridor():
  print "The Gothons of Planet Percal #25 have invaded your ship and destroyed"
  print "your entire crew. You are the last surviving member and your last"
  print "mission is to get the neutron destruct bomb from the Weapons Armory,"
  print "put it in the bridge, and blow the ship up after getting into an"
  print "escape pod."
  print "\n"
  print "You're running down the central corridor to the weapons armory when"
  print "a Gothon jumps out, red scaly skin, dark grimy teeth,and evli clown costume"
  print "flowing around his hate filled body. He's blocking the door wo the"
  print "Armary and about to pull a weapon to blast you."
 #输入选择 
  action = raw_input("> ")
  #如果选择是什么的话 action
  if action == "shoot!":
   print "Quick on the draw you yank out your blaster and fire it at the Gothon."
   print "His clown costume is flowing and moving around his body, which throws"
   print "off your aim, your laser hits his costume but misses him entrely. This"
   print "completely ruins his brand new costume his mother bought him, which"
   print "najes him fly into an insane rage and blast you repeatedly in the face until"
   print "makes him fly into an insane rage and blast you repeatedly in the face until"
   print "you are dead. Then he eats you."
   return 'death'
  elif action == "dodge!":
   print "Like a world class boxer you dodge, weave, slipand slide right"
   print "as the Gothon's blaster cranks a laser past your head."
   print "In the middle of your artful dodge your footslips and you"
   print "bang your head on the metal wall and pass out."
   print "You wake up shortly after only to die as theGothon stomps on"
   print "your head and eats you."
   return 'death'
  elif action == "tell a joke":
   print "Lucky for you they made you learn Gothon insults in the academy."
   print "You tell the one Gothon joke you know:"
   print "Lbhe zbgure vf fb sng, jura fur fvgf nebhaq gurubhfr, fur fvgf nebhaq gur ubhfr." 
   print "The Gothon stops, tries not to laugh, then bustsout laughing and can't move."
   print "While he's laughing you run up and shoot himsquare in the head"
   print "putting him down, then jump through the WeaponArmory door."
   return 'laser_weapon_armory'
  #上面的情况都没有的话
  else:
   print "DOES NOT COMPUTE!"
   return 'central_corridor'
def laser_weapon_armory():
 print "You do a dive roll into the Weapon Armory, crouchand scan the room"
 print "for more Gothons that might be hiding. It's deadquiet, too quiet."
 print "You stand up and run to the far side of the roomand find the"
 print "neutron bomb in its container. There's a keypadlock on the box"
 print "and you need the code to get the bomb out. If you get the code"
 print "wrong 10 times then the lock closes forever and you can't"
 print "get the bomb. The code is 3 digits."
 code = "%d%d%d" % (randint(1,9), randint(1,9),randint(1,9))
 guess = raw_input("[keypad]> ")
 guesses = 0
 while guess != code and guesses < 10:
  print "BZZZZEDDD!"
  guesses += 1
  guess = raw_input("[keypad]> ")
 if guess == code:
  print "The container clicks open and the seal breaks,letting gas out."
  print "You grab the neutron bomb and run as fast asyou can to the"
  print "bridge where you must place it in the rightspot."
  return 'the_bridge'
 else:
  print "The lock buzzes one last time and then you heara sickening"
  print "melting sound as the mechanism is fusedtogether."
  print "You decide to sit there, and finally the Gothonsblow up the"
  print "ship from their ship and you die."
  return 'death'
def the_bridge():
 print "You burst onto the Bridge with the neutron destruct bomb"
 print "under your arm and surprise 5 Gothons who are tryingto"
 print "take control of the ship. Each of them has an evenuglier"
 print "clown costume than the last. They haven't pulledtheir"
 print "weapons out yet, as they see the active bomb underyour"
 print "arm and don't want to set it off."
#再次输入行动
 action = raw_input("> ")
 if action == "throw the bomb":
  print "In a panic you throw the bomb at the group ofGothons"
  print "and make a leap for the door. Right as you dropit a"
  print "Gothon shoots you right in the back killing you."
  print "As you die you see another Gothon frantically try to disarm"
  print "the bomb. You die knowing they will probablyblow up when"
  print "it goes off."
  return 'death'
 elif action == "slowly place the bomb":
  print "You point your blaster at the bomb under yourarm"
  print "and the Gothons put their hands up and startto sweat."
  print "You inch backward to the door, open it, and then carefully"
  print "place the bomb on the floor, pointing your blaster at it."
  print "You then jump back through the door, punch theclose button"
  print "and blast the lock so the Gothons can't getout."
  print "Now that the bomb is placed you run to the escape pod to" 
  print "get off this tin can."
  return 'escape_pod'
 else:
  print "DOES NOT COMPUTE!"
  return "the_bridge"
def escape_pod():
 print "You rush through the ship desperately trying to makeit to"
 print "the escape pod before the whole ship explodes. Itseems like"
 print "hardly any Gothons are on the ship, so your run isclear of"
 print "interference. You get to the chamber with theescape pods, and"
 print "now need to pick one to take. Some of them couldbe damaged"
 print "but you don't have time to look. There's 5 pods,which one"
 print "do you take?"
 good_pod = randint(1,5)
 guess = raw_input("[pod #]> ")
 if int(guess) != good_pod:
  print "You jump into pod %s and hit the eject button." % guess
  print "The pod escapes out into the void of space,then"
  print "implodes as the hull ruptures, crushing your body"
  print "into jam jelly."
  return 'death'
 else:
  print "You jump into pod %s and hit the eject button." % guess
  print "The pod easily slides out into space headingto"
  print "the planet below. As it flies to the planet,you look"
  print "back and see your ship implode then explode like a"
  print "bright star, taking out the Gothon ship at thesame"
  print "time. You won!"
  exit(0)
#具体的房间名字
 ROOMS = {
 'death': death,
 'central_corridor': central_corridor,
 'laser_weapon_armory': laser_weapon_armory,
 'the_bridge': the_bridge,
 'escape_pod': escape_pod
}
#进入房间的函数，
def runner(map, start):
 next = start
#当next等于map的时候进入下一个地图
 while True:
  room = map[next]
  print "\n--------"
  next = room()
#开始进行游戏
runner(ROOMS, 'central_corridor')