def LCS(str1: str, str2: str) -> str:
    if not str1 or not str2:
        return ""
    if str1[0] == str2[0]:
        return str1[0] + LCS(str1[1:], str2[1:])
    subLCS1 = LCS(str1, str2[1:])
    subLCS2 = LCS(str1[1:], str2)
    return subLCS1 if len(subLCS1) > len(subLCS2) else subLCS2


def __test__():
    print(LCS("abcde", "ace"))
    print(LCS("bcdaacd", "acdbac"))
    print(LCS("abc", "def"))

    assert "ace" == LCS("abcde", "ace")
    assert "cdac" == LCS("bcdaacd", "acdbac")
    assert "" == LCS("abc", "def")


if __name__ == "__main__":
    __test__()
