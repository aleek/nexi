from enum import Enum

class M68kMicrocodeInstruction:
        ea_reg = 0
        ea_mod = 0
        ea_type = 0
        op1 = 0
        op2 = 0


EA_REG(
    IDLE                   = 0
    IR_2_0                 = 1
    IR_11_9                = 2
    MOVEM_REG_2_0          = 3
    3B111                  = 4
    3B000                  = 5
    )

EA_MOD(
    IDLE                   = 0
    IR_5_3                 = 1
    MOVEM_MOD_5_3          = 2
    IR_8_6                 = 3
    PREDEC                 = 4    // predecrement:    -(An)
    3b111                  = 5    // extended mod
    DN_PREDEC              = 6    // MOD.DN_PREDEC: Dn 3'b000 (ir[3] == 1'b0), -(An) 3'b100 (ir[3] == 1'b1)
    DN_AN_EXG              = 7    // MOD.DN_AN_EXG: Dn 3'b000 (ir[7:3] == 5'b01000 or 5'b10001), An 3'b001 (ir[7:3] == 5'b01001)
    POSTINC                = 8    // MOD.POSTINC: postincrement (An)+ 3'b011
    AN                     = 9    // MOD.AN: An 3'b001, saved result is sign-extended
    DN                     = 10   // MOD.DN: Dn 3'b000
    INDIRECTOFFSET         = 11   // MOD.INDIRECTOFFSET: (d16, An) 3'b101
    )

EA_TYPE(
    IDLE                   = 0
    ALL                    = 1    // TYPE.ALL: all
    CONTROL_POSTINC        = 2    // TYPE.CONTROL_POSTINC: control or postincrement
    CONTROLALTER_PREDEC    = 3    // TYPE.CONTROLALTER_PREDEC: control alter or predecrement
    CONTROL                = 4    // TYPE.CONTROL: control
    DATAALTER              = 5    // TYPE.DATAALTER: data alter
    DN_AN                  = 6    // TYPE.DN_AN: Dn, An
    MEMORYALTER            = 7    // TYPE.MEMORYALTER: memory alter
    DATA                   = 8    // TYPE.DATA: data
)

OP1(
    IDLE                   = 0
    FROM_OP2               = 1    // move from operand2
    FROM_ADDRESS           = 2    // move from address
    FROM_DATA              = 3    // move from data, sign extend
    FROM_IMMEDIATE         = 4    // move immediate, sign extend
    FROM_RESULT            = 5    // move from result
    MOVEQ                  = 6    // move moveq: { 24{ir[7]}, ir[7:0] }
    FROM_PC                = 7    // move from PC
    LOAD_ZEROS             = 8    // load zeros:  32'b0
    LOAD_ONES              = 9    // load ones:   32'hFFFFFFFF
    FROM_SR                = 10   // move from SR
    FROM_USP               = 11   // move from USP
    FROM_AN                = 12   // move from An, 32 bits
    FROM_DN                = 13   // move from Dn, sign extend
    FROM_IR                = 14   // move from ir[15:0]
    FROM_FAULT_ADDRESS     = 15   // move from fault_address
)

OP2(
    IDLE                   = 0
    FROM_OP1               = 1    // move from operand1
    LOAD_1                 = 2    // load: 32'b1
    LOAD_COUNT             = 3    // load count
    ADDQ_SUBQ              = 4    // load addq_subq
    MOVE_OFFSET            = 5    // move offset
    MOVE_ADDRESS_BUS_INFO  = 6    // move address_bus_info
    DECR_BY_1              = 7    // decrement by 1
)

ADDRESS(
    IDLE                   = 0
    INCR_BY_SIZE           = 1    // increment by size
    DECR_BY_SIZE           = 2    // decrement by size
    INCR_BY_2              = 3    // increment by 2
    FROM_AN_OUTPUT         = 4    // move from An output
    FROM_BASE_INDEX_OFFSET = 5    // move from base+index+offset
    FROM_IMM_16            = 6    // move from {16{ir1[15]}, ir1[15:0]}
    FROM_IMM_32            = 7    // move from {ir1[15:0], ir2[15:0]}
    FROM_PC_INDEX_OFFSET   = 8    // move from pc+index+offset
    FROM_TRAP              = 9    // move trap {22'b0, trap[7:0], 2'b0}
)

SIZE(
    IDLE                   = 0
    BYTE                   = 1    // load byte: 3'b001
    WORD                   = 2    // load word: 3'b010
    LONG                   = 3    // load long: 3'b100
    1                      = 4    // SIZE.1: word ( ir[7:6] == 2'b00 ), long ( ir[7:6] == 2'b01 )
    1_PLUS                 = 5    // SIZE.1+: word ( ir[7:6] == 2'b10 ), long ( ir[7:6] == 2'b11 )
    2                      = 6    // SIZE.2: word ( ir[6] == 1'b0 ), long ( ir[6] == 1'b1 )
    3                      = 7    // SIZE.3: byte ( ir[7:6] == 2'b00 ), word ( ir[7:6] == 2'b01 ), long ( ir[7:6] == 2'b10 )
    4                      = 8    // SIZE.4: byte ( ir[13:12] == 2'b01 ), word( ir[13:12] == 2'b11 ), long ( ir[13:12] == 2'b10 )
    5                      = 9    // SIZE.5: word ( ir[8] == 1'b0 ), long ( ir[8] == 1'b1 )
    6                      = 10   // SIZE.6: byte ( ir[5:3] != 3'b000 ), long ( ir[5:3] == 3'b000 )
)

MOVEM_MODREG(
    IDLE                   = 0
    LOAD_0                 = 1    // load 6'b0
    LOAD_6b001111          = 2    // load 6'b001111
    INCR_BY_1              = 3    // increment by 1
    DECR_BY_1              = 4    // decrement by 1
)

MOVEM_LOOP(
    IDLE                   = 0
    LOAD_0                 = 1    // load 4'b0
    INCR_BY_1              = 2    // increment by 1
)
MOVEM_REG(
    IDLE                   = 0
    FROM_OP1               = 1    // load from operand1[15:0]
    SHIFT_RIGHT            = 2    // shift right
)

IR(
    IDLE                   = 0
    LOAD_WHEN_PREFETCH_VALID = 1    // load from prefetch_ir[79:64]
)

PC(
    IDLE                   = 0
    FROM_RESULT            = 1    // move from result
    INCR_BY_2              = 2    // increment by 2
    INCR_BY_4              = 3    // increment by 4
    INCR_BY_SIZE           = 4    // increment by size: 2 (size == 3'b001 || size == 3'b010), 4 (size == 3'b100)
    FROM_PREFETCH_IR       = 5    // move from prefetch_ir
    INCR_BY_2_IN_MAIN_LOOP = 6    // increment by 2, in main loop, when valid prefetch and valid instruction
)

TRAP(
    IDLE                   = 0
    ILLEGAL_INSTR          = 1    // move illegal_instr:  8'd4
    DIV_BY_ZERO            = 2    // move divide_by_zero: 8'd5
    CHK                    = 3    // move chk:            8'd6
    TRAPV                  = 4    // move trapv:          8'd7
    PRIVIL_VIOLAT          = 5    // move priv_viol:      8'd8
    TRACE                  = 6    // move trace:          8'd9
    TRAP                   = 7    // move trap:           { 3'b0, 1'b1, ir[3:0] }
    FROM_DECODER           = 8    // move from decoder_trap
    FROM_INTERRUPT         = 9    // move from interrupt_trap
)

OFFSET(
    IDLE                   = 0
    IMM_8                  = 1    // { 24{ir1[7]}, ir1[7:0] }
    IMM_16                 = 2    // { 16{ir1[15]}, ir1[15:0] }
)

INDEX(
    IDLE                   = 0
    0                      = 1    // 32'b0
    LOAD_EXTENDED          = 2    // load from extended instruction word
)

STOP_FLAG(
    IDLE                   = 0
    SET                    = 1    // set, continue when: trace,interrupt or reset
    CLEAR                  = 2    // clear
)

TRACE_FLAG(
    IDLE                   = 0
    COPY_WHEN_NO_STOP      = 1    // remember trace bit, move from sr[15]
)

GROUP0_FLAG(
    IDLE                   = 0
    SET                    = 1    // set, processing group zero exception
    CLEAR_WHEN_VALID_PREFETCH = 2    // clear
)

INSTRUCTION_FLAG(
    IDLE                   = 0
    SET                    = 1    // set, processing instruction
    CLEAR_IN_MAIN_LOOP     = 2    // clear, in main loop, when valid prefetch and valid instruction
)

RMW_FLAG(
    IDLE                   = 0
    SET                    = 1    // set, execute a RMW cycle
    CLEAR                  = 2    // clear
)

DO_RESET_FLAG(
    IDLE                   = 0
    SET                    = 1    // set, signal reset
    CLEAR                  = 2    // clear
)






