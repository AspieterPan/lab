import asyncio


async def func(name):
    for i in range(100):
        print(f"first doing someting at {i} of {name}")
        await asyncio.sleep(1)
        print(f"second doing someting at {i} of {name}")


async def main():
    tasks = []
    for i in range(100):
        tasks.append(func(i))
    await asyncio.gather(*tasks)


asyncio.run(main())
