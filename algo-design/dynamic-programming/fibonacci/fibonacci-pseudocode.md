```py


#______________________________________________
#Fibonacci -> Bottom-up

Function Fibonacci(num):
    If num == 0 Then
        Return 0
    End If

    If num == 1 Then
        Return 1
    End If

    # Initialize an array to store Fibonacci values
    Create an array arr of size num + 1
    
    arr[0] = 0  # Base case: Fibonacci(0)
    arr[1] = 1  # Base case: Fibonacci(1)

    # Loop to fill in the array with Fibonacci values
    For i from 2 to num Do
        arr[i] = arr[i-1] + arr[i-2]  # Fibonacci formula
    End For

    Return arr[num]  # Return the Fibonacci value of num
End Function


# Main Program
Input num from user
Print Fibonacci(num)
