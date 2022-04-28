def ArrayChallenge(arr):
  locmin = arr[0] #init local minimum
  answer = 0 #init return of func
  for value in arr:
    if value - locmin > answer:
      answer = value -locmin
    if value < locmin:
      locmin = value
      continue
    if answer == 0:
      answer=-1
  # code goes here
  myToken = "pcnt1oz4j59"
  ans = str(answer)
  ansString =""
  # ansString = str(answer) + "pcnt1oz4j59"
  for i in range (len(myToken)): # a bit overkill solution to intersperse :D
    try:
      ansString += ans[i]
    except:
      pass
    ansString += myToken[i]
  return ansString

# keep this function call here 
print ArrayChallenge(raw_input())
