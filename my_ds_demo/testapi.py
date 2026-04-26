import os
from openai import OpenAI

API_KEY = "sk-7be52379e759421db64ec15122b0075b"

client = OpenAI(
    api_key=API_KEY,
    base_url="https://api.deepseek.com/v1",
)

response= client.chat.completions.create(
    model="deepseek-v4-pro",
    messages=[
        {"role": "system", "content": "You are a helpful assistant"},
        {"role": "user", "content": "你的数据库的大小大概有多大，涵盖了多少内容？"},
    ],
    stream=False,
    reasoning_effort="high",
    extra_body={"thinking": {"type": "enabled"}}
)

print(response.choices[0].message.content)