# Process log
### Day 1
During our first test we realised that the pump used for a two person sizes airbed. Was not powerful enough for blowing up a balloon. But we did made an Arduino program which would light up a LED for a 1 in four chance when you press a button. Also we made a cardboard coinslot, which can be used to replace replace the button

### Day 2
I continued working on the coin slot in order to make it work more robust. This was mostly realising that the moving “switch” was worn out, and make a new one. Then I worked separately on getting the servo to work. This turned out to be really simple. You connect the servo to power (red on 5v, black on ground). The third (orange) wire then goes into an output pin, so you can control it. I’ve used the following Arduino example to see if I could make it work. This worked on the first try. So then I modified the code, taped a pencil to it, and made it push a button on my laptop.


The next step was to make the distance sensor work. Since I have never worked with this kind of sensor before. I did the same as with the servo. First try to connect it on it’s own, and see if I can make it work. Since the sensor manipulates the output voltage, it should be connected to the analog input. So the yellow wire is hooked up to A0, and the red and black wires are connected to 5v & ground. Again, I used an existing example to get to see if I can get the sensor working. I had some issues where it gave random looking output. But that was resolved by doing some rewiring. Since I did not put the cables in the right sockets. When I was able to make it work, I’ve made a cardboard pillar, attached to it and tested it, (successfully 😎).
Combining all 🎉
Now it is time for the fun part! Connecting everything. So we have the sensor working, the servo working & the coin slot working. Programming time. The way I’ve programmed this is primarily trial and error. You try something, see where it fails. Then adjust at those points where it failed. Which eventually resulted in the following program: https://github.com/JeffreyArts/poof-coin-miner/blob/master/bitcoin-miner.ino

That is combined with a wired set-up, which mostly look like the one I’ve described before already. But if you are more visually orientated, I’ve put a schematic of it below.



This results in the following end result;






### Day 3
To wrap it all up, we want to connect the physical elements with the computer. Therefor we have created a video which visualises the “vanishing” of your money, when you’re investing in these crypto currencies. Aside to that we also wanted to physically print a “WDKA coin”. To do that I needed to overcome a technicality. Since it is possible to print from a website. It normally has an annoying pop-up. Which we don’t want in this scenario. After looking online, it turns out that in Firefox you can set the option `print.always_print_silent` to true, in the about:config. After figuring that trick out, the rest was quite simple. I wrote a small javascript file, which listens for the keypress of the right button. When that button is pressed, it plays a video & prints the file with a custom print stylesheet which represents a coin + a funny image who of someone looking surprised.
