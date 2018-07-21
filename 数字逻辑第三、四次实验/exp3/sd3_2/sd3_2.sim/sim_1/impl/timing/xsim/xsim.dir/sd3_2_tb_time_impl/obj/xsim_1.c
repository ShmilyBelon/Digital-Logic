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
extern void execute_56(char*, char *);
extern void execute_57(char*, char *);
extern void execute_308(char*, char *);
extern void execute_3(char*, char *);
extern void execute_302(char*, char *);
extern void execute_303(char*, char *);
extern void execute_304(char*, char *);
extern void execute_305(char*, char *);
extern void execute_306(char*, char *);
extern void execute_307(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_116(char*, char *);
extern void execute_117(char*, char *);
extern void execute_118(char*, char *);
extern void execute_119(char*, char *);
extern void execute_120(char*, char *);
extern void execute_121(char*, char *);
extern void execute_122(char*, char *);
extern void execute_7(char*, char *);
extern void execute_63(char*, char *);
extern void execute_64(char*, char *);
extern void execute_65(char*, char *);
extern void execute_66(char*, char *);
extern void execute_67(char*, char *);
extern void execute_68(char*, char *);
extern void execute_69(char*, char *);
extern void execute_70(char*, char *);
extern void execute_62(char*, char *);
extern void execute_10(char*, char *);
extern void execute_72(char*, char *);
extern void execute_73(char*, char *);
extern void execute_71(char*, char *);
extern void execute_12(char*, char *);
extern void execute_13(char*, char *);
extern void execute_14(char*, char *);
extern void execute_15(char*, char *);
extern void execute_74(char*, char *);
extern void execute_75(char*, char *);
extern void execute_76(char*, char *);
extern void execute_77(char*, char *);
extern void execute_78(char*, char *);
extern void execute_79(char*, char *);
extern void execute_80(char*, char *);
extern void execute_81(char*, char *);
extern void execute_82(char*, char *);
extern void execute_83(char*, char *);
extern void execute_84(char*, char *);
extern void execute_85(char*, char *);
extern void execute_86(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_1(char*, char *);
extern void vlog_timingcheck_execute_0(char*, char*, char*);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_2(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_79(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_80(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_81(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_82(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_83(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_84(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_85(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_86(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_87(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_88(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_89(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_90(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_91(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_92(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_93(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_94(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_95(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_96(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_97(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_98(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_99(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_100(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_101(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_102(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_27(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_28(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_29(char*, char *);
extern void timing_checker_condition_m_23f9f98e674aefaf_67151b0a_30(char*, char *);
extern void execute_105(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_110(char*, char *);
extern void execute_111(char*, char *);
extern void execute_112(char*, char *);
extern void execute_113(char*, char *);
extern void execute_165(char*, char *);
extern void execute_166(char*, char *);
extern void execute_167(char*, char *);
extern void execute_222(char*, char *);
extern void execute_223(char*, char *);
extern void execute_224(char*, char *);
extern void execute_225(char*, char *);
extern void execute_226(char*, char *);
extern void execute_227(char*, char *);
extern void execute_228(char*, char *);
extern void execute_276(char*, char *);
extern void execute_277(char*, char *);
extern void execute_278(char*, char *);
extern void execute_279(char*, char *);
extern void execute_280(char*, char *);
extern void execute_37(char*, char *);
extern void execute_230(char*, char *);
extern void execute_231(char*, char *);
extern void execute_232(char*, char *);
extern void execute_233(char*, char *);
extern void execute_229(char*, char *);
extern void execute_44(char*, char *);
extern void execute_281(char*, char *);
extern void execute_282(char*, char *);
extern void execute_283(char*, char *);
extern void execute_293(char*, char *);
extern void execute_294(char*, char *);
extern void execute_297(char*, char *);
extern void execute_53(char*, char *);
extern void execute_298(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void execute_61(char*, char *);
extern void execute_309(char*, char *);
extern void execute_310(char*, char *);
extern void execute_311(char*, char *);
extern void execute_312(char*, char *);
extern void execute_313(char*, char *);
extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_16(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_18(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_20(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_21(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_24(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_25(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_26(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_27(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_28(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_69(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_70(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_99(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_100(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_101(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_102(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_103(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_104(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_105(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_146(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_147(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_148(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_149(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_43(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_73(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_120(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_157(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[166] = {(funcp)execute_56, (funcp)execute_57, (funcp)execute_308, (funcp)execute_3, (funcp)execute_302, (funcp)execute_303, (funcp)execute_304, (funcp)execute_305, (funcp)execute_306, (funcp)execute_307, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_116, (funcp)execute_117, (funcp)execute_118, (funcp)execute_119, (funcp)execute_120, (funcp)execute_121, (funcp)execute_122, (funcp)execute_7, (funcp)execute_63, (funcp)execute_64, (funcp)execute_65, (funcp)execute_66, (funcp)execute_67, (funcp)execute_68, (funcp)execute_69, (funcp)execute_70, (funcp)execute_62, (funcp)execute_10, (funcp)execute_72, (funcp)execute_73, (funcp)execute_71, (funcp)execute_12, (funcp)execute_13, (funcp)execute_14, (funcp)execute_15, (funcp)execute_74, (funcp)execute_75, (funcp)execute_76, (funcp)execute_77, (funcp)execute_78, (funcp)execute_79, (funcp)execute_80, (funcp)execute_81, (funcp)execute_82, (funcp)execute_83, (funcp)execute_84, (funcp)execute_85, (funcp)execute_86, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_1, (funcp)vlog_timingcheck_execute_0, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_2, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_79, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_80, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_81, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_82, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_83, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_84, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_85, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_86, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_87, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_88, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_89, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_90, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_91, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_92, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_93, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_94, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_95, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_96, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_97, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_98, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_99, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_100, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_101, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_102, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_27, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_28, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_29, (funcp)timing_checker_condition_m_23f9f98e674aefaf_67151b0a_30, (funcp)execute_105, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_110, (funcp)execute_111, (funcp)execute_112, (funcp)execute_113, (funcp)execute_165, (funcp)execute_166, (funcp)execute_167, (funcp)execute_222, (funcp)execute_223, (funcp)execute_224, (funcp)execute_225, (funcp)execute_226, (funcp)execute_227, (funcp)execute_228, (funcp)execute_276, (funcp)execute_277, (funcp)execute_278, (funcp)execute_279, (funcp)execute_280, (funcp)execute_37, (funcp)execute_230, (funcp)execute_231, (funcp)execute_232, (funcp)execute_233, (funcp)execute_229, (funcp)execute_44, (funcp)execute_281, (funcp)execute_282, (funcp)execute_283, (funcp)execute_293, (funcp)execute_294, (funcp)execute_297, (funcp)execute_53, (funcp)execute_298, (funcp)execute_59, (funcp)execute_60, (funcp)execute_61, (funcp)execute_309, (funcp)execute_310, (funcp)execute_311, (funcp)execute_312, (funcp)execute_313, (funcp)transaction_1, (funcp)transaction_2, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)transaction_18, (funcp)transaction_19, (funcp)transaction_20, (funcp)transaction_21, (funcp)transaction_22, (funcp)transaction_23, (funcp)transaction_24, (funcp)transaction_25, (funcp)transaction_26, (funcp)transaction_27, (funcp)transaction_28, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_69, (funcp)transaction_70, (funcp)transaction_99, (funcp)transaction_100, (funcp)transaction_101, (funcp)transaction_102, (funcp)transaction_103, (funcp)transaction_104, (funcp)transaction_105, (funcp)transaction_146, (funcp)transaction_147, (funcp)transaction_148, (funcp)transaction_149, (funcp)transaction_43, (funcp)transaction_73, (funcp)transaction_120, (funcp)transaction_157};
const int NumRelocateId= 166;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/sd3_2_tb_time_impl/xsim.reloc",  (void **)funcTab, 166);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/sd3_2_tb_time_impl/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/sd3_2_tb_time_impl/xsim.reloc");
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
    iki_set_sv_type_file_path_name("xsim.dir/sd3_2_tb_time_impl/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/sd3_2_tb_time_impl/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/sd3_2_tb_time_impl/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
