PROGRAM BANK_DEPOSIT_20_YEAR

    !THIS IS A PROGRAM WHICH CALCULATES COMPOUND INTEREST OF 5000 FOR 20 YEARS

    INTEGER YEAR
    YEAR=2001
    AMOUNT=5000
    WRITE(*,20)
    20  FORMAT(8X,'YEAR',7X,'AMOUNT(TK.)')
    10  WRITE(*,30)YEAR,AMOUNT
        30  FORMAT(8X,I4,5X,F10.2)
        AMOUNT=AMOUNT+AMOUNT*0.07
        YEAR=YEAR+1
        IF(YEAR.LE.2020) GOTO 10
        STOP
END PROGRAM
