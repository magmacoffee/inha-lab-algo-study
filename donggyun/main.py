def isVPS(s):
    open_cnt = 0
    close_cnt = 0

    for val in s:
        if val == '(':
            open_cnt += 1
        elif val == ')':
            close_cnt += 1
        if close_cnt > open_cnt:
            return False

    if open_cnt == close_cnt:
        return True
    else:
        return False


for _ in range(int(input())):
    s1 = input()
    if isVPS(s1):
        print("YES")
    else:
        print("NO")