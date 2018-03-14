;download the jasmin from github or google : jasmin lrz tum


mov eax,0x0f0f
or eax,0xf0f0
mov word [0x2a],1
mov word [0x2c],1
mov word [0x2], 2
game_loop:
jasminsleep 500
mov eax,2
call get_movement

cmp word [0x1e],1
je ende

jmp game_loop


get_movement:
cmp word [0x1c],1
je left
cmp word [0x1c],2
je up
cmp word [0x1c],4
je down
cmp word [0x1c],8
je right
special_place:
ret

left:
cmp word [0x2c],0
je to_return
sub word [0x2c],1

mov dx,[0x2a]
mul dx

mov edx,0
mov dx,1
mov di,[0x2c]
loop_start:
cmp di,0
je to_return
shl dx,1
sub di,1
jmp loop_start
to_return:
add word [eax], dx
jmp special_place


up:
cmp word [0x2a],0
je to_return1
sub word [0x2a],1

mov dx,[0x2a]
mul dx
mov ecx,0
mov cx,[eax]



mov edx,0
mov dx,1
mov di,[0x2c]
loop_start1:
cmp di,0
je to_return1
shl dx,1
sub di,1
jmp loop_start1
to_return1:
add word [ecx], dx
jmp special_place


down:
cmp word [0x2a],15
je to_return2
add word [0x2a],1

mov dx,[0x2a]
mul dx


mov edx,0
mov dx,1
mov di,[0x2c]
loop_start2:
cmp di,0
je to_return2
shl dx,1
sub di,1
jmp loop_start2
to_return2:
add word [eax], dx
jmp special_place

right:
cmp word [0x2c],15
je to_return3
add word [0x2c],1

mov dx,[0x2a]
mul dx

mov edx,0
mov dx,1
mov di,[0x2c]
loop_start3:
cmp di,0
je to_return3
shl dx,1
sub di,1
jmp loop_start3
to_return3:
add word [eax], dx
jmp special_place











ende:

