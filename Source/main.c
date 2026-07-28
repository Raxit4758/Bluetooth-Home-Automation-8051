#include <REGX52.H>

void UART_Init(void)
{
    TMOD = 0x20;
    TH1 = 0xFD;      // 9600 baud @11.0592MHz
    SCON = 0x50;
    TR1 = 1;
}

char UART_Read(void)
{
    while(RI == 0);
    RI = 0;
    return SBUF;
}

void main(void)
{
    char rxChar;

    P2 = 0xFF;      // Relay OFF (Active LOW)

    UART_Init();

    while(1)
    {
        rxChar = UART_Read();

        switch(rxChar)
        {
            case 'A':
                P2_0 = 0;
                break;

            case 'a':
                P2_0 = 1;
                break;

            case 'B':
                P2_1 = 0;
                break;

            case 'b':
                P2_1 = 1;
                break;
        }
    }
}
