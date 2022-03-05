# 3 ARCHITECTURE

# 3.1SEQUENTIAL DIAGRAM

![Capture 1](https://user-images.githubusercontent.com/98867749/156880611-2443c4ac-1ca2-4a19-b108-630b7566416c.PNG)

# 3.2BLOCK DIAGRAM

![bd](https://user-images.githubusercontent.com/98867749/156872349-262a875b-6a4f-4e8f-a454-b2f25c766cf9.PNG)

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

# 3.3 FUTURE SCOPE
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




