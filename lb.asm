format PE

section '.text' executable

_start:
        mov esi, arr
        mov ecx, arrsize
        mov eax, 0  ; elem
        mov ebx, 0  ; sum
        mov edx, 0  ; i

        main_loop:
                add edx, 1
                lodsb  ; elem = arr[i]
                cmp al, 0
                jle next ; отрицательное или 0 - прыгаем на следующий элемент

                cmp edx, a
                jl next  ; ещё не дошли до исследуемого участка
                cmp edx, b
                jg end_of_cycle  ; уже обработали нужный участок, выходим из программы
                
                add bx, ax    ; sum += elem
                cmp bh, 0 ; bh - верхняя часть регистра, если не равен нулю - это переполнение
                jne overflow  ; если произошло переполнение - выходим
                
                next:
        loop main_loop
        
        overflow:
        end_of_cycle:
ret

section '.data'

arr db -1,2,-3,99,-5,-6,7
arrsize = 7
a = 2
b = 6

