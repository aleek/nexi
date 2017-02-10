This top module creates very simple, minimalistic SoC, ideal for testing the CPU itself.
The Uart module used in this target is uart-sim - it uses $write task to print charaters
to linux console.

                    +--------+
                    |        |
                    |        |
                    | ram    |
                    |        |
                    |        |
                    |        |
                    +--------+
                        ||
                        ||
+--------+          +--------+
|        |          |        |
|        |          |        |
|        +----------+arbiter |
| m68k   +----------+1->2    |
|        |          |        |
|        |          |        |
+--------+          +--------+
                        ||
                        ||
                    +--------+
                    |        |
                    |        |
                    | uart   |
                    | sim    |
                    |        |
                    |        |
                    +--------+

Memory map:
0x00000000 - 0x00FFFFFF - RAM
0x01000000 - 0x0100000F - uart
