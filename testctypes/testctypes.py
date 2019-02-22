print("Test Ctypes!")
from ctypes import *
#倒入库 windows中dll后缀名不用加，Linux需要.so
lib = CDLL("testctypes")
lib.TestCtypes()