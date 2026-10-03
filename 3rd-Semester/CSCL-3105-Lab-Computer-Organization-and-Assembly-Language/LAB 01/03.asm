.MODEL SMALL
.STACK 100H

.DATA
TEST1 DB 6
TEST2 DB 2 

.CODE 
MAIN PROC
    MOV AX,@DATA
    MOV DS, AX
    
    MOV AL,TEST1
    ADD AL,TEST2
    
    ADD AL, 30H
    MOV DL, AL
    MOV AH, 02H
    INT 21H
    
    MOV AH, 4CH
    INT 21H
    
MAIN ENDP
END MAIN

