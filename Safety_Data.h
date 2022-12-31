1 - ECC for Arm Realtime Core: /*ECC: Error correction code*/
/*The error that will reported to the external systems*/
all correctable error (i.e. single-bit error)
uncorrectable error (i.e. multibit error) 
L1 I-cache Tag RAM, 
L1 I-cache Data RAM, 
L1 D-cache Tag RAM, 
L1 D-cache Data RAM, 
Instruction TCM, and
Data TCM


2- ECC for DRAM
5.5.5.2 Single Channel ECC (only one supported in M3N)
400

800
C00

1400
1800
1C00
2000

2400
2800

2C00
3000
3400

5200
5600
6000
6400
6800
7200
7600
8000
8400


2 . 0000001
8 .   01000
10.   01010
3 .   00011
12.   01100
15.   01111
4 .   00100
16.   10000 
20    10100


why we need to divide the areas in 
ECC DRAM and System RAM


You can put the following SRS requirements in Master SRS section 8.9:

UART:
SW Shall provide UART interface to use for debugging purposes 

SPI:
SW Shall provide SPI interface to communicate with V3H SoC

PORT:
SW Shall have full configurations of the M3N MCU ports for Sampe A and B HW 

DIO:
SW Shall have full configurations of the M3N MCU DIOs for Sampe A and B HW 

GPT:
SW Shall provide general purpose timer to use for OS profiling and debugging purposes 

MCU:
SW Shall provide core configurations of the M3N RPU considering the target CPU resources consumption 

CAN:
SW Shall provide CAN interface for vehicle communication


n  bit   module 
2  13     MFIS
2  11    MSIOF0
2  10    MSIOF1
2  9     MSIOF2
2  8     MSIOF3
2  7     SCIF0 
2  6     SCIF1 
2  4     SCIF3 
2  3     SCIF4 
2  2     SCIF5 
3  23    CRC2  
3  22    CRC3  
3  12    SD-IF2
3  11    SD-IF3  
3  10    SCIF2   
3  7     CRC0    
3  6     CRC1    
4  31    SUCMT   
5  22    THS/TSC