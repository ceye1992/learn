# -*- coding: utf-8 -*-
# %r表示的是输入全部的字符串
formatter = "%r %r %r %r"
#双引号后面忘记加上逗号了导致出错
print formatter % (1,2,3,4)
print formatter % ("one", "two", "three", "four")
print formatter % (True, False, False, True)
print formatter % (formatter,formatter,formatter,formatter)
print formatter % (
       "I had this thing.",
	   "That you could type up right.",
	   "But it didn't sing.",
	   "So I said goodnight.")