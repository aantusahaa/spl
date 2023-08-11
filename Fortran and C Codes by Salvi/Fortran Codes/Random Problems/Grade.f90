PROGRAM GRADE
    INTEGER S1,S2,S3,S4,S5,SUM
        PRINT*,"Put marks of 5 subjects of student"
    
        I=1     !LOOP VARIABLE
    
        10  READ*,S1,S2,S3,S4,S5
            SUM=S1+S2+S3+S4+S5
            AVE=SUM/5.0
    
            IF(AVE.GE.80.0) PRINT*,"GRADE A+"
            IF((AVE.GE.75.0).AND.(AVE.LT.80.0))PRINT*,"GRADE A"
            IF((AVE.GE.70.0).AND.(AVE.LT.75.0))PRINT*,"GRADE A-"
            IF((AVE.GE.65.0).AND.(AVE.LT.70.0))PRINT*,"GRADE B+"
            IF((AVE.GE.60.0).AND.(AVE.LT.65.0))PRINT*,"GRADE B"
            IF((AVE.GE.55.0).AND.(AVE.LT.60.0))PRINT*,"GRADE B-"
            IF((AVE.GE.50.0).AND.(AVE.LT.55.0))PRINT*,"GRADE C+"
            IF((AVE.GE.45.0).AND.(AVE.LT.50.0))PRINT*,"GRADE C"
            IF((AVE.GE.40.0).AND.(AVE.LT.45.0))PRINT*,"GRADE C-"
            IF(AVE.LT.40.0)PRINT*,"GRADE F"
            I=I+1
            IF(I.LE.5) GOTO 10
    
    END PROGRAM
    
    