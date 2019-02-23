print("Test Ctypes Numbers!")
import time
time.sleep(1)
from ctypes import *
#倒入库 windows中dll后缀名不用加，Linux需要.so
lib = CDLL("testctypesnumber")
try:
	lib.TestCtypesNumber(101, c_float(99.1), True)
except Exception as e: 
	print("TestCtypesNumber error", e)
finally:
	time.sleep(2)
input()

