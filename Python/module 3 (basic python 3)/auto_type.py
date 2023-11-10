import pyautogui
from time import *

sleep(5)
for i in range(0,5):
    pyautogui.write('hi', interval=0.10)
    pyautogui.press('enter')

