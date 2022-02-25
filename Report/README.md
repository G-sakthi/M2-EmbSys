# REQUIREMENTS

# INTRODUCTION
 
The aim of this topic is to implement a “PACEMAKER”. An artificial pacemaker is real time embedded system with hermetically sealed titanium encapsulation that delivers a synchronized rhythmic electric stimulus to the heart muscle in order to maintain an effective cardiac rhythm for long periods of time. Pacemaker system consists of device and leads. 

# RESEARCH

Pacemaker will serve as a common example to illustrate the different modeling techniques. This case study is part of a great challenge, whose goal is to stimulate research around formal methods and associated modeling techniques, through a series of challenges to the academic and industrial communities, And provides a concrete example of a well-known embedded system, covering a wide range of concerns regarding procedural aspects, interactions between the operator/patient/device and its behavior. This topic chooses the pacemaker for the case study, an electronic system that has the role of stimulating the heart of a patient suffering from bradycardia. This topic details the pacemaker’s structure and functioning through presenting the general architecture of the patients and the requirements that it must meet.

# SWOT ANALYSIS

Strength:
Strong Brand Image

Weakness:
Over Dependency On The Few Market

Opportunity:
Increasing Bradycardia Disease

Threat:
Cost Containment Pressure

# DESIGN
![Capture](https://user-images.githubusercontent.com/98867749/154887560-2362e103-2f85-4675-aaea-c46c6f35ed9a.PNG)

1) Timing circuit: 
The timing circuit determines the basic timing rate of the pulse generator. It consists of an RC network, reference voltage source, a comparator etc.

2) Pulse width circuit: 
The stimulating pulse duration is determined by the pulse width circuit. It is triggered by the output from the timing circuit. The pulse width circuit is also an RC circuit as the timing circuit. The output of the pulse width circuit is fed into the pace limiting circuit. 

3) Pace limiting circuit: 
The function of pace limiting circuit is to limit the pacing rate. The maximum pacing rate is usually selected as 120 pulses per minute. The pace limit circuit limit the pacing rate by disabling the comparator for a preset interval of time.

4) Heart stimulator circuit: 
This is also called output circuit since it provides the proper input pulse to stimulate the heart and hence called heart stimulator circuit.

5) Refractory circuit: 
This circuit provides a period of time following an output pulse or sensed R-wave. During this time the amplifier will not respond to outside signals.

6) R-wave sensing circuit: 
The function of R-wave sensing circuit is to detect or sense a spontaneous R-wave and to reset the oscillator when the pulse is not needed.

 7) Reversion circuit (Return circuit): 
It allows the amplifier to detect a spontaneous R-wave. In the absence of R-wave, this circuit again allows the oscillator to generate pulses at its preset rate. This circuit is called reversion or return circuit since it allows to return the oscillator to its active state.

8) Voltage monitor and controller: 
This circuit continuously monitors the battery voltage. As the pacing rate is depending on the efficiency of battery, it has to be monitored regularly. If the battery voltage is decreased, it triggers the energy compensation and pulse duration controller circuit.

9) Energy compensation/ Pulse duration controller circuit: 
If the battery voltage is decreased the energy compensation circuit increases the pulse duration so that the pulses delivered to the patient are not affected by the battery charge loss.

10) Rate slow down circuit: 
It is a special circuit which slows down the heart rate during certain conditions such as cell depletion. So the cell depletion is monitored by the voltage controller circuit, and whenever cell depletion occurs, the voltage monitor/controller circuit activates the rate slow down circuit. This circuit slows down the rate by limiting the current to the basic timing network.
