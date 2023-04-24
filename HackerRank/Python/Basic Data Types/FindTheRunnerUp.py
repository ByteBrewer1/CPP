if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr_list = set(arr)
    maximum = max(arr_list)
    arr_list.remove(maximum)
    print(max(arr_list))
    