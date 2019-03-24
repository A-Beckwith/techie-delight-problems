def rearrange(arr, pos):
    aux = [None] * len(arr)
    for i in range(len(arr)):
        aux[pos[i]] = arr[i]
    return aux

def main():
    arr = [1, 2, 3, 4, 5]
    pos = [3, 2, 4, 1, 0]

    arr = rearrange(arr, pos)

    print(arr)

main()