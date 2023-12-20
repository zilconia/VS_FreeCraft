# コードを作るにあたって参考にしたサイト
# https://self-development.info/

import google.generativeai as genai

from apikey import G_key # 外部ファイルに保存したAPIキーを読み込む。
 
genai.configure(api_key=G_key)
 
model = genai.GenerativeModel('gemini-pro')
 
chat = model.start_chat()
response = chat.send_message('どのプログラミング言語を学べば良いですか？最もオススメの言語を一つだけ教えてください。')
print(response.text)
 
print("-" * 50)
 
response = chat.send_message('その言語の特徴は？')
print(response.text)