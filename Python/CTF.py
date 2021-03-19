import requests

url = 'https://j2team.dev/ctf/task/3'
myobj = {'XXXXX': 'XBCSqPYfo7Ew5D9TpIc2qywz7qzSk78MllzdGo4x'}

x = requests.post(url, data = myobj)

print(x.text)