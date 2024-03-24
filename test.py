import json

s = {
    "employ":
        [
            {"id": 1, "name": "Mike"},
            {"id": 2, "name": "Nancy"}
        ]
}



# read from file
with open('test.json', 'r') as f:
    print(json.load(f))