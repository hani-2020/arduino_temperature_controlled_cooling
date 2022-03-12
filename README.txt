The TMP36 sensor in tinkercad was acting wierd and was showing 2 different outputs depending on where I wired it (If
I wired it directly to a multimeter it showed 749 mV corresponding to 25 degrees celsius but if I wired it to any of the
analog pins of the arduino it read 14 mV corresponding to -4 degrees celsius)
The temperature is based on the equation, temp=(voltage in mV - 500)/100, to adjust for the bug I had to replace -500
with 2486. The code with the correct equation, that you should use in a real life project is uploaded in the file
'correctedcode.ino'.
