PROGRAM SALES_COMMISSION

    PRINT*,"AMOUNT OF TOTAL SALES IN $ ?:"
    READ(*,*)SALES
    
    IF(SALES.LT.50.0) COMMISSION=0.0
    IF(SALES.GE.50.0.AND.SALES.LE.500.0) COMMISSION=SALES*0.10
    IF(SALES.GT.500.0) COMMISSION=50.0+(SALES-500)*0.08

    PRINT*,"YOUR SALES IS",SALES,"$ AND YOUR COMMISSION IS",COMMISSION,"$"
    STOP
END PROGRAM
