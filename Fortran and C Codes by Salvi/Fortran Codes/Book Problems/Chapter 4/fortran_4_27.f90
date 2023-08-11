PROGRAM PRINT_ROW
    !CHAPTER 4 4.27 PAGE 108

        I=1
10      PRINT*,I,I+1,I+2
        I=I+3
        IF(I.LE.298)GOTO 10
        STOP

END PROGRAM
