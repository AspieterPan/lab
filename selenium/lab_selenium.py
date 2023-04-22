#!/usr/bin/env python3

import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By

driver = webdriver.Chrome(
    '/Users/xiaobai/Documents/Development/chromedriver_mac_arm64/chromedriver')

driver.get('https://www.baidu.com')
print("get done")

input_box = driver.find_element(By.NAME, 'wd')
print("find wd done")

input_box.send_keys('Python')
print("send Python done")

search_button = driver.find_element(By.CSS_SELECTOR, '.s_btn')
search_button.click()

time.sleep(10)
