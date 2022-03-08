# TABLE OF CONTENT

1 INTRODUCTION

1.1 ABSTRACT

1.2 COST AND TIME 

1.3 SWOT ANALYSIS

1.4 4W's and 1'H

2 DESCRIPTION REQUIREMENTS 

2.1 HIGH LEVEL REQUIREMENTS

2.2 LOW LEVEL REQUIREMENTS

3 ARCHITECTURE

3.1 SEQUENTIAL DIAGRAM

3.2 BLOCK DIAGRAM

3.3 COMPONENTS REQUIRED

3.4 FUTURE SCOPE

# 1 Introduction
Sitting is one of the most common postures of human being in day-to-day life.
People spend a long time on sitting in an office chair or lounge chair. Biomedical
engineering, public healthcare service and facility design are sitting behavior analysis
becomes an important research topic recently in a variety of
domain. An average adult watches television or relaxes for two hours a day. Working
hours which are mostly eight in an average case, start standing at least two hours of
those eight hours. However, every person tries to push those two hours to four hours
for relaxation and decreases stress level. This means that at work the person should
spend as much time standing as the person sit. The prolonged sitting has been equated
with not just obesity, heart disease and diabetes but also with depression, cancer, joint
pains and muscle problems. It is so harmful that is repercussions have been equated to
that of the smoking or HIV.
Until now, people are absolutely failing to understand or even acknowledge the
need to stand more. These Diseased people have a significant impact on office
productivity. With respect to avoid the adverse effects of poor sitting behavior, the
real-time monitoring of sitting posture has received particular attention.
In previous method the sitting positions are monitored, and the mechanism
involved was moving and bending approach installed in chair and cost is more to get
the soft sitting chair. Due to this, companies face productivity loss as well as the
employees stress level gets increased. To overcome this our project comes up with the
idea of developing a system with low power consumption and low computing overhead
and additional features include a position motor to re-position the chair to the original
position.

# 1.1 ABSTRACT 
Sitting is the most common status of human beings. Some sitting postures may bring
health issues. To overcome, the harm from bad sitting postures, a local sitting posture
recognition system is desired with low power consumption and low computing
overhead. A smart sitting chair model was proposed especially who are all working for
long time in IT sector and in other fields. Our project can categorize eight different
wrong sitting postures of a person who sits and works for a long duration and alerts
them the correct posture to reduce their health issues. This project gives the solution to
avoid health related issues such as, increase in low back pain, cardiovascular disease,
obesity, and diabetes. In this project, sensor modules are used to sense the sitting
postures of the employees. When the person or employee sitting for long time or sitting
in incorrect position, he/she will be given an alert message by our system and our system
take place the person to the correct sitting posture and that should be considered by the
employee. First, the user will be given intimation to their mobile phone or laptop or
desktop via Bluetooth. If the person continues to sit for a long time in the wrong
position, the position motor which is connected using motor driver in our system will
adjust the movement of chair according to the user’s comfortableness. Thus, our
proposed system will bring a beneficial for both office and office employee.

# 1.2 Cost and time

This is the plot of cost

# 1.3 Swot analysis

Strengths:
Clear strategic vision.
Proactive and agile.

Weakness:
Large membership limits engagement capability.
Innovation challenged.
 
Opportunity:
Increased partnership.
Growth in medicare demographi.

Threats:
Stagnation of patient Growth.
Increase in compliance demands.

# 1.4 4W's and 1'H
 Who : Office.

 What : Smart Sitting chair.

 Where : Company, school, office.

 when : Need for Calculation.

 How : determine the position of the chair.

#  2 Description Requirements

# 2.1 High Level Requirements
|**ID**|**DESCRIPTION**|**STATUS**| 
|----|----|----|
|HL01| Smart sitting charge determines at office(value 30)| Implemented
|HL02| Smart sitting charge determines at office(valus 40)| Implemented
|HL03| Smart sitting charge determines at office(valus 50)| Implemented        
|HL04| Smart sitting charge determines at office(valus 50)| Implemented
|HL05| Smart sitting charge determines at office(valus 50)| Implemented 
|HL06| Smart sitting charge determines at office(valus 50)| Implemented  
     
# 2.2 Low Level Requirements
|**ID**|**DESCRIPTION**|**STATUS**|
|---|---|---|
|LL01_HL02| Determines smart sitting at office|  Implemented
|LL02_HL02| Determines smart sitting at school|  Implemented        
|LL03_HL03| Determines smart sitting at company| Implemented

# 3 ARCHITECTURE

# 3.1 SEQUENTIAL DIAGRAM

![Capture 1](https://user-images.githubusercontent.com/98867749/156880611-2443c4ac-1ca2-4a19-b108-630b7566416c.PNG)

# 3.2 BLOCK DIAGRAM

![bd](https://user-images.githubusercontent.com/98867749/156872349-262a875b-6a4f-4e8f-a454-b2f25c766cf9.PNG)

# 3.3 COMPONENT REQUIRED

# POWER SUPPLY
A power supply (sometimes known as a power supply unit or PSU) is a device
or system the supplies electrical or other types of energy to an output load or group of
loads. The term is most commonly applied to electrical energy supplies, less often to
mechanical ones, and rarely to others. The transformer steps up or steps down the input line voltage and isolates the
power supply from the power line. The Rectifier section converts the alternat
current input signal to a pulsating direct current. However, that pulsating dc is not
desirable For this reason, a filter section is used to convert pulsating dc to a purer, more
desirable form of dc voltage. The final section, the Regulator, it maintains the output
of the power supply at a constant level in spite of large changes in load current or
input line voltages.

#SCHEMATIC DIAGRAM
![SCHE](https://user-images.githubusercontent.com/98867749/156880334-996ff646-225c-4baf-955d-eabe4f919bef.PNG)

The AC voltage, typically 220V RMS, is connected to a transformer, which
steps that AC voltage down to the level of the desired DC output. A diode rectifier then
provides a full wave rectified voltage that is initially filtered by a simple capacitor filter
to produce a dc voltage. This resulting dc voltage usually has some ripple or ac voltage
variation.
A regulator circuit removes the ripples and remains the same dc value even if
the input dc voltage varies. This voltage regulation is usually obtained using one of the
popular voltage regulator IC unit.

# Transformer
A transformer is a device that transfers electrical energy from one circuit to
another through inductively coupled wires. The potential transformer will step down
the power supply voltage (0-230V) to (0-9V) level. 
If the secondary has less turns in the coil then the primary, the secondary coil's
voltage will decrease and the current or AMPS will increase or decreased depend upon
the wire gauge.
This is called a Step-Down transformer. Then the secondary of the potential
transformer will be connected to the rectifier.

# Bridge rectifier
When four diodes are connected, the circuit is called as bridge rectifier. The
input to the circuit is applied to the diagonally opposite corners of the network, and the
output is taken from the remaining two corners. This bridge rectifier always drops
1.4Volt of the input voltage because of the diode. Using 1N4007 PN junction diode,
its cut off region is 0.7Volt. So, any two diodes are always conducting, total drop
voltage is 1.4 volt.

# Filter
If a Capacitor is added in parallel with the load resistor of a Rectifier to form a
simple Filter Circuit, the output of the Rectifier will be transformed into a more stable
DC Voltage.

# IC voltage regulators
This is a regulated power supply circuit using the 78xx IC series. These
regulators can deliver current around 1A to 1.5A at a fix voltage levels.
In this circuit ,7805 regulator it converts variable dc into constant positive 5V
power supply. If the input voltage goes to below 7.3Volt means the output also varied.
So here using 230/9V step-down transformer. Transformer output is higher than the
regulator minimum level input.

# MEMS SENSOR:

The Mems sensor has 3 dimensions. The dimensions are X- Dimensions, Y-
Dimensions, Z- Dimensions. The sensor provides the three accelerations and one
multiplexed analog output. In this project, LIS302SG Mems sensor is used.
The LIS302SG is a miniaturized low-power three axis linear accelerometer.
The device has three analog acceleration output plus an embedded multiplexer that
allows to redirect the analog outputs into a single pin for operation with a single
channel A/D converter. Mems sensors monitor the Dimensions which is connected to
the digital converter.

![xyz](https://user-images.githubusercontent.com/98867749/156880517-77071c7b-4d63-4017-a50d-8c8fe8244f40.PNG)

# TEMPERATURE SENSOR
The two versions of the DHT sensor, they look a bit similar and have the same
pinout, but have different characteristics, where DHT11 is a wireless connection.
Temperature sensor senses the temperature of the person who is sitting in the
chair. The DTH sensors are made up of two parts a capacitive humidity sensor and a
thermistor.
# Arduino
The Arduino UNO is a microcontroller board based on the ATmega328. It has
14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs,
a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header, and a
reset button. It contains everything needed to support the microcontroller, simply
connect it to a computer with a USB cable or power it with a AC-to-DC adapter or
battery to get started.

# MOTOR DRIVER
Motor driver are circuits used to run a motor. In other words, they are
commonly used for motor interfacing. These drive circuits can be easily interfaced with
the motor and their selection depends upon the type of motor being used and their
ratings (current, voltage).

# UART
A universal asynchronous receiver-transmitter is a computer hardware device
for asynchronous serial communication in which the data format and transmission
speeds are configurable. It sends data bits one by one, from the least significant to the
most significant, framed by start and stop bits so that precise timing is handled by the
communication channel. The electric signaling levels are handled by a driver circuit
external to the UART.

# BLUETOOTH
Bluetooth is a short-range wireless communication technology standard.
Bluetooth uses short-wavelength UHF radio waves of a frequency range between 2.4
and 2.485 GHz. Bluetooth enables one to create a personal area network wherein
multiple devices talk to each other wirelessly via Bluetooth. Bluetooth is a replacement
for cabling in various personally carried applications in any setting and works for fixed
location applications such as smart energy functionality in the home. Bluetooth was
intended for portable equipment and its applications. Bluetooth serves well in simple
applications where two devices need to connect with a minimal configuration like a
button press, as in headsets and speakers.

# WIFI
Wi-Fi is a family of wireless network protocols, based on the IEEE
802.11 family of standards, which are commonly used for local area networking of
devices and Internet access, allowing nearby digital devices to exchange data by radio
waves. Here Wi-Fi plays a important role it gives the alert messages to the sitting
person in the chair through desktop or mobile phones. Wi-Fi is intended as a
replacement for high-speed cabling for general local area network access in work areas
or home. This category of applications is sometimes called wireless local area
networks (WLAN). Bluetooth and Wi-Fi have some similar applications: setting up
networks, printing, or transferring files. In this project, if the person or employees
sitting in the same position for a long time in the chair the notification message is send
through the phone which is connected via Bluetooth and the message alerts the person
and comes to the original sitting chair.

# LCD
LCD (Liquid Crystal Display) screen is an electronic display module and find
a wide range of applications. A 16x2 LCD display is very basic module and is very
commonly used in various devices and circuits. These modules are preferred over
seven segment sand other multi segment LEDs.
The reasons being: LCDs are economical; easily programmable; have no
limitation of displaying special & even custom characters, animations and so on. A
16x2 LCD means it can display 16 characters per line and there are 2 such lines. In
this LCD each character is displayed in 5x7 pixel matrix. This LCD has two registers,
namely, Command and Data.

# 3.4 FUTURE SCOPE
In this project, a smart sitting chair is designed for the office employees who
are all working in the IT sector for a long time. A Smart chair with low cost to avoid
some health-related issues is proposed in our project. Our project identifies eight
different incorrect sitting postures such as Upright sitting (P1), Slumped sitting (P2),
Leaning forward (P3), Leaning backward (P4), Leaning left (P5), Leaning right (P6),
Right leg crossed (P7), Left leg crossed (P8) of a person and detects who works for a
long duration and alerts them by sending message through mobile phones connected
via Bluetooth and also the person gets an alert message in their desktop/laptop screen
with the use of Wi-Fi. If the person continues to sit for a long time in the wrong
position, the position motor which is connected using motor driver in our system will
adjust the movement of chair according to the user’s comfortableness.
The eight sitting postures are:
 P1 – Slumped Sitting
 P2 – Leaning forward
 P3 – Leaning backward
 P4 – Leaning left
 P5 – Leaning right
 P6 – Right leg crossed
 P7 – Left leg crossed
 Thus the three sitting postures Right side, Leftside, Forward direction.
Indications are monitored with the help of sensor module. Based on the received
values, our system will automatically adjust the movement of the chair with the help
of position motor which is attached to the control unit. If the person sits for a long time
the temperature will be noted and if the temperature values goes beyond the threshold
value our system will give a alert with the help of LED.

# TESTPLANANDOUTPUT

##  High Level Test Plan

|**Test ID**|**Description**|**Exp input**|**Exp output**|**Actual Output**|
|----|----|----|---|---|
|H_01|	smart sitting chair sense at office|	Choice|SUCCESS|	SUCCESS
|H_02|	smart sitting chair sense at company|	Choice|	SUCCESS|	SUCCESS
|H_03|	Units consumed per hour|	Choice|	SUCCESS|	SUCCESS
|H_04|	Calculates total work loads|	Choice|	SUCCESS|	SUCCESS

## Low Level Test Plan

|**Test ID**|**HL_ID**|**Description**|**Exp input**|**Exp Output**|**Actual Output**|
|---|---|---|---|---|---|
|L_01|	H_01|smart sitting chair sense at office|	22 units|	71.5 rupees|	71.5 rupees
|L_02|	H_01|	smart sitting chair sense at office(units>30 && units <100)|	50|	235|	235
|L_03|	H_01|	smart sitting chair sense at office(units>101 && units <200)|	150|	937.5|	937.5
|L_04|	H_01|	smart sitting chair sense at office(units<200)|	230|	1,679	|1,679
|L_05|	H_02|	smart sitting chair sense at officef(units<30)|	12	|37.8  |   37.8
|L_06|	H_02|	smart sitting chair sense at office(units>30 && units <100)|	67	|294.8	|294.8
|L_07|	H_02|	smart sitting chair sense at office(units>101 && units <200)|	134|	797.3	|797.3
|L_08|	H_02|	smart sitting chair sense at office(units<200)|	344	|2,339.2| 2,339.2
