# -*- coding：utf-8-*-
#设置函数，包括名称和参数，参数后面必须跟冒号
def cheese_and_crackers(cheese_count, boxes_of_crackers):
 print "You have %d cheeses!" % cheese_count
 print "You have %d boxes of crackers!" % boxes_of_crackers
 print "Man that's enough for a party!"
 print "Get a blanket.\n"
#开始输入，并且输入了参数值。冒号在最后变成了感叹号	，这个是直接引用函数名称，然后赋值
print "We can just give the function numbers directly:"
cheese_and_crackers(20, 30)
#开始第二次函数的引用，这个是直接给参数赋值，然后在写出参数哦
print "OR, we can use variables from our script:"
amount_of_cheese = 10
amount_of_crackers = 50
cheese_and_crackers(amount_of_cheese, amount_of_crackers)
#继续引用参数哦。并且直接进行了计算
print "We can even do math inside too:"
cheese_and_crackers(10 + 20, 5 + 6)
#给出函数名称，然后再后面跟参数，参数的值直接和上文的参数值直接引用
print "And we can combine the two, variables and math:"
cheese_and_crackers(amount_of_cheese + 100, amount_of_crackers + 1000)