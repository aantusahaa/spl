!THIS IS A PROGRAM WHICH ADDS FROM 1 UPTO THE TAKEN VALUE OF THE INPUT INTEGER

PROGRAM ADDING
    INTEGER I,N,SUM

    PRINT*,"THIS IS A PROGRAM WHICH ADDS FROM 1 UPTO THE TAKEN VALUE OF THE INPUT INTEGER"
    PRINT*,"TELL US THE NUMBER UPTO WHICH YOU WANT TO ADD:" 
    
    READ(*,*)N
    
    DO 10 I=1,N,1
        SUM=SUM+I 
        10 CONTINUE
        WRITE(*,*)"YOUR INPUT NUMBER WAS ",N
        WRITE(*,*)"AND THE SUM OF THE CONSECUTIVE INTEGERS FROM 1 TO",N,"IS",SUM
    
STOP    
END PROGRAM                
        
