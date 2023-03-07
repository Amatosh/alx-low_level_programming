token='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'
import requests

API_URL = "https://api-inference.huggingface.co/models/bigscience/bloom"
headers = {"Authorization": "Bearer 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"}

def query(payload):
	response = requests.post(API_URL, headers=headers, json=payload)
	return response.json()
	
output = query({
	"inputs": "Can you please let us know more details about your ",
})
print(output)