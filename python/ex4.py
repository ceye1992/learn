# -*- coding: utf-8 -*-
# 进行初始量的赋值
cars = 100
space_in_a_car = 4.0
drivers = 30
passengers = 90
# 进行变量的命名
cars_not_driven =cars - drivers
cars_driven = drivers
carpool_capacoty = cars_driven * space_in_a_car
average_passenger_per_car = passengers / cars_driven
# 开始进行计算，其中，print后面没有在”’里的字符如果在前文中进行了赋值则直接换成数字，
# 如果是变量的话则是直接计算后得到答案
print "Where are", cars, "cars available."
print "there are only", drivers, "drivers available."
print "There will be", cars_not_driven,"empty cars today."
print "We can transport", carpool_capacoty,"people today."
print "We have", passengers, "to carpool today."
print "We need to put about", average_passenger_per_car,"in each car."