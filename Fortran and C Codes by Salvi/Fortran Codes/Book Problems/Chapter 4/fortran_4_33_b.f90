PROGRAM HOW_MUCH_YEAR
    !CHAPTER 4 4.33(B) PAGE 109
    
REAL INTEREST
INTEGER YEAR

    AMOUNT=1000.00
    INTEREST=0.07
    YEAR=0

100     AMOUNT=AMOUNT+AMOUNT*INTEREST
        YEAR=YEAR+1
        IF(AMOUNT.LE.5000.00) GOTO 100
        
PRINT*,YEAR
STOP
END PROGRAM
        
