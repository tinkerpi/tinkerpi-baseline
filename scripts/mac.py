import sys

mac = open('/sys/class/net/eth0/address').read().strip()

print(mac)