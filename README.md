# IoT_system

Description of design of an IoT system based on patients using wearables to monitor their vitals. There are four parts to the project:
1. Sensors used and justification 
2. Network connectivity and transport layer technologies
3. Cloud architecture and APIs
4. Machine learning task to detect the stress levels of a patient

Supporting files are:
1. Node_red_flow: import into Node Red to see flow.
2. IoT_assignment: Python code to perform data analysis, processing and model training. Structured into:
	A. Import data
	B. Processing at the edge. Aggregate the data (sampled at 700Hz) to obtain an output every second.
	C. Create dataframe for all subjects
	D. Train and evaluate model
	E. EDA. This part was done before training and evaluating, but is at the end.
3. & 4. Tinkercad circuit code. The first one is for all sensors except accelerometer, which is in the second file.
