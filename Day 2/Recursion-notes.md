# What is recursion?
The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function.
     
    ## Tail Recursion
    A recursive function is tail recursive when a recursive call is the last thing executed by the function.
    
    ## Head Recursion
    If a recursive function calling itself and that recursive call is the first statement in the function then it's known as Head Recursion. There's no statement,
    no operation before the call. The function doesn't have to process or perform any operation at the time of calling and all operations are done at returning time.
  
  ## What is a base condition in recursion?
  In a recursive function, the solution to the base case is provided and the solution of the bigger problem is expressed in terms of smaller problems.
  The role of the base condition is to stop a recursive function from executing endlessly – once a pre-specified base condition is met, the function knows it’s time to exit.
    
    
