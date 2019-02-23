"""
使用ctypes跨平台Linux、Windows、MacOS调用C语言函数
"""
from platform import system
from ctypes import *

sys = system()
print(sys)

if sys == "Windows":
	libc = cdll.msvcrt
elif sys == "Linux":
	libc = CDLL("libc.so.6")
elif sys == "Darwin":
	libc = CDLL("libc.dylib")
else:
	print("unknown system")

libc.printf(b"Python string %s, %d\n", b"str001", 100)