PROGRAM MATRIX_MULTIPLICATION
    REAL M
    DIMENSION A(3,3),B(3,3),M(3,3)

        PRINT*,"INPUT THE ELEMENTS OF THE MATRIX A"
        READ(*,*)((A(I,J),J=1,3),I=1,3)
    
        PRINT*,"INPUT THE ELEMENTS OF THE MATRIX B"
        READ(*,*)((B(I,J),J=1,3),I=1,3)
        
        DO   I=1,3 
            DO  J=1,3
                M(I,J)=0.0 !MUST BE INITIALIZED TO 0
                DO  K=1,3
                    M(I,J)=M(I,J)+A(I,K)*B(K,J)
                END DO
            END DO
        END DO
    
        PRINT*, "FINAL MATRIX AFTER MULTIPLICATION IS:"
        WRITE(*,20)((M(I,J),J=1,3),I=1,3)
        20 FORMAT(3F7.2)
    
        STOP
    END PROGRAM
    
    