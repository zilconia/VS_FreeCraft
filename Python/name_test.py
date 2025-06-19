# -*- coding:utf-8 -*-

# 「 <モジュール名>.__name__ 」の形で書くと、
# 「 <モジュール名> 」が「str型（文字型）」で出力される。
import numpy as np
import matplotlib as mp
print('モジュール1:',np.__name__,"　文字型：",type(np.__name__))
print('モジュール2:',mp.__name__,"　文字型：",type(np.__name__),'\n')


# ファイル自身（name_test.py）を開くと、
# 「__name__」に「__main__」が「str型」で入る。
if __name__ == '__main__':
	print('メインを起動しました:',__name__,'\n')

# 他のファイルから「モジュール」として「import」して開くと、
# 「__name__」に「 import してきた <ファイル名> 」が「str型」で入る。
else:
	print('モジュールとして起動しました:',__name__,'\n')