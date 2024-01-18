from pypinyin import pinyin, Style

text = "汉字转拼音"
pinyin_list = pinyin(text, style=Style.TONE2)

for word in pinyin_list:
    print("".join(word))
