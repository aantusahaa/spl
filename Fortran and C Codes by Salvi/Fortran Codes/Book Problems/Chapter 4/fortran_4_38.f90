PROGRAM AVERAGE
    !CHAPTER 4 4.38 PAGE 110

    INTEGER I,N
    REAL SUM, NUM, MEAN

    I=1
    SUM=0.0

    PRINT*, "HOW MANY NUMBERS TO MEAN?"
    READ*,N
200 I=I+1
    IF(I.LE.N) GOTO 100

100 READ*,NUM
    SUM=SUM+NUM
    IF(I.LE.N) GOTO 200

    MEAN=SUM/N

    PRINT*,"THE ARITHMETIC MEAN OF GIVEN",N,"NUMBERS IS:",MEAN
    STOP

END PROGRAM