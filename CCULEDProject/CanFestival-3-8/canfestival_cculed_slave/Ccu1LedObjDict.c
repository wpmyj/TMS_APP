
/* File generated by gen_cfile.py. Should not be modified. */

#include "Ccu1LedObjDict.h"

/**************************************************************************/
/* Declaration of mapped variables                                        */
/**************************************************************************/
UNS8 HeartMap_CAN1_CANBC = 0x0;		/* Mapped at index 0x2000, subindex 0x01 */
UNS8 HeartMap_CAN2_CANBC = 0x0;		/* Mapped at index 0x2000, subindex 0x02 */
UNS8 HeartMap_CAN1_CCU1 = 0x0;		/* Mapped at index 0x2000, subindex 0x03 */
UNS8 HeartMap_CAN2_CCU1 = 0x0;		/* Mapped at index 0x2000, subindex 0x04 */
UNS8 HeartMap_CAN1_CCU2 = 0x0;		/* Mapped at index 0x2000, subindex 0x05 */
UNS8 HeartMap_CAN2_CCU2 = 0x0;		/* Mapped at index 0x2000, subindex 0x06 */
UNS8 HeartMap_CAN1_DDU1 = 0x0;		/* Mapped at index 0x2000, subindex 0x07 */
UNS8 HeartMap_CAN2_DDU1 = 0x0;		/* Mapped at index 0x2000, subindex 0x08 */
UNS8 HeartMap_CAN1_DDU2 = 0x0;		/* Mapped at index 0x2000, subindex 0x09 */
UNS8 HeartMap_CAN2_DDU2 = 0x0;		/* Mapped at index 0x2000, subindex 0x0A */
UNS8 HeartMap_CAN1_EMR1 = 0x0;		/* Mapped at index 0x2000, subindex 0x0B */
UNS8 HeartMap_CAN2_EMR1 = 0x0;		/* Mapped at index 0x2000, subindex 0x0C */
UNS8 HeartMap_CAN1_EMR2 = 0x0;		/* Mapped at index 0x2000, subindex 0x0D */
UNS8 HeartMap_CAN2_EMR2 = 0x0;		/* Mapped at index 0x2000, subindex 0x0E */
UNS8 HeartMap_CAN1_MTD1 = 0x0;		/* Mapped at index 0x2000, subindex 0x0F */
UNS8 HeartMap_CAN2_MTD1 = 0x0;		/* Mapped at index 0x2000, subindex 0x10 */
UNS8 HeartMap_CAN1_MTD2 = 0x0;		/* Mapped at index 0x2000, subindex 0x11 */
UNS8 HeartMap_CAN2_MTD2 = 0x0;		/* Mapped at index 0x2000, subindex 0x12 */
UNS8 HeartMap_CAN1_MTD3 = 0x0;		/* Mapped at index 0x2000, subindex 0x13 */
UNS8 HeartMap_CAN2_MTD3 = 0x0;		/* Mapped at index 0x2000, subindex 0x14 */
UNS8 HeartMap_CAN1_MTD4 = 0x0;		/* Mapped at index 0x2000, subindex 0x15 */
UNS8 HeartMap_CAN2_MTD4 = 0x0;		/* Mapped at index 0x2000, subindex 0x16 */
UNS8 HeartMap_CAN1_MTD5 = 0x0;		/* Mapped at index 0x2000, subindex 0x17 */
UNS8 HeartMap_CAN2_MTD5 = 0x0;		/* Mapped at index 0x2000, subindex 0x18 */
UNS8 HeartMap_CAN1_MTD6 = 0x0;		/* Mapped at index 0x2000, subindex 0x19 */
UNS8 HeartMap_CAN2_MTD6 = 0x0;		/* Mapped at index 0x2000, subindex 0x1A */
UNS8 HeartMap_Undefined1 = 0x0;		/* Mapped at index 0x2000, subindex 0x1B */
UNS8 HeartMap_Undefined2 = 0x0;		/* Mapped at index 0x2000, subindex 0x1C */
UNS8 HeartMap_Undefined3 = 0x0;		/* Mapped at index 0x2000, subindex 0x1D */
UNS8 HeartMap_Undefined4 = 0x0;		/* Mapped at index 0x2000, subindex 0x1E */
UNS8 HeartMap_Undefined5 = 0x0;		/* Mapped at index 0x2000, subindex 0x1F */
UNS8 HeartMap_Undefined6 = 0x0;		/* Mapped at index 0x2000, subindex 0x20 */
UNS8 IAP_M_IAP_SEG[256] = "\x01\x00";		/* Mapped at index 0x5FFF, subindex 0x01 */
UNS64 IAP_M_IAP_CMD = 0x0;		/* Mapped at index 0x5FFF, subindex 0x02 */
UNS64 IAP_M_IAP_CMD_R = 0x0;		/* Mapped at index 0x5FFF, subindex 0x03 */

/**************************************************************************/
/* Declaration of value range types                                       */
/**************************************************************************/

#define valueRange_EMC 0x9F /* Type for index 0x1003 subindex 0x00 (only set of value 0 is possible) */
UNS32 Ccu1LedObjDict_valueRangeTest (UNS8 typeValue, void * value)
{
  switch (typeValue) {
    case valueRange_EMC:
      if (*(UNS8*)value != (UNS8)0) return OD_VALUE_RANGE_EXCEEDED;
      break;
  }
  return 0;
}

/**************************************************************************/
/* The node id                                                            */
/**************************************************************************/
/* node_id default value.*/
UNS8 Ccu1LedObjDict_bDeviceNodeId = 0x00;

/**************************************************************************/
/* Array of message processing information */

const UNS8 Ccu1LedObjDict_iam_a_slave = 0;

TIMER_HANDLE Ccu1LedObjDict_heartBeatTimers[1] = {TIMER_NONE};

/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

                               OBJECT DICTIONARY

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

/* index 0x1000 :   Device Type. */
                    UNS32 Ccu1LedObjDict_obj1000 = 0x0;	/* 0 */
                    subindex Ccu1LedObjDict_Index1000[] = 
                     {
                       { RO, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1000 }
                     };

/* index 0x1001 :   Error Register. */
                    UNS8 Ccu1LedObjDict_obj1001 = 0x0;	/* 0 */
                    subindex Ccu1LedObjDict_Index1001[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_obj1001 }
                     };

/* index 0x1003 :   Pre-defined Error Field */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj1003 = 0; /* number of subindex - 1*/
                    UNS32 Ccu1LedObjDict_obj1003[] = 
                    {
                      0x0	/* 0 */
                    };
                    ODCallback_t Ccu1LedObjDict_Index1003_callbacks[] = 
                     {
                       NULL,
                       NULL,
                     };
                    subindex Ccu1LedObjDict_Index1003[] = 
                     {
                       { RW, valueRange_EMC, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj1003 },
                       { RO, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1003[0] }
                     };

/* index 0x1005 :   SYNC COB ID */
                    UNS32 Ccu1LedObjDict_obj1005 = 0x0;   /* 0 */

/* index 0x1006 :   Communication / Cycle Period */
                    UNS32 Ccu1LedObjDict_obj1006 = 0x0;   /* 0 */

/* index 0x100C :   Guard Time */ 
                    UNS16 Ccu1LedObjDict_obj100C = 0x0;   /* 0 */

/* index 0x100D :   Life Time Factor */ 
                    UNS8 Ccu1LedObjDict_obj100D = 0x0;   /* 0 */

/* index 0x1014 :   Emergency COB ID. */
                    UNS32 Ccu1LedObjDict_obj1014 = 0x80;	/* 128 */
                    subindex Ccu1LedObjDict_Index1014[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1014 }
                     };

/* index 0x1016 :   Consumer Heartbeat Time. */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj1016 = 1; /* number of subindex - 1*/
                    UNS32 Ccu1LedObjDict_obj1016[] = 
                    {
                      0x109C4	/* 68036 */
                    };
                    subindex Ccu1LedObjDict_Index1016[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj1016 },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1016[0] }
                     };

/* index 0x1017 :   Producer Heartbeat Time. */
                    UNS16 Ccu1LedObjDict_obj1017 = 0x190;	/* 400 */
                    ODCallback_t Ccu1LedObjDict_Index1017_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex Ccu1LedObjDict_Index1017[] = 
                     {
                       { RW, uint16, sizeof (UNS16), (void*)&Ccu1LedObjDict_obj1017 }
                     };

/* index 0x1018 :   Identity. */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj1018 = 4; /* number of subindex - 1*/
                    UNS32 Ccu1LedObjDict_obj1018_Vendor_ID = 0x0;	/* 0 */
                    UNS32 Ccu1LedObjDict_obj1018_Product_Code = 0x0;	/* 0 */
                    UNS32 Ccu1LedObjDict_obj1018_Revision_Number = 0x0;	/* 0 */
                    UNS32 Ccu1LedObjDict_obj1018_Serial_Number = 0x0;	/* 0 */
                    subindex Ccu1LedObjDict_Index1018[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj1018 },
                       { RO, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1018_Vendor_ID },
                       { RO, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1018_Product_Code },
                       { RO, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1018_Revision_Number },
                       { RO, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1018_Serial_Number }
                     };

/* index 0x1200 :   Server SDO Parameter. */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj1200 = 2; /* number of subindex - 1*/
                    UNS32 Ccu1LedObjDict_obj1200_COB_ID_Client_to_Server_Receive_SDO = 0x600;	/* 1536 */
                    UNS32 Ccu1LedObjDict_obj1200_COB_ID_Server_to_Client_Transmit_SDO = 0x580;	/* 1408 */
                    subindex Ccu1LedObjDict_Index1200[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj1200 },
                       { RO, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1200_COB_ID_Client_to_Server_Receive_SDO },
                       { RO, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1200_COB_ID_Server_to_Client_Transmit_SDO }
                     };

/* index 0x1280 :   Client SDO 1 Parameter. */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj1280 = 3; /* number of subindex - 1*/
                    UNS32 Ccu1LedObjDict_obj1280_COB_ID_Client_to_Server_Transmit_SDO = 0x0;	/* 0 */
                    UNS32 Ccu1LedObjDict_obj1280_COB_ID_Server_to_Client_Receive_SDO = 0x0;	/* 0 */
                    UNS8 Ccu1LedObjDict_obj1280_Node_ID_of_the_SDO_Server = 0x0;	/* 0 */
                    subindex Ccu1LedObjDict_Index1280[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj1280 },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1280_COB_ID_Client_to_Server_Transmit_SDO },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1280_COB_ID_Server_to_Client_Receive_SDO },
                       { RW, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_obj1280_Node_ID_of_the_SDO_Server }
                     };

/* index 0x1400 :   Receive PDO 1 Parameter. */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj1400 = 6; /* number of subindex - 1*/
                    UNS32 Ccu1LedObjDict_obj1400_COB_ID_used_by_PDO = 0x181;	/* 385 */
                    UNS8 Ccu1LedObjDict_obj1400_Transmission_Type = 0xFE;	/* 254 */
                    UNS16 Ccu1LedObjDict_obj1400_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 Ccu1LedObjDict_obj1400_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 Ccu1LedObjDict_obj1400_Event_Timer = 0x0;	/* 0 */
                    UNS8 Ccu1LedObjDict_obj1400_SYNC_start_value = 0x0;	/* 0 */
                    subindex Ccu1LedObjDict_Index1400[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj1400 },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1400_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_obj1400_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&Ccu1LedObjDict_obj1400_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_obj1400_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&Ccu1LedObjDict_obj1400_Event_Timer },
                       { RW, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_obj1400_SYNC_start_value }
                     };

/* index 0x1600 :   Receive PDO 1 Mapping. */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj1600 = 26; /* number of subindex - 1*/
                    UNS32 Ccu1LedObjDict_obj1600[] = 
                    {
                      0x20000101,	/* 536871169 */
                      0x20000201,	/* 536871425 */
                      0x20000301,	/* 536871681 */
                      0x20000401,	/* 536871937 */
                      0x20000501,	/* 536872193 */
                      0x20000601,	/* 536872449 */
                      0x20000701,	/* 536872705 */
                      0x20000801,	/* 536872961 */
                      0x20000901,	/* 536873217 */
                      0x20000A01,	/* 536873473 */
                      0x20000B01,	/* 536873729 */
                      0x20000C01,	/* 536873985 */
                      0x20000D01,	/* 536874241 */
                      0x20000E01,	/* 536874497 */
                      0x20000F01,	/* 536874753 */
                      0x20001001,	/* 536875009 */
                      0x20001101,	/* 536875265 */
                      0x20001201,	/* 536875521 */
                      0x20001301,	/* 536875777 */
                      0x20001401,	/* 536876033 */
                      0x20001501,	/* 536876289 */
                      0x20001601,	/* 536876545 */
                      0x20001701,	/* 536876801 */
                      0x20001801,	/* 536877057 */
                      0x20001901,	/* 536877313 */
                      0x20001A01	/* 536877569 */
                    };
                    subindex Ccu1LedObjDict_Index1600[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj1600 },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[7] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[8] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[9] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[10] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[11] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[12] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[13] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[14] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[15] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[16] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[17] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[18] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[19] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[20] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[21] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[22] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[23] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[24] },
                       { RW, uint32, sizeof (UNS32), (void*)&Ccu1LedObjDict_obj1600[25] }
                     };

/* index 0x1F50 :   Download Program Data. */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj1F50 = 1; /* number of subindex - 1*/
                    UNS8* Ccu1LedObjDict_obj1F50[] = 
                    {
                      ""
                    };
                    subindex Ccu1LedObjDict_Index1F50[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj1F50 },
                       { RW, domain, 0, (void*)&Ccu1LedObjDict_obj1F50[0] }
                     };

/* index 0x2000 :   Mapped variable HeartMap */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj2000 = 32; /* number of subindex - 1*/
                    ODCallback_t HeartMap_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex Ccu1LedObjDict_Index2000[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj2000 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_CANBC },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_CANBC },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_CCU1 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_CCU1 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_CCU2 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_CCU2 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_DDU1 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_DDU1 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_DDU2 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_DDU2 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_EMR1 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_EMR1 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_EMR2 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_EMR2 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_MTD1 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_MTD1 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_MTD2 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_MTD2 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_MTD3 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_MTD3 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_MTD4 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_MTD4 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_MTD5 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_MTD5 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN1_MTD6 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_CAN2_MTD6 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_Undefined1 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_Undefined2 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_Undefined3 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_Undefined4 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_Undefined5 },
                       { RW, boolean, sizeof (UNS8), (void*)&HeartMap_Undefined6 }
                     };

/* index 0x5FFF :   Mapped variable IAP_M */
                    UNS8 Ccu1LedObjDict_highestSubIndex_obj5FFF = 3; /* number of subindex - 1*/
                    ODCallback_t IAP_M_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex Ccu1LedObjDict_Index5FFF[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&Ccu1LedObjDict_highestSubIndex_obj5FFF },
                       { RW, domain, 256, (void*)&IAP_M_IAP_SEG },
                       { RW, uint64, sizeof (UNS64), (void*)&IAP_M_IAP_CMD },
                       { RW, uint64, sizeof (UNS64), (void*)&IAP_M_IAP_CMD_R }
                     };

/**************************************************************************/
/* Declaration of pointed variables                                       */
/**************************************************************************/

const indextable Ccu1LedObjDict_objdict[] = 
{
  { (subindex*)Ccu1LedObjDict_Index1000,sizeof(Ccu1LedObjDict_Index1000)/sizeof(Ccu1LedObjDict_Index1000[0]), 0x1000},
  { (subindex*)Ccu1LedObjDict_Index1001,sizeof(Ccu1LedObjDict_Index1001)/sizeof(Ccu1LedObjDict_Index1001[0]), 0x1001},
  { (subindex*)Ccu1LedObjDict_Index1014,sizeof(Ccu1LedObjDict_Index1014)/sizeof(Ccu1LedObjDict_Index1014[0]), 0x1014},
  { (subindex*)Ccu1LedObjDict_Index1016,sizeof(Ccu1LedObjDict_Index1016)/sizeof(Ccu1LedObjDict_Index1016[0]), 0x1016},
  { (subindex*)Ccu1LedObjDict_Index1017,sizeof(Ccu1LedObjDict_Index1017)/sizeof(Ccu1LedObjDict_Index1017[0]), 0x1017},
  { (subindex*)Ccu1LedObjDict_Index1018,sizeof(Ccu1LedObjDict_Index1018)/sizeof(Ccu1LedObjDict_Index1018[0]), 0x1018},
  { (subindex*)Ccu1LedObjDict_Index1200,sizeof(Ccu1LedObjDict_Index1200)/sizeof(Ccu1LedObjDict_Index1200[0]), 0x1200},
  { (subindex*)Ccu1LedObjDict_Index1280,sizeof(Ccu1LedObjDict_Index1280)/sizeof(Ccu1LedObjDict_Index1280[0]), 0x1280},
  { (subindex*)Ccu1LedObjDict_Index1400,sizeof(Ccu1LedObjDict_Index1400)/sizeof(Ccu1LedObjDict_Index1400[0]), 0x1400},
  { (subindex*)Ccu1LedObjDict_Index1600,sizeof(Ccu1LedObjDict_Index1600)/sizeof(Ccu1LedObjDict_Index1600[0]), 0x1600},
  { (subindex*)Ccu1LedObjDict_Index1F50,sizeof(Ccu1LedObjDict_Index1F50)/sizeof(Ccu1LedObjDict_Index1F50[0]), 0x1F50},
  { (subindex*)Ccu1LedObjDict_Index2000,sizeof(Ccu1LedObjDict_Index2000)/sizeof(Ccu1LedObjDict_Index2000[0]), 0x2000},
  { (subindex*)Ccu1LedObjDict_Index5FFF,sizeof(Ccu1LedObjDict_Index5FFF)/sizeof(Ccu1LedObjDict_Index5FFF[0]), 0x5FFF},
};

const indextable * Ccu1LedObjDict_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks)
{
	int i;
	*callbacks = NULL;
	switch(wIndex){
		case 0x1000: i = 0;break;
		case 0x1001: i = 1;break;
		case 0x1014: i = 2;break;
		case 0x1016: i = 3;break;
		case 0x1017: i = 4;*callbacks = Ccu1LedObjDict_Index1017_callbacks; break;
		case 0x1018: i = 5;break;
		case 0x1200: i = 6;break;
		case 0x1280: i = 7;break;
		case 0x1400: i = 8;break;
		case 0x1600: i = 9;break;
		case 0x1F50: i = 10;break;
		case 0x2000: i = 11;*callbacks = HeartMap_callbacks; break;
		case 0x5FFF: i = 12;*callbacks = IAP_M_callbacks; break;
		default:
			*errorCode = OD_NO_SUCH_OBJECT;
			return NULL;
	}
	*errorCode = OD_SUCCESSFUL;
	return &Ccu1LedObjDict_objdict[i];
}

/* 
 * To count at which received SYNC a PDO must be sent.
 * Even if no pdoTransmit are defined, at least one entry is computed
 * for compilations issues.
 */
s_PDO_status Ccu1LedObjDict_PDO_status[1] = {s_PDO_status_Initializer};

const quick_index Ccu1LedObjDict_firstIndex = {
  6, /* SDO_SVR */
  7, /* SDO_CLT */
  8, /* PDO_RCV */
  9, /* PDO_RCV_MAP */
  0, /* PDO_TRS */
  0 /* PDO_TRS_MAP */
};

const quick_index Ccu1LedObjDict_lastIndex = {
  6, /* SDO_SVR */
  7, /* SDO_CLT */
  8, /* PDO_RCV */
  9, /* PDO_RCV_MAP */
  0, /* PDO_TRS */
  0 /* PDO_TRS_MAP */
};

const UNS16 Ccu1LedObjDict_ObjdictSize = sizeof(Ccu1LedObjDict_objdict)/sizeof(Ccu1LedObjDict_objdict[0]); 

CO_Data Ccu1LedObjDict_Data = CANOPEN_NODE_DATA_INITIALIZER(Ccu1LedObjDict);
