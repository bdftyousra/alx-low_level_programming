# uncompyle6 version 3.9.0
# Python bytecode version base 3.4 (3310)
# Decompiled from: Python 3.8.10 (default, Mar 15 2022, 12:22:08) 
# [GCC 9.4.0]
# Embedded file name: 100-crackme.py
# Compiled at: 2017-01-05 16:44:37
# Size of source mod 2**32: 195 bytes
pwd = input('Password: ')
ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
if pwd == ok:
    print('OK')
else:
    print('KO')
# okay decompiling crackme4.pyc