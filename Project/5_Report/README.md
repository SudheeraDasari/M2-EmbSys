# PASSWORD BASED DOOR LOCKING SYSTEM USING ARDUINO

## ABSTRACT

In this digitally dependent world, the security is most concern for every one of us. As we all are facing the fearof robbery, people cannot keep their valuable things
safely even at their own houses, banks or in any otherplaces. They are always in fear of losing their valuablethings. Old traditional locking system is not that safe password  based door locking system.So, in this project we have work for all these problem and this project provide much more lock security ascompare to traditional lock security. We have replacedthe old traditional lock system with password. Thisproject will provide efficient security to the users at lowcost. It will be also easy to implement and give safety in any places like our houses, institutions, banks or anyother public places. If the users forgot the password,then he/she will change or reset the password, which
gives the more flexibility to the users.
 

## INTRODUCTION

As we all are very familiar with the term “Security”.Nowadays it is most important to keep our valuablethings safe. The world is also growing digitallydependent, and we can even design the doors to be moresecure. We can make these digital doors by using “Password” which is more secure than traditional lock system.In this project we have make a “Password Based DoorLocking System” using an Arduino. It will be more efficient for the peoples in the field of security. It will be implemented in any places like our Houses, Institutions,Banks and any Public Places. We can only be able open the door if we entered correct password for door and if users entered an incorrect password, then message will be display or door will not be open.  

## LITERATURE SURVEY

The main objective of this project is to relinquish safety at each common place like home, public places. During this project all the data hold on within the info. once the
proper word are going to be entered, the microcontroller can provide steering to servo engine then door can unlock. What we want is computerised innovation to develop a coordinated and every one around altered upbeat framework at a worth that is wise.


## High Level Requirements

* System shall control opening of Doors by pressing a number on Keypad.
* There shall be a LCD to display the numbers we press as '*'.
* A password shall be provided for our system.

## Low Level Requirement

* According to the values of Keypad opening of door  shall be controlled.
* Entered value on keypad shall be displayed on LCD Screen as '*'.
* If the password is wrong the LCD displays as wrong password.
* Doors  shall open when the Password is matched.

## S.W.O.T Analysis

![image](https://user-images.githubusercontent.com/87614111/155712022-4b22d919-09df-451d-b3fc-5bac8dcf3e5d.png)

# Strengths
 * Less human interactions.
 * Displays password as '*' so that no one can see except that person.
 
# Weaknesses
* Some times Code hacking may possible if someone could guess our password.
* This system cannot run if there is electric problems.

# Oppurnities
 * The scope of this system is more at  home, public places etc.

# Threats
* High chances of pin hacking.
* Forgotting password can also causes risk to the users.

## 4W's And 1H

# Who
The password control door locking  are used in homes,public places.

# What
The password control door lockingr is used to provide lock for door by using password.

# When
The password control door locking is used when homes and public places needslocks for the door.

# Where
These are used in  homes and public placess.

# How
 The circuit uses a Arduino with lcd display and servo motor as a door locking.
 
 # Applications
 * This system can be used in Door Control of Houses.
 * This system can be used in Door Control of Industries.
 * This system can be used in Door Control of Stadiums etc...
 


 ## BLOCK DIAGRAM

![servo (3)](https://user-images.githubusercontent.com/87614111/157225104-edf74da2-f939-4640-83fc-529b91dbf432.jpg)



## Sensor
#  4x4 Matrix Keypad
  The 4x4 Matrix Keypad interfaced is to take the input from the person. We can enter the preset password to test the validity of the password. If the password is valid then,     the door lock will be unlocked. If invalid, the door lock will continue to be locked. The 4x4 Matrix Keypad includes 4 rows and 4 columns. There is a transfer that connects     every row and column. In our project We will use only the numeric between 0-9 keys along with * to change the password.
  
   ![keypad](https://user-images.githubusercontent.com/87614111/157076734-c5e28aa1-9e9c-4b62-aaea-bbbedd9f094a.JPG)

# ACTUATOR

## LCD Display:

    
    Displays each and every value we enter in our keypad.
    
   
   
   
   
   ![lcd](https://user-images.githubusercontent.com/87614111/157076750-5294ecba-2065-455d-9bda-bd6d1d4ce533.JPG) 



## Servo Motor:
 
   Helps in opening and closing our doors.
   
   ![servo](https://user-images.githubusercontent.com/87614111/157076797-eec46659-978d-42c3-b374-0491f493c952.JPG)

## Arduino Uno

This microcontroller depends on the ATmega328P. There are all out of 20 pins (0-19) out of which 6 are simple information sources, 14 are computerized input yield pins(6 pins give PWM voltage) which can like be utilized as broadly useful pins, a ceramic resonator of recurrence 16 MHz, a USB association, a force jack and a reset button. It has a working voltage of 5V. It contains all that expected to help a microcontroller.


![arduinouno](https://user-images.githubusercontent.com/87614111/157077002-6e63af0e-7fee-4f58-b9cc-4fd88879841a.JPG)



## Flow Chart

![FLOWCHART](https://user-images.githubusercontent.com/87614111/157232756-aded875f-bb2a-4bd5-b950-e0790f147c66.jpg)


## TestPlan


  |  Test ID	   |  Description	    | Expected I/P	  |   Expected O/P      |	 Actual O/P	   |  Type of Test  |
  |----------|------------------|-----------------|---------------------|----------------|----------------|
  |          |                  |                 |                     |                |                |
  |  HP01    |controlling of doors by pressing number on keypad   |  pressing password  |   **** |      Pass	     |  Requirement   |
  | HP02 | Lcd displays    |	  password |  matches	   |  Pass	       |  Requirement    |
  | HP03 | Incorect password     |	 pressing wrong password  |  showing incorect password	   |  Pass	       |  Requirement    |
  | HP04 | Servo motor using as door     |	  opening the door |  Opens doors	   |  Pass	       |  Requirement    |
  | HP05 | closing door     |	after  specific seconds   |  closes door	   |  Pass	       |  Requirement    |
  
  
  
## ImagesAndOutput

## Complete connection of circuit

![simulation connection](https://user-images.githubusercontent.com/87614111/157002492-d1710885-ebf1-4676-8822-ef5d2e24c61e.JPG)



## Running as simulation
# Password for opening door

![outputpic](https://user-images.githubusercontent.com/87614111/157003053-45152fb9-dc3a-4d9f-8e0b-bb3d02ff65cc.JPG)

## Relocking of door after 5 seconds

![relocking](https://user-images.githubusercontent.com/87614111/157023900-3e30cf06-8048-424f-be0a-2cecddc5ff61.JPG)



##  CONCLUSION
This project provides enough security as long as the password is not shared. This secret key based entryway locking system can end up being a less expensive then the costly entryway locking system which utilizes retina check. The outcomes of the model were as per our expectation. Hence, everyone can afford to shop for such locking system at lowest price to keep his valuable things safe.


  
## References
* [1]Working principle of an Arduino ,Abuja, Electronics and Computation (ICECCO):11th international conference IEEE
* https://www.irjet.net/archives/V8/i8/IRJET-V8I8111.pdf and with the help of youtube videos


  
