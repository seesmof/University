response = requests.post(url, json=data, headers=headers)

print(response.status_code)

data = response.text
text = data.replace("data: ", "")
text = text.replace("\n ", "")

text = f'''{text}'''
print('-------------------------------------------')
text = text.replace('\n', "/n")
text = text.replace('\r', "/r")
print(text)
print('-------------------------------------------')
text = text.replace('/r/n/r/n/r/n/r/n', "\n")
text = text.replace('/r/n/r/n/r/n', "\n")
text = text.replace('/r/n/r/n/r', "\n")
text = text.replace('/r/n/r/n', "")
text = text.replace('/r/n/r', " ")
text = text.replace('/r/n', "")
text = text.replace('/r', "")
text = text.replace(':
                    `
                    ``', ": \n
                    `
                    ``")
text = text.replace(':1.', ":\n1.")
text = text.replace('.1.', ".\n1.")
text = text.replace('.2.', ".\n2.")
text = text.replace('.3.', ".\n3.")
text = text.replace('.4.', ".\n4.")
text = text.replace('.5.', ".\n5.")
text = text.replace('.6.', ".\n6.")
text = text.replace('.7.', ".\n7.")
text = text.replace('.8.', ".\n8.")
text = text.replace('.9.', ".\n9.")
text = text.replace('.10.', ".\n10.")
print(text)
