PROGRAM AVERAGE_SCORE_PAGE_99

    !PROBLEM 4.14 PAGE 99 CHAPTER 4

    N=0         !COUNTER FOR AVR NUMBERS OVER 90
    K=0         !COUNTER FOR STUDENT NUMBER

50      PRINT*,"ID,T1,T2,T3 ","STUDENT COUNT:",K
        READ*,ID,T1,T2,T3
        K=K+1
        AVR=(T1+T2+T3)/3.0
        PRINT*,ID,"  ",AVR

        IF(AVR.LT.90) GOTO 30
        N=N+1

30      IF(K.LE.25) GOTO 50
        
        PRINT*,"NO. OF STUDENTS WHO GOT>=90 : "
        STOP

END PROGRAM
