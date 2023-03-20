import json

json_data = []
nums = []
soma = 0
quant = 0

with open('dados.json') as json_file:
  json_data = json.load(json_file)
  
for item in json_data:
  if item['valor'] != 0:
    nums.append(item['valor'])
    soma = soma + item['valor']
    
nums.sort()
media = soma/len(nums)

for item in nums:
  if item > media:
    quant = quant + 1

print("Dias com faturamento acima da media:" + str(quant))
print("Menor valor de faturamento:" + str(nums[0]))
print("Maior valor de faturamento:" + str(nums[-1]))