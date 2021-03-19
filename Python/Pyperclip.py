from os import times
from posix import times_result
import pyperclip, sys

pyperclip.copy("Hello there !")

print("How many times you want to print ?")
timecount = input()
timecount2 = 0
while int(timecount2) < int(timecount):
    pyperclip.paste()
    times.sleep(1)
    timecount2 = timecount2 + 1
if int(timecount2) > int(timecount):
    print("Have a good day !")
    times_result.sleep(5)
quit()