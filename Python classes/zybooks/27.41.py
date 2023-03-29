
def ActivityCalories(activity, duration):
    calories = 0.0

    if(activity =="sit"):
        calories = 1.4 * duration
    elif(activity =="walk"):
        calories = 5.4 * duration
    elif (activity == "run"):
        calories = 13.0 * duration
    elif (activity == "bik"):
        calories = 6.8 * duration
    elif (activity == "swim"):
        calories = 8.7 * duration

    return calories

act = input("Please enter your activity: ")
actDur = int(input("Please enter the duration of the activity: "))

print(ActivityCalories(act,actDur))