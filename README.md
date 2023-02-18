# my-codeforces-solutions

Python script to download accepted cpp solutions given a handle:

```python
import requests
from bs4 import BeautifulSoup

handle = "XYZ"
url = f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=10000"

response = requests.get(url)
data = response.json()

accepted_submissions = []
for submission in data["result"]:
    if submission["verdict"] == "OK":
        accepted_submissions.append(submission)

print('accepted submissions')
for acc_s in accepted_submissions:
    print(f'{acc_s["contestId"]}/{acc_s["problem"]["index"]}')

print()
print('could not download')

for submission in accepted_submissions:
    submission_id = submission["id"]
    contest_id = submission["contestId"]
    problem_index = submission["problem"]["index"]
    source_url = f"https://codeforces.com/contest/{contest_id}/submission/{submission_id}"
    filename = f"{contest_id}_{problem_index}.cpp"
    
    response = requests.get(source_url)
    soup = BeautifulSoup(response.content, "html.parser")
    pre_element = soup.find("pre", id="program-source-text")
    
    if pre_element != None:
        my_text = pre_element.text
        with open(filename, "w", encoding="utf-8") as f:
            f.write(my_text)
    else:
        print(f'{contest_id}/{problem_index}')

```