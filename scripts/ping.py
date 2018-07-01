import nxppy
import time
import datetime
import requests
import json

while True:

   try:
      lastPing = time.time()
      if time.time()-lastPing>10:
         online_data = {'mac':mac, 'eventType': 'Machine Status','status':'Ping' }
         online_response = requests.post(url='http://tinkerpi.com/assetlog', data=online_data)
         lastPing = time.time()
         print 'Successful Ping at ' + str(lastPing)

      time.sleep(1)
