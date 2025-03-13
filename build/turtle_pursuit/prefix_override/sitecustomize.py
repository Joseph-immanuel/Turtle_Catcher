import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/joseph/Turtle_Pursuit/install/turtle_pursuit'
