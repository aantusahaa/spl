PROGRAM SecondLargestSmallest
    IMPLICIT NONE
  
    INTEGER i, n, largest, secondLargest, smallest, secondSmallest
  
    WRITE(*,*) "Enter 10 integer numbers:"
  
    READ(*,*) n
    largest = n
    secondLargest = n
    smallest = n
    secondSmallest = n
  
    DO 20 i = 2, 10
      READ(*,*) n
  
      IF (n > largest) THEN
        secondLargest = largest
        largest = n
      ELSE IF (n > secondLargest) THEN
        secondLargest = n
      END IF
  
      IF (n < smallest) THEN
        secondSmallest = smallest
        smallest = n
      ELSE IF (n < secondSmallest) THEN
        secondSmallest = n
      END IF
    20 CONTINUE
  
    WRITE(*,*) "Second largest number is:", secondLargest
    WRITE(*,*) "Second smallest number is:", secondSmallest
  
  END PROGRAM SecondLargestSmallest
  