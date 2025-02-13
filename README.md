# GolfBuddy
<div align="left">
	<img src="https://img.shields.io/badge/Android-3DDC84?style=flat&logo=Java&logoColor=white" />
	<img src="https://img.shields.io/badge/unity-%23000000.svg?style=flat&logo=Java&logoColor=black" />
</div>

Golf Supporting AR Application.

## Introduction
This project is a field-use "Golf Buddy" system that operates on an AR device.
It consists of two main modules: the User Client and the Server.
The User Client utilizes NReal Glasses and the sensors of a connected Android smartphone to estimate the user's coordinates and heading. Based on this data, it provides real-time weather information (wind direction and speed) and a 3D representation of the golf course, pre-extracted from GIS data.
Using this information, the system displays AR-based guidance to the user, performing the role of a caddie on the field. Additionally, it enhances user convenience by tracking the golf ball's trajectory on the green using computer vision and visualizing the ball's tail.

The Server stores the location data sent from the User Client in a web database hosted on AWS EC2. This data is then made available for visualization and maintenance through the Manager Client.
![Image](https://github.com/user-attachments/assets/06fb2b99-d28c-4568-9395-3564b7ba093c)


## Main Features
![Image](https://github.com/user-attachments/assets/8d3a2e73-5fca-4fff-b3e1-8ce68a24183e)
