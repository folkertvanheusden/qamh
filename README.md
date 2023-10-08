qamh
----

Due to the unavailability for a long time already of the Grains module, I decided to recreate the device.
This repo contains the Kicad schematics and PCB design.

I found a modification on the web where someone put a piezo on pin 6 of the Arduino, for that I added a header (GND + D6).

I did *not* look at the original PCB, only at the documentation I found on the web ( https://www.thonk.co.uk/shop/ginkosynthese-grains-full-diy-kit/ ).

The design should be compatible with the original Grains module and should be able to run the original software without modifications.

This design is released under the CC0 license, but do with it whatever you want.

When cloning this repo, use "--recurse-submodules" as it contains submodules.

Please note: this is work in progress. At the point of writing this (October 7, 2023) the design was not tested only a bit (on a breadboard).

![front](imgs/qamh_0.1_front.jpg "front")

![back](imgs/qamh_0.1_back.jpg "back")


Folkert van Heusden <mail@vanheusden.com>
