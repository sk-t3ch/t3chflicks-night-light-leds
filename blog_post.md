# Motion Sensing Under Bed Lighting

Ever tried to get out of bed quietly at night only to trip over something and wake up the whole house?

Motion sensing night lights installed discreetly under your bed provide low-level light bright enough to guide you around obstacles, but dim enough so you’re not woken up fully. As well as sensing motion, it’s also possible to programme the lights to a colour of your choice for a fixed (or indefinite) length of time, adding a cool glow and ambiance to any bedroom.

![](https://cdn-images-1.medium.com/max/2160/1*vgc4_0EJY-zjtEIEg-5yTQ.png)

With some pretty basic kit, you can install these lights with relative ease in a couple of hours.

## Supplies

* Power supply (5V 6A) [Amazon](https://www.amazon.co.uk/gp/product/B01D8FLRQ4/ref=as_li_tl?ie=UTF8&camp=1634&creative=6738&creativeASIN=B01D8FLRQ4&linkCode=as2&tag=t3chflicks07-21&linkId=48504560b11eff32a3dfb611f7436d3f)

* Addressable LED strip [Amazon](https://www.amazon.co.uk/gp/product/B07439RXD3/ref=as_li_qf_asin_il_tl?ie=UTF8&tag=t3chflicks07-21&creative=6738&linkCode=as2&creativeASIN=B07439RXD3&linkId=528cbedaefa1222a704f3427926114a1)

* Arduino Nano [Amazon](https://www.amazon.co.uk/gp/product/B0097AU5OU/ref=as_li_qf_asin_il_tl?ie=UTF8&tag=t3chflicks07-21&creative=6738&linkCode=as2&creativeASIN=B0097AU5OU&linkId=6b2f81cd5af685300bcb5b3d3401fb95)

* Wire clips [Amazon](https://www.amazon.co.uk/gp/product/B001GT4QUE/ref=as_li_qf_asin_il_tl?ie=UTF8&tag=t3chflicks-21&creative=6738&linkCode=as2&creativeASIN=B001GT4QUE&linkId=d4a06ec09964ff627ab8634d8f9aa27e)

* Motion Sensors [Amazon](https://www.amazon.co.uk/gp/product/B00R2U8LLG/ref=as_li_tl?ie=UTF8&camp=1634&creative=6738&creativeASIN=B00R2U8LLG&linkCode=as2&tag=t3chflicks-21&linkId=23534259a56c3ec6b27f14dc821edc95)

* Rocker switch [Amazon](https://www.amazon.co.uk/gp/product/B07253LWHS/ref=as_li_qf_asin_il_tl?ie=UTF8&tag=t3chflicks-21&creative=6738&linkCode=as2&creativeASIN=B07253LWHS&linkId=9a0e1aee17eb95b83bdb58fd2348f682)

* AC Plug

* Wire
> # [🔗 Get The Motion Sensing Under Bed Lighting Code On Github 📔](https://github.com/sk-t3ch/t3chflicks-night-light-leds)

![](https://cdn-images-1.medium.com/max/2120/1*52rGrAVJCBlaDiIOKtb_VA.png)

## Tutorial

<center><iframe width='560' height='315' src ='https://www.youtube.com/embed/$nd3-q7_o6bg' frameborder='0' allowfullscreen></iframe></center>

## Build 🛠️

### Measure the Bed

Turn the bed onto its side so the base is readily accessible. Find an appropriate location for the control box - we chose the slightly higher area near the head of the bed (see diagram). Measure the perimeter of your bed and its length and width (see diagram). Note down your measurements.

Determine a location for the three sensors. You want one facing each of the three sides of the bed which are not against the wall. We chose locations which were close to the edge of the bed, but not visible. Measure the distance from the sensor location to the control box.

![](https://cdn-images-1.medium.com/max/4426/1*e1kLjZf6rX7elodBANoG9w.png)

### Cut the Wires and LED Strip

Cut the LED strip to the length of the bed perimeter.

Next, cut the wires: you will need three for each sensor and three for the LED strip, each leading back to the control box, so 12 in total. Taking three lengths of differently coloured wire, cut to size. We used yellow, green and orange — the accepted convention is red for power, black for ground and another (bold) colour for signal. It doesn’t really matter which colours you use as long as you know which is which.

### Solder Cables to Motion Sensor

We housed our motion sensors in 3D-printed cases (you can find the file link below). It’s not completely necessary to have these, but they make the sensors tidier and easier to put on the bottom of your bed.

If you are using the 3D-printed case, start by threading the three differently coloured wires through the lid. The motion sensors have three different pins: ground (GND), power (VCC), and signal (S) (shown below). When holding the sensor as shown in the diagram above (i.e. with the pins on the bottom edge of the module), attach the three different coloured wires their respective pins and solder them into place. Then, cover the wires using heat shrink. Repeat this for the wires cut for each of the three sensors.

Push the dome of the motion sensor through the hole in the main case. It should click into place. Close the case, leaving the three coloured wires trailing through the rear hole.

![](https://cdn-images-1.medium.com/max/3000/1*wE7gEYQerwBg3wOaTb30Eg.png)

![](https://cdn-images-1.medium.com/max/4376/1*pXQ0eWDp31z1EEUEZrUMxA.jpeg)

![](https://cdn-images-1.medium.com/max/2000/1*wIHtujcpKJsQpLHRgrWlSA.png)

### Wire the LED Strip

The LED strip has the three same connections: power, signal and ground — except the signal pin is an input.

These LEDs take instructions from the Arduino, each one of them addressable. We can change colour (RGB) and brightness. Solder three coloured wires to the LED strip, these will be used to connect to the Arduino later.

![](https://cdn-images-1.medium.com/max/2200/1*NOkAelNUhJUNwxhOWkFPZg.png)

### Power Switch

If you’re using the 3D-printed control box, you will need to install the power switch and connect it up to the wires.

Firstly, ensure there’s nothing on the end of your plug, if there is, cut it off. Thread the wire through the hole in the front of the box and out again through the hole for the switch immediately next to it. Strip the outer covering of the AC wire so that 10cm of the three inner wires (Live, Neutral and Earth) can be seen.

Then, cut and remove 8cm of the live (red) and neutral (blue) wires and set aside for later. Using the remaining 2cm of the end of the AC plug wire, solder the live (red) and neutral (blue) wires to the switch on the bottom two prongs (as shown in the diagram).

Next, take the 8cm pieces of live (red) and neutral (blue) wires you cut earlier and solder them onto the two prongs on the top of the switch (as shown in the diagram) — these wires will attach to the power box within the control box. Pulling the wires through first, push the switch into its hole in the box.

![](https://cdn-images-1.medium.com/max/2000/1*x0Xha8JUJk8rZVpfpKyZ0Q.png)

![](https://cdn-images-1.medium.com/max/3100/1*HyGFI3-aL8uhHCyYdEx3Ug.png)

### Connect Power Supply

Put the power supply in the box so the wire connection points face the switch.

Connect the live (red) and neutral (blue) wires from the switch to the live and neutral connection point (marked l and n respectively) on the power supply. The connection points on the power supply are screws, ensure these are done up tightly once the wires are in place.

![](https://cdn-images-1.medium.com/max/2118/1*26XjQMSffCpsOsyqTur5WQ.png)

### Connect the Arduino

The power supply has output connections for 5V and ground (see diagram). Take the Arduino and cut a power wire (conventionally red, but whatever colour you are using) approximately 8cm long.

Connect the Arduino to the power supply by screwing one end of the power wire into the ‘5V’ connection point and soldering the other end to the ‘VIn’ on the Arduino.

Repeat the process with a ground (black, or whatever colour you have chosen) wire, connecting ‘GND’ on the power supply and Arduino.

![](https://cdn-images-1.medium.com/max/2000/1*5WyZ480xjrP_Yptn62YXyg.png)

![](https://cdn-images-1.medium.com/max/2000/1*pJp197gJuEYW9QSMR5Xmvw.png)

### Connect LED Strip to Power Supply and Arduino

Thread the LED strip’s wires through the remaining empty hole in the box.

Strip the LED strip’s power and ground wires. Connect the power (red) wire to the power supply’s ‘5V’ connection point (the Arduino is already attached to this) and the ground (black) wire to the power supply ‘GND’ connection point (the Arduino is already attached to this, too).

Solder the LED strip’s signal wire to the digital pin 9 of the Arduino.

### Connect Motion Sensors to Arduino

Thread the motion sensors’ wires (9 in total) through the hole where the LED strip’s wires are.

Solder the three power wires to the +5V of the Arduino, the ground wires to the gnd of the Arduino and solder the individual signal wires to Arduino pins 10, 11 and 12.

### Programme the Arduino

Download the code below called ‘motion_sensing_lights.ino’. Then, using the Arduino software downloadable form [here](https://www.arduino.cc/en/Main/Software), upload the code to your Arduino module.

If you are unsure about how to do this, find out more [here](https://www.youtube.com/watch?v=R102xfcx75I). You will also need to download the FastLED library from [here](https://github.com/FastLED/FastLED).

The code is pretty simple: it continuously checks if the motion sensors have outputted a signal and if so, starts a timer and turns on the LED strip to glow up, stay on a minute and then glow down.

### Put on Bed

Shut the control box — the only things outside it should be the LED strip and the AC plug.

Stick the box to the bottom of the bed in your chosen location — we did this using strong double sided tape.

Then, attach the motion sensors to the bottom of the bed using double sided tape. The motion sensors should face outwards along the three sides of the bed which are not along the wall. Next, mount the LED strip around the perimeter of the bed.

Although the LED strip has a sticky back, this is not strong enough to hold its weight. Therefore, we held it in place using plastic wire clips which we hammered into the bottom of the bed. Plug in and turn on the control box and turn the bed the right way up.

![](https://cdn-images-1.medium.com/max/2070/1*nVtHCyqJ-Cfu24YLsrYoKQ.png)

![](https://cdn-images-1.medium.com/max/2000/1*Iv_fKKbFlnbRKJRe-nfSsA.png)

### Adjust, Test and Admire

Test out your motion-sensing under bed lighting. You can adjust the motion sensor sensitivity by putting a screwdriver through the top hole of the case and twisting the sensitivity resistor.

![](https://cdn-images-1.medium.com/max/2000/1*0u5uadCI-6KaxyAKl2Q2uQ.png)

### Taking It Further

![](https://cdn-images-1.medium.com/max/2162/1*fJEJu68QxDP8-aebIQ9gJg.png)

Using an ESP8266 module ([Amazon](https://www.amazon.co.uk/gp/product/B0791FJB62/ref=as_li_qf_asin_il_tl?ie=UTF8&tag=t3chflicks07-21&creative=6738&linkCode=as2&creativeASIN=B0791FJB62&linkId=13c7d0877d5fe80a032e3da162b9a82e)) instead of the Arduino, it is possible to control the LED strip with your phone or with Alexa by linking it to the open source home automation platform [Home Assistant](https://www.home-assistant.io/). There’s already been a great tutorial on how to do this, and you can find it [here](https://www.youtube.com/watch?v=9KI36GTgwuQ).
> # [🔗 Get The Motion Sensing Under Bed Lights Code On Github 📔](https://github.com/sk-t3ch/t3chflicks-night-light-leds)

## Thanks for Reading

I hope you have enjoyed this article. If you like the style, check out [T3chFlicks.org](https://t3chflicks.org/) for more tech focused educational content ([YouTube](https://www.youtube.com/channel/UC0eSD-tdiJMI5GQTkMmZ-6w), [Instagram](https://www.instagram.com/t3chflicks/), [Facebook](https://www.facebook.com/t3chflicks), [Twitter](https://twitter.com/t3chflicks)).