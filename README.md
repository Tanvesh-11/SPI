# SPI
This repo includes basic communication protocol between two or more MCUs (Arduino in our case)

AS U already know basics of transfer protocols (if not try basic I2C communication which is also included in our Repositories). I2c is basic communication but SPI is a bit faster and full duplex communication and it also has privilege of multi-master (Bit of advice master I2C first). 

Again, for saving trouble of different data type transfer we have included SPI_Anything.h header to ensure transmission of any data type. The Master code includes struct (collection of data types) which includes byte, long and int and transferring this data types to slave. SPI transfer protocol has different modes and the below code showcases MISO (Master In slave out mode).
