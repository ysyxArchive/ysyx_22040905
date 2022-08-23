// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+94,"clock", false,-1);
        tracep->declBit(c+95,"reset", false,-1);
        tracep->declBus(c+96,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+99,"io_result", false,-1, 63,0);
        tracep->declBit(c+94,"top clock", false,-1);
        tracep->declBit(c+95,"top reset", false,-1);
        tracep->declBus(c+96,"top io_inst", false,-1, 31,0);
        tracep->declQuad(c+97,"top io_pc", false,-1, 63,0);
        tracep->declQuad(c+99,"top io_result", false,-1, 63,0);
        tracep->declBus(c+96,"top idu_io_inst", false,-1, 31,0);
        tracep->declBus(c+101,"top idu_io_rs1", false,-1, 4,0);
        tracep->declBus(c+102,"top idu_io_rs2", false,-1, 4,0);
        tracep->declBus(c+103,"top idu_io_rd", false,-1, 4,0);
        tracep->declQuad(c+65,"top idu_io_imm", false,-1, 63,0);
        tracep->declQuad(c+67,"top idu_io_op", false,-1, 63,0);
        tracep->declBus(c+69,"top idu_io_typ", false,-1, 5,0);
        tracep->declBit(c+94,"top exu_clock", false,-1);
        tracep->declBit(c+95,"top exu_reset", false,-1);
        tracep->declBus(c+101,"top exu_io_rs1", false,-1, 4,0);
        tracep->declBus(c+102,"top exu_io_rs2", false,-1, 4,0);
        tracep->declBus(c+103,"top exu_io_rd", false,-1, 4,0);
        tracep->declQuad(c+65,"top exu_io_imm", false,-1, 63,0);
        tracep->declQuad(c+67,"top exu_io_op", false,-1, 63,0);
        tracep->declBus(c+69,"top exu_io_typ", false,-1, 5,0);
        tracep->declQuad(c+1,"top exu_io_pc", false,-1, 63,0);
        tracep->declQuad(c+70,"top exu_io_pc_dnpc", false,-1, 63,0);
        tracep->declQuad(c+67,"top exu_io_result", false,-1, 63,0);
        tracep->declQuad(c+1,"top pc", false,-1, 63,0);
        tracep->declBus(c+96,"top idu io_inst", false,-1, 31,0);
        tracep->declBus(c+101,"top idu io_rs1", false,-1, 4,0);
        tracep->declBus(c+102,"top idu io_rs2", false,-1, 4,0);
        tracep->declBus(c+103,"top idu io_rd", false,-1, 4,0);
        tracep->declQuad(c+65,"top idu io_imm", false,-1, 63,0);
        tracep->declQuad(c+67,"top idu io_op", false,-1, 63,0);
        tracep->declBus(c+69,"top idu io_typ", false,-1, 5,0);
        tracep->declQuad(c+67,"top idu op", false,-1, 63,0);
        tracep->declBus(c+69,"top idu typ", false,-1, 5,0);
        tracep->declQuad(c+104,"top idu io_imm_hi", false,-1, 51,0);
        tracep->declBus(c+106,"top idu io_imm_lo", false,-1, 11,0);
        tracep->declBus(c+107,"top idu io_imm_hi_1", false,-1, 31,0);
        tracep->declBus(c+108,"top idu io_imm_hi_2", false,-1, 19,0);
        tracep->declBus(c+109,"top idu io_imm_hi_4", false,-1, 6,0);
        tracep->declQuad(c+110,"top idu io_imm_hi_5", false,-1, 42,0);
        tracep->declBus(c+112,"top idu io_imm_hi_7", false,-1, 7,0);
        tracep->declBit(c+113,"top idu io_imm_hi_8", false,-1);
        tracep->declBus(c+114,"top idu io_imm_hi_9", false,-1, 9,0);
        tracep->declQuad(c+115,"top idu io_imm_hi_10", false,-1, 50,0);
        tracep->declBit(c+117,"top idu io_imm_hi_12", false,-1);
        tracep->declBus(c+118,"top idu io_imm_hi_13", false,-1, 5,0);
        tracep->declBus(c+119,"top idu io_imm_hi_14", false,-1, 3,0);
        tracep->declBit(c+94,"top exu clock", false,-1);
        tracep->declBit(c+95,"top exu reset", false,-1);
        tracep->declBus(c+101,"top exu io_rs1", false,-1, 4,0);
        tracep->declBus(c+102,"top exu io_rs2", false,-1, 4,0);
        tracep->declBus(c+103,"top exu io_rd", false,-1, 4,0);
        tracep->declQuad(c+65,"top exu io_imm", false,-1, 63,0);
        tracep->declQuad(c+67,"top exu io_op", false,-1, 63,0);
        tracep->declBus(c+69,"top exu io_typ", false,-1, 5,0);
        tracep->declQuad(c+1,"top exu io_pc", false,-1, 63,0);
        tracep->declQuad(c+70,"top exu io_pc_dnpc", false,-1, 63,0);
        tracep->declQuad(c+67,"top exu io_result", false,-1, 63,0);
        tracep->declBit(c+72,"top exu ebreak1_en_break", false,-1);
        tracep->declBit(c+94,"top exu ebreak1_clk", false,-1);
        tracep->declBit(c+94,"top exu gpr_clock", false,-1);
        tracep->declBit(c+95,"top exu gpr_reset", false,-1);
        tracep->declBus(c+101,"top exu gpr_io_idx_r1", false,-1, 4,0);
        tracep->declBus(c+102,"top exu gpr_io_idx_r2", false,-1, 4,0);
        tracep->declBus(c+73,"top exu gpr_io_idx_w", false,-1, 4,0);
        tracep->declBit(c+74,"top exu gpr_io_en_w", false,-1);
        tracep->declBit(c+75,"top exu gpr_io_en_r1", false,-1);
        tracep->declBit(c+76,"top exu gpr_io_en_r2", false,-1);
        tracep->declQuad(c+77,"top exu gpr_io_val_w", false,-1, 63,0);
        tracep->declQuad(c+120,"top exu gpr_io_val_r1", false,-1, 63,0);
        tracep->declQuad(c+122,"top exu gpr_io_val_r2", false,-1, 63,0);
        tracep->declQuad(c+79,"top exu alu_dest_io_src1", false,-1, 63,0);
        tracep->declQuad(c+81,"top exu alu_dest_io_src2", false,-1, 63,0);
        tracep->declBus(c+124,"top exu alu_dest_io_op", false,-1, 11,0);
        tracep->declQuad(c+77,"top exu alu_dest_io_result", false,-1, 63,0);
        tracep->declQuad(c+83,"top exu alu_pc_io_src1", false,-1, 63,0);
        tracep->declQuad(c+85,"top exu alu_pc_io_src2", false,-1, 63,0);
        tracep->declBus(c+87,"top exu alu_pc_io_op", false,-1, 11,0);
        tracep->declQuad(c+70,"top exu alu_pc_io_result", false,-1, 63,0);
        tracep->declQuad(c+88,"top exu src1", false,-1, 63,0);
        tracep->declQuad(c+90,"top exu src2", false,-1, 63,0);
        tracep->declQuad(c+92,"top exu dest", false,-1, 63,0);
        tracep->declBit(c+72,"top exu ebreak1 en_break", false,-1);
        tracep->declBit(c+94,"top exu ebreak1 clk", false,-1);
        tracep->declBit(c+94,"top exu gpr clock", false,-1);
        tracep->declBit(c+95,"top exu gpr reset", false,-1);
        tracep->declBus(c+101,"top exu gpr io_idx_r1", false,-1, 4,0);
        tracep->declBus(c+102,"top exu gpr io_idx_r2", false,-1, 4,0);
        tracep->declBus(c+73,"top exu gpr io_idx_w", false,-1, 4,0);
        tracep->declBit(c+74,"top exu gpr io_en_w", false,-1);
        tracep->declBit(c+75,"top exu gpr io_en_r1", false,-1);
        tracep->declBit(c+76,"top exu gpr io_en_r2", false,-1);
        tracep->declQuad(c+77,"top exu gpr io_val_w", false,-1, 63,0);
        tracep->declQuad(c+120,"top exu gpr io_val_r1", false,-1, 63,0);
        tracep->declQuad(c+122,"top exu gpr io_val_r2", false,-1, 63,0);
        tracep->declQuad(c+3,"top exu gpr gpr_1", false,-1, 63,0);
        tracep->declQuad(c+5,"top exu gpr gpr_2", false,-1, 63,0);
        tracep->declQuad(c+7,"top exu gpr gpr_3", false,-1, 63,0);
        tracep->declQuad(c+9,"top exu gpr gpr_4", false,-1, 63,0);
        tracep->declQuad(c+11,"top exu gpr gpr_5", false,-1, 63,0);
        tracep->declQuad(c+13,"top exu gpr gpr_6", false,-1, 63,0);
        tracep->declQuad(c+15,"top exu gpr gpr_7", false,-1, 63,0);
        tracep->declQuad(c+17,"top exu gpr gpr_8", false,-1, 63,0);
        tracep->declQuad(c+19,"top exu gpr gpr_9", false,-1, 63,0);
        tracep->declQuad(c+21,"top exu gpr gpr_10", false,-1, 63,0);
        tracep->declQuad(c+23,"top exu gpr gpr_11", false,-1, 63,0);
        tracep->declQuad(c+25,"top exu gpr gpr_12", false,-1, 63,0);
        tracep->declQuad(c+27,"top exu gpr gpr_13", false,-1, 63,0);
        tracep->declQuad(c+29,"top exu gpr gpr_14", false,-1, 63,0);
        tracep->declQuad(c+31,"top exu gpr gpr_15", false,-1, 63,0);
        tracep->declQuad(c+33,"top exu gpr gpr_16", false,-1, 63,0);
        tracep->declQuad(c+35,"top exu gpr gpr_17", false,-1, 63,0);
        tracep->declQuad(c+37,"top exu gpr gpr_18", false,-1, 63,0);
        tracep->declQuad(c+39,"top exu gpr gpr_19", false,-1, 63,0);
        tracep->declQuad(c+41,"top exu gpr gpr_20", false,-1, 63,0);
        tracep->declQuad(c+43,"top exu gpr gpr_21", false,-1, 63,0);
        tracep->declQuad(c+45,"top exu gpr gpr_22", false,-1, 63,0);
        tracep->declQuad(c+47,"top exu gpr gpr_23", false,-1, 63,0);
        tracep->declQuad(c+49,"top exu gpr gpr_24", false,-1, 63,0);
        tracep->declQuad(c+51,"top exu gpr gpr_25", false,-1, 63,0);
        tracep->declQuad(c+53,"top exu gpr gpr_26", false,-1, 63,0);
        tracep->declQuad(c+55,"top exu gpr gpr_27", false,-1, 63,0);
        tracep->declQuad(c+57,"top exu gpr gpr_28", false,-1, 63,0);
        tracep->declQuad(c+59,"top exu gpr gpr_29", false,-1, 63,0);
        tracep->declQuad(c+61,"top exu gpr gpr_30", false,-1, 63,0);
        tracep->declQuad(c+63,"top exu gpr gpr_31", false,-1, 63,0);
        tracep->declQuad(c+79,"top exu alu_dest io_src1", false,-1, 63,0);
        tracep->declQuad(c+81,"top exu alu_dest io_src2", false,-1, 63,0);
        tracep->declBus(c+124,"top exu alu_dest io_op", false,-1, 11,0);
        tracep->declQuad(c+77,"top exu alu_dest io_result", false,-1, 63,0);
        tracep->declQuad(c+83,"top exu alu_pc io_src1", false,-1, 63,0);
        tracep->declQuad(c+85,"top exu alu_pc io_src2", false,-1, 63,0);
        tracep->declBus(c+87,"top exu alu_pc io_op", false,-1, 11,0);
        tracep->declQuad(c+70,"top exu alu_pc io_result", false,-1, 63,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__pc),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_1),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_2),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_3),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_4),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_5),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_6),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_7),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_8),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_9),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_10),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_11),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_12),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_13),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_14),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_15),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_16),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_17),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_18),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_19),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_20),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_21),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_22),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_23),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_24),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_25),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_26),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__idu_io_imm),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__idu_io_op),64);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__idu_io_typ),6);
        tracep->fullQData(oldp+70,(((1U & (IData)((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__idu_io_op 
                                                               >> 4U)))
                                                    ? 0x400ULL
                                                    : 1ULL)))
                                     ? vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_2
                                     : ((1U & (IData)(
                                                      (((1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__idu_io_op 
                                                                    >> 4U)))
                                                         ? 0x400ULL
                                                         : 1ULL) 
                                                       >> 1U)))
                                         ? (1ULL + 
                                            (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                             + (~ vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)))
                                         : ((1U & (IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__idu_io_op 
                                                                        >> 4U)))
                                                             ? 0x400ULL
                                                             : 1ULL) 
                                                           >> 2U)))
                                             ? (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                                & vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)
                                             : ((1U 
                                                 & (IData)(
                                                           (((1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__idu_io_op 
                                                                         >> 4U)))
                                                              ? 0x400ULL
                                                              : 1ULL) 
                                                            >> 3U)))
                                                 ? 
                                                (vlSelf->top__DOT__exu__DOT__alu_pc_io_src1 
                                                 | vlSelf->top__DOT__exu__DOT__alu_pc_io_src2)
                                                 : vlSelf->top__DOT__exu__DOT__alu_pc__DOT___io_result_T_44))))),64);
        tracep->fullBit(oldp+72,((1U & (IData)((vlSelf->top__DOT__idu_io_op 
                                                >> 0x3fU)))));
        tracep->fullCData(oldp+73,((0x1fU & (IData)(vlSelf->top__DOT__exu__DOT__dest))),5);
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__exu__DOT__gpr_io_en_w));
        tracep->fullBit(oldp+75,((IData)((0U != (0x35U 
                                                 & (IData)(vlSelf->top__DOT__idu_io_typ))))));
        tracep->fullBit(oldp+76,((IData)((0U != (0x34U 
                                                 & (IData)(vlSelf->top__DOT__idu_io_typ))))));
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__exu__DOT__alu_dest__DOT___io_result_T_2),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__exu__DOT__alu_dest_io_src1),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__exu__DOT__alu_dest_io_src2),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__exu__DOT__alu_pc_io_src1),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__exu__DOT__alu_pc_io_src2),64);
        tracep->fullSData(oldp+87,((0xfffU & (IData)(
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__idu_io_op 
                                                                  >> 4U)))
                                                       ? 0x400ULL
                                                       : 1ULL)))),12);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__exu__DOT__src1),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__exu__DOT__src2),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__exu__DOT__dest),64);
        tracep->fullBit(oldp+94,(vlSelf->clock));
        tracep->fullBit(oldp+95,(vlSelf->reset));
        tracep->fullIData(oldp+96,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+97,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+99,(vlSelf->io_result),64);
        tracep->fullCData(oldp+101,((0x1fU & (vlSelf->io_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+102,((0x1fU & (vlSelf->io_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+103,((0x1fU & (vlSelf->io_inst 
                                              >> 7U))),5);
        tracep->fullQData(oldp+104,(((vlSelf->io_inst 
                                      >> 0x1fU) ? 0xfffffffffffffULL
                                      : 0ULL)),52);
        tracep->fullSData(oldp+106,((vlSelf->io_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+107,(((vlSelf->io_inst 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+108,((vlSelf->io_inst 
                                     >> 0xcU)),20);
        tracep->fullCData(oldp+109,((vlSelf->io_inst 
                                     >> 0x19U)),7);
        tracep->fullQData(oldp+110,(((vlSelf->io_inst 
                                      >> 0x1fU) ? 0x7ffffffffffULL
                                      : 0ULL)),43);
        tracep->fullCData(oldp+112,((0xffU & (vlSelf->io_inst 
                                              >> 0xcU))),8);
        tracep->fullBit(oldp+113,((1U & (vlSelf->io_inst 
                                         >> 0x14U))));
        tracep->fullSData(oldp+114,((0x3ffU & (vlSelf->io_inst 
                                               >> 0x15U))),10);
        tracep->fullQData(oldp+115,(((vlSelf->io_inst 
                                      >> 0x1fU) ? 0x7ffffffffffffULL
                                      : 0ULL)),51);
        tracep->fullBit(oldp+117,((1U & (vlSelf->io_inst 
                                         >> 7U))));
        tracep->fullCData(oldp+118,((0x3fU & (vlSelf->io_inst 
                                              >> 0x19U))),6);
        tracep->fullCData(oldp+119,((0xfU & (vlSelf->io_inst 
                                             >> 8U))),4);
        tracep->fullQData(oldp+120,(((IData)((0U != 
                                              (0x35U 
                                               & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                      ? ((0x1fU == 
                                          (0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 0xfU)))
                                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0xfU)))
                                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27
                                                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_26)))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+122,(((IData)((0U != 
                                              (0x34U 
                                               & (IData)(vlSelf->top__DOT__idu_io_typ))))
                                      ? ((0x1fU == 
                                          (0x1fU & 
                                           (vlSelf->io_inst 
                                            >> 0x14U)))
                                          ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_31
                                          : ((0x1eU 
                                              == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0x14U)))
                                              ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->top__DOT__exu__DOT__gpr__DOT__gpr_27
                                                    : vlSelf->top__DOT__exu__DOT__gpr__DOT___GEN_58)))))
                                      : 0ULL)),64);
        tracep->fullSData(oldp+124,(1U),12);
    }
}
