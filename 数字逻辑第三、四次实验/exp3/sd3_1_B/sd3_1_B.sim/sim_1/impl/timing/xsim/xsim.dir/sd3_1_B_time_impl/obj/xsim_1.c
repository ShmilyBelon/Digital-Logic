/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern void execute_2(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_110(char*, char *);
extern void execute_111(char*, char *);
extern void execute_112(char*, char *);
extern void execute_113(char*, char *);
extern void execute_114(char*, char *);
extern void execute_115(char*, char *);
extern void execute_116(char*, char *);
extern void execute_117(char*, char *);
extern void execute_118(char*, char *);
extern void execute_4(char*, char *);
extern void execute_6(char*, char *);
extern void execute_7(char*, char *);
extern void execute_28(char*, char *);
extern void execute_31(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_33(char*, char *);
extern void execute_34(char*, char *);
extern void execute_35(char*, char *);
extern void execute_36(char*, char *);
extern void execute_37(char*, char *);
extern void execute_38(char*, char *);
extern void execute_39(char*, char *);
extern void execute_40(char*, char *);
extern void execute_41(char*, char *);
extern void execute_43(char*, char *);
extern void execute_44(char*, char *);
extern void execute_45(char*, char *);
extern void execute_46(char*, char *);
extern void execute_47(char*, char *);
extern void execute_48(char*, char *);
extern void execute_49(char*, char *);
extern void execute_50(char*, char *);
extern void vlog_timingcheck_execute_0(char*, char*, char*);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_1(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_2(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_3(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_4(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_5(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_6(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_7(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_8(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_9(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_10(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_11(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_12(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_13(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_14(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_15(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_16(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_17(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_18(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_19(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_20(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_21(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_22(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_23(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_24(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_25(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_26(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_27(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_28(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_29(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_30(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_31(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_32(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_33(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_34(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_35(char*, char *);
extern void timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_36(char*, char *);
extern void execute_77(char*, char *);
extern void execute_85(char*, char *);
extern void execute_86(char*, char *);
extern void execute_87(char*, char *);
extern void execute_51(char*, char *);
extern void execute_10(char*, char *);
extern void execute_89(char*, char *);
extern void execute_90(char*, char *);
extern void execute_88(char*, char *);
extern void execute_13(char*, char *);
extern void execute_92(char*, char *);
extern void execute_93(char*, char *);
extern void execute_94(char*, char *);
extern void execute_95(char*, char *);
extern void execute_91(char*, char *);
extern void execute_18(char*, char *);
extern void execute_99(char*, char *);
extern void execute_20(char*, char *);
extern void execute_100(char*, char *);
extern void execute_101(char*, char *);
extern void execute_102(char*, char *);
extern void execute_25(char*, char *);
extern void execute_26(char*, char *);
extern void execute_27(char*, char *);
extern void execute_119(char*, char *);
extern void execute_120(char*, char *);
extern void execute_121(char*, char *);
extern void execute_122(char*, char *);
extern void execute_123(char*, char *);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_9(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_16(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_18(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[120] = {(funcp)execute_2, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_110, (funcp)execute_111, (funcp)execute_112, (funcp)execute_113, (funcp)execute_114, (funcp)execute_115, (funcp)execute_116, (funcp)execute_117, (funcp)execute_118, (funcp)execute_4, (funcp)execute_6, (funcp)execute_7, (funcp)execute_28, (funcp)execute_31, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_33, (funcp)execute_34, (funcp)execute_35, (funcp)execute_36, (funcp)execute_37, (funcp)execute_38, (funcp)execute_39, (funcp)execute_40, (funcp)execute_41, (funcp)execute_43, (funcp)execute_44, (funcp)execute_45, (funcp)execute_46, (funcp)execute_47, (funcp)execute_48, (funcp)execute_49, (funcp)execute_50, (funcp)vlog_timingcheck_execute_0, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_1, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_2, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_3, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_4, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_5, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_6, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_7, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_8, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_9, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_10, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_11, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_12, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_13, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_14, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_15, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_16, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_17, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_18, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_19, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_20, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_21, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_22, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_23, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_24, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_25, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_26, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_27, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_28, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_29, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_30, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_31, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_32, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_33, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_34, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_35, (funcp)timing_checker_condition_m_eb9a5fb5a3547121_f4d1fc17_36, (funcp)execute_77, (funcp)execute_85, (funcp)execute_86, (funcp)execute_87, (funcp)execute_51, (funcp)execute_10, (funcp)execute_89, (funcp)execute_90, (funcp)execute_88, (funcp)execute_13, (funcp)execute_92, (funcp)execute_93, (funcp)execute_94, (funcp)execute_95, (funcp)execute_91, (funcp)execute_18, (funcp)execute_99, (funcp)execute_20, (funcp)execute_100, (funcp)execute_101, (funcp)execute_102, (funcp)execute_25, (funcp)execute_26, (funcp)execute_27, (funcp)execute_119, (funcp)execute_120, (funcp)execute_121, (funcp)execute_122, (funcp)execute_123, (funcp)transaction_0, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_2, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_9, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)transaction_18, (funcp)transaction_19};
const int NumRelocateId= 120;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/sd3_1_B_time_impl/xsim.reloc",  (void **)funcTab, 120);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/sd3_1_B_time_impl/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/sd3_1_B_time_impl/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/sd3_1_B_time_impl/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/sd3_1_B_time_impl/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/sd3_1_B_time_impl/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
