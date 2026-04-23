CONFIGURATIONS		   := Ifx_Cfg_Ssw.c Ifx_Cfg_SswBmhd.c sync_on_halt.c
ILLD_Impl		       := IfxAsclin_cfg.c IfxCan_cfg.c IfxCcu6_cfg.c IfxCpu_cfg.c IfxDma_cfg.c IfxEray_cfg.c IfxEvadc_cfg.c IfxFlash_cfg.c IfxGeth_cfg.c IfxGtm_cfg.c\
                          IfxHssl_cfg.c  IfxI2c_cfg.c IfxMsc_cfg.c IfxMtu_cfg.c IfxPort_cfg.c IfxPsi5_cfg.c IfxQspi_cfg.c IfxScu_cfg.c IfxSent_cfg.c IfxSmu_cfg.c IfxSrc_cfg.c\
					      IfxStm_cfg.c
ILLD_Lib               := Ifx_CircularBuffer.asm.c Ifx_CircularBuffer.c Ifx_Fifo.c Ifx_InternalMux.c
ILLD_PinMap            := IfxAsclin_PinMap.c IfxCan_PinMap.c IfxCcu6_PinMap.c IfxDmu_PinMap.c IfxEdsadc_PinMap.c IfxEray_PinMap.c IfxEvadc_PinMap.c IfxGeth_PinMap.c\
                          IfxGpt12_PinMap.c IfxGtm_PinMap.c IfxI2c_PinMap.c IfxMsc_PinMap.c IfxPms_PinMap.c IfxPort_PinMap.c IfxPsi5_PinMap.c IfxPsi5s_PinMap.c\
					      IfxQspi_PinMap.c IfxScu_PinMap.c IfxSent_PinMap.c IfxSmu_PinMap.c
ILLD_Asclin            := IfxAsclin.c IfxAsclin_Asc.c IfxAsclin_Lin.c IfxAsclin_Spi.c
ILLD_Can               := IfxCan.c IfxCan_Can.c 
ILLD_Ccu6              := IfxCcu6.c IfxCcu6_Icu.c IfxCcu6_PwmBc.c IfxCcu6_PwmHl.c IfxCcu6_Timer.c IfxCcu6_TimerWithTrigger.c IfxCcu6_TPwm.c
ILLD_Convctrl          := IfxConvctrl.c
ILLD_Cpu               := IfxCpu.c IfxCpu_Irq.c IfxCpu_Trap.c
ILLD_Dma               := IfxDma.c IfxDma_Dma.c
ILLD_Dts               := IfxDts.c IfxDts_Dts.c
ILLD_Edsadc            := IfxEdsadc.c IfxEdsadc_Edsadc.c
ILLD_Eray              := IfxEray.c IfxEray_Eray.c
ILLD_Evadc             := IfxEvadc.c IfxEvadc_Adc.c
ILLD_Fce               := IfxFce.c IfxFce_Crc.c
ILLD_Flash             := IfxFlash.c
ILLD_Geth              := IfxGeth.c IfxGeth_Eth.c
ILLD_Gpt12             := IfxGpt12.c IfxGpt12_IncrEnc.c
ILLD_Gtm               := IfxGtm.c IfxGtm_Atom.c IfxGtm_Atom_Dtm_PwmHl.c IfxGtm_Atom_Pwm.c IfxGtm_Atom_PwmHl.c IfxGtm_Atom_Timer.c IfxGtm_Cmu.c\
                          IfxGtm_Dpll.c IfxGtm_Dtm.c IfxGtm_Psm.c IfxGtm_Spe.c IfxGtm_Tbu.c IfxGtm_Tim.c IfxGtm_Tim_In.c IfxGtm_Tim_Timer.c\
					      IfxGtm_Tom.c IfxGtm_Tom_Dtm_PwmHl.c IfxGtm_Tom_Pwm.c IfxGtm_Tom_PwmHl.c IfxGtm_Tom_Timer.c IfxGtm_Trig.c
ILLD_Hssl              := IfxHssl.c IfxHssl_Hssl.c
ILLD_I2c               := IfxI2c.c IfxI2c_I2c.c
ILLD_Iom               := IfxIom.c IfxIom_Driver.c IfxIom_Iom.c
ILLD_Msc               := IfxMsc.c IfxMsc_Msc.c
ILLD_Mtu               := IfxMtu.c
ILLD_Pms               := IfxPmsEvr.c IfxPmsPm.c
ILLD_Port              := IfxPort.c IfxPort_Io.c
ILLD_Psi5              := IfxPsi5.c IfxPsi5_Psi5.c
ILLD_Psi5s             := IfxPsi5s.c IfxPsi5s_Psi5s.c
ILLD_Qspi              := IfxQspi.c IfxQspi_SpiMaster.c IfxQspi_SpiSlave.c
ILLD_Scu               := IfxScuCcu.c IfxScuEru.c IfxScuLbist.c IfxScuRcu.c IfxScuWdt.c
ILLD_Sent              := IfxSent.c IfxSent_Sent.c
ILLD_Smu               := IfxSmu.c IfxSmu_Smu.c IfxSmuStdby.c
ILLD_Src               := IfxSrc.c
ILLD_Stm               := IfxStm.c IfxStm_Timer.c
					   
INFRA_Compilers	       := CompilerGnuc.c
INFRA_StartUp	       := Ifx_Ssw_Infra.c Ifx_Ssw_Tc0.c Ifx_Ssw_Tc1.c Ifx_Ssw_Tc2.c Ifx_Ssw_Tc3.c
SERVICE_If		       := SpiIf.c
SERVICE_StdIf	       := IfxStdIf_DPipe.c IfxStdIf_Pos.c IfxStdIf_PwmHl.c IfxStdIf_Timer.c
SERVICE_SysSe	       := Assert.c Bsp.c Ifx_AngleTrkF32.c Ifx_Cf32.c Ifx_Console.c Ifx_Crc.c Ifx_DateTime.c Ifx_FftF32.c Ifx_FftF32_BitReverseTable.c Ifx_FftF32_TwiddleTable.c\
                          Ifx_GlobalResources.c Ifx_IntegralF32.c Ifx_LowPassPt1F32.c Ifx_LutAtan2F32.c Ifx_LutAtan2F32_Table.c Ifx_LutLinearF32.c Ifx_LutLSincosF32.c\
					      Ifx_LutSincosF32_Table.c Ifx_RampF32.c Ifx_Shell.c Ifx_WndF32_BlackmanHarrisTable.c Ifx_WndF32_HannTable.c
USER		           := Cpu0_Main.c Cpu1_Main.c Cpu2_Main.c Cpu3_Main.c STM_Interrupt.c
AUTOSAR_OS		       := Os_AccessCheck.c Os_Alarm.c Os_Application.c Os_Barrier.c Os_Bit.c Os_BitArray.c Os_Core.c Os_Counter.c Os_Deque.c Os_Error.c Os_Event.c Os_Fifo.c\
                          Os_Fifo08.c Os_Fifo16.c Os_Fifo32.c Os_FifoRef.c Os_Hal_Compiler_Diab.c Os_Hal_Compiler_Greenhills.c Os_Hal_Compiler_HighTec.c Os_Hal_Compiler_Tasking.c\
						  Os_Hal_Context.c Os_Hal_Core.c Os_Hal_Entry.c Os_Hal_Trap.c Os_Hook.c Os_Interrupt.c Os_Ioc.c Os_Isr.c Os_Job.c Os_Lock.c Os_MemoryProtection.c\
						  Os_Peripheral.c Os_PriorityQueue.c Os_Resource.c Os_Scheduler.c Os_ScheduleTable.c Os_ServiceFunction.c Os_Spinlock.c Os_Stack.c Os_Task.c\
						  Os_Thread.c Os_Timer.c Os_TimingProtection.c Os_Trace.c Os_Trap.c Os_XSignal.c
AUTOSAR_OSCFG          := Os_AccessCheck_Lcfg.c Os_Alarm_Lcfg.c Os_Application_Lcfg.c Os_Barrier_Lcfg.c Os_Core_Lcfg.c Os_Counter_Lcfg.c Os_Error_Lcfg.c Os_Hal_Context_Lcfg.c\
                          Os_Hal_Core_Lcfg.c Os_Hal_Entry_Lcfg.c Os_Hal_Interrupt_Lcfg.c Os_Hal_Kernel_Lcfg.c Os_Hal_MemoryProtection_Lcfg.c Os_Hal_Timer_Lcfg.c Os_Hook_Lcfg.c\
						  Os_Ioc_Lcfg.c Os_Isr_Lcfg.c Os_MemoryProtection_Lcfg.c Os_Peripheral_Lcfg.c Os_Resource_Lcfg.c Os_Scheduler_Lcfg.c Os_ScheduleTable_Lcfg.c\
						  Os_ServiceFunction_Lcfg.c Os_Spinlock_Lcfg.c Os_Stack_Lcfg.c Os_Task_Lcfg.c Os_TimingProtection_Lcfg.c Os_Trace_Lcfg.c Os_XSignal_Lcfg.c\
						  Rte_OsApplication.c


					   
CONFIGURATIONS_PATH    := $(ROOT)Configurations
ILLD_Impl_PATH         := $(ROOT)iLLD/_Impl
ILLD_Lib_PATH          := $(ROOT)iLLD/_Lib
ILLD_PinMap_PATH       := $(ROOT)iLLD/_PinMap
ILLD_Asclin_PATH       := $(ROOT)iLLD/Asclin
ILLD_Can_PATH          := $(ROOT)iLLD/Can
ILLD_Ccu6_PATH         := $(ROOT)iLLD/Ccu6
ILLD_Convctrl_PATH     := $(ROOT)iLLD/Convctrl
ILLD_Cpu_PATH          := $(ROOT)iLLD/Cpu
ILLD_Dma_PATH          := $(ROOT)iLLD/Dma
ILLD_Dts_PATH          := $(ROOT)iLLD/Dts
ILLD_Edsadc_PATH       := $(ROOT)iLLD/Edsadc
ILLD_Eray_PATH         := $(ROOT)iLLD/Eray
ILLD_Evadc_PATH        := $(ROOT)iLLD/Evadc
ILLD_Fce_PATH          := $(ROOT)iLLD/Fce
ILLD_Flash_PATH        := $(ROOT)iLLD/Flash
ILLD_Geth_PATH         := $(ROOT)iLLD/Geth
ILLD_Gpt12_PATH        := $(ROOT)iLLD/Gpt12
ILLD_Gtm_PATH          := $(ROOT)iLLD/Gtm
ILLD_Hssl_PATH         := $(ROOT)iLLD/Hssl
ILLD_I2c_PATH          := $(ROOT)iLLD/I2c
ILLD_Iom_PATH          := $(ROOT)iLLD/Iom
ILLD_Msc_PATH          := $(ROOT)iLLD/Msc
ILLD_Mtu_PATH          := $(ROOT)iLLD/Mtu
ILLD_Pms_PATH          := $(ROOT)iLLD/Pms
ILLD_Port_PATH         := $(ROOT)iLLD/Port
ILLD_Psi5_PATH         := $(ROOT)iLLD/Psi5
ILLD_Psi5s_PATH        := $(ROOT)iLLD/Psi5s
ILLD_Qspi_PATH         := $(ROOT)iLLD/Qspi
ILLD_Scu_PATH          := $(ROOT)iLLD/Scu
ILLD_Sent_PATH         := $(ROOT)iLLD/Sent
ILLD_Smu_PATH          := $(ROOT)iLLD/Smu
ILLD_Src_PATH          := $(ROOT)iLLD/Src
ILLD_Stm_PATH          := $(ROOT)iLLD/Stm
ILLD_Compilers_PATH    := $(ROOT)iLLD/Compilers
ILLD_StartUp_PATH      := $(ROOT)iLLD/StartUp
ILLD_If_PATH           := $(ROOT)iLLD/If
ILLD_StdIf_PATH        := $(ROOT)iLLD/StdIf
ILLD_SysSe_PATH        := $(ROOT)iLLD/SysSe
INFRA_Reg_PATH         := $(ROOT)Infra/_Reg
INFRA_Compilers_PATH   := $(ROOT)Infra/Compilers
INFRA_StartUp_PATH     := $(ROOT)Infra/StartUp
SERVICE_If_PATH        := $(ROOT)Service/If
SERVICE_StdIf_PATH     := $(ROOT)Service/StdIf
SERVICE_SysSe_PATH     := $(ROOT)Service/SysSe
SERVICE_Utilities_PATH := $(ROOT)Service/_Utilities
USER_PATH              := $(ROOT)User
AUTOSAR_OS_PATH        := $(ROOT)Autosar/Os
AUTOSAR_OSCFG_PATH     := $(ROOT)Autosar/OsCfg
OBJ_PATH               := $(ROOT)Obj

CFILES                 += $(addprefix $(CONFIGURATIONS_PATH)/,$(CONFIGURATIONS))
CFILES                 += $(addprefix $(ILLD_Impl_PATH)/,$(ILLD_Impl))
CFILES                 += $(addprefix $(ILLD_Lib_PATH)/,$(ILLD_Lib))
CFILES                 += $(addprefix $(ILLD_PinMap_PATH)/,$(ILLD_PinMap))
CFILES                 += $(addprefix $(ILLD_Asclin_PATH)/,$(ILLD_Asclin))
CFILES                 += $(addprefix $(ILLD_Can_PATH)/,$(ILLD_Can))
CFILES                 += $(addprefix $(ILLD_Ccu6_PATH)/,$(ILLD_Ccu6))
CFILES                 += $(addprefix $(ILLD_Convctrl_PATH)/,$(ILLD_Convctrl))
CFILES                 += $(addprefix $(ILLD_Cpu_PATH)/,$(ILLD_Cpu))
CFILES                 += $(addprefix $(ILLD_Dma_PATH)/,$(ILLD_Dma))
CFILES                 += $(addprefix $(ILLD_Dts_PATH)/,$(ILLD_Dts))
CFILES                 += $(addprefix $(ILLD_Edsadc_PATH)/,$(ILLD_Edsadc))
CFILES                 += $(addprefix $(ILLD_Eray_PATH)/,$(ILLD_Eray))
CFILES                 += $(addprefix $(ILLD_Evadc_PATH)/,$(ILLD_Evadc))
CFILES                 += $(addprefix $(ILLD_Fce_PATH)/,$(ILLD_Fce))
CFILES                 += $(addprefix $(ILLD_Flash_PATH)/,$(ILLD_Flash))
CFILES                 += $(addprefix $(ILLD_Geth_PATH)/,$(ILLD_Geth))
CFILES                 += $(addprefix $(ILLD_Gpt12_PATH)/,$(ILLD_Gpt12))
CFILES                 += $(addprefix $(ILLD_Gtm_PATH)/,$(ILLD_Gtm))
CFILES                 += $(addprefix $(ILLD_Hssl_PATH)/,$(ILLD_Hssl))
CFILES                 += $(addprefix $(ILLD_I2c_PATH)/,$(ILLD_I2c))
CFILES                 += $(addprefix $(ILLD_Iom_PATH)/,$(ILLD_Iom))
CFILES                 += $(addprefix $(ILLD_Msc_PATH)/,$(ILLD_Msc))
CFILES                 += $(addprefix $(ILLD_Mtu_PATH)/,$(ILLD_Mtu))
CFILES                 += $(addprefix $(ILLD_Pms_PATH)/,$(ILLD_Pms))
CFILES                 += $(addprefix $(ILLD_Port_PATH)/,$(ILLD_Port))
CFILES                 += $(addprefix $(ILLD_Psi5_PATH)/,$(ILLD_Psi5))
CFILES                 += $(addprefix $(ILLD_Psi5s_PATH)/,$(ILLD_Psi5s))
CFILES                 += $(addprefix $(ILLD_Qspi_PATH)/,$(ILLD_Qspi))
CFILES                 += $(addprefix $(ILLD_Scu_PATH)/,$(ILLD_Scu))
CFILES                 += $(addprefix $(ILLD_Sent_PATH)/,$(ILLD_Sent))
CFILES                 += $(addprefix $(ILLD_Smu_PATH)/,$(ILLD_Smu))
CFILES                 += $(addprefix $(ILLD_Src_PATH)/,$(ILLD_Src))
CFILES                 += $(addprefix $(ILLD_Stm_PATH)/,$(ILLD_Stm))
CFILES                 += $(addprefix $(ILLD_Compilers_PATH)/,$(ILLD_Compilers))
CFILES                 += $(addprefix $(ILLD_StartUp_PATH)/,$(ILLD_StartUp))
CFILES                 += $(addprefix $(ILLD_If_PATH)/,$(ILLD_If))
CFILES                 += $(addprefix $(ILLD_StdIf_PATH)/,$(ILLD_StdIf))
CFILES                 += $(addprefix $(ILLD_SysSe_PATH)/,$(ILLD_SysSe))
CFILES                 += $(addprefix $(INFRA_Compilers_PATH)/,$(INFRA_Compilers))
CFILES                 += $(addprefix $(INFRA_StartUp_PATH)/,$(INFRA_StartUp))
CFILES                 += $(addprefix $(SERVICE_If_PATH)/,$(SERVICE_If))
CFILES                 += $(addprefix $(SERVICE_StdIf_PATH)/,$(SERVICE_StdIf))
CFILES                 += $(addprefix $(SERVICE_SysSe_PATH)/,$(SERVICE_SysSe))
CFILES                 += $(addprefix $(USER_PATH)/,$(USER))
CFILES                 += $(addprefix $(AUTOSAR_OS_PATH)/,$(AUTOSAR_OS))
CFILES                 += $(addprefix $(AUTOSAR_OSCFG_PATH)/,$(AUTOSAR_OSCFG))


HEADERS                := $(CONFIGURATIONS_PATH) $(ILLD_Impl_PATH) $(ILLD_Lib_PATH) $(ILLD_PinMap_PATH)\
                          $(ILLD_Asclin_PATH) $(ILLD_Can_PATH) $(ILLD_Ccu6_PATH) $(ILLD_Convctrl_PATH)\
                          $(ILLD_Cpu_PATH) $(ILLD_Dma_PATH) $(ILLD_Dts_PATH) $(ILLD_Edsadc_PATH)\
                          $(ILLD_Eray_PATH) $(ILLD_Evadc_PATH) $(ILLD_Fce_PATH) $(ILLD_Flash_PATH)\
                          $(ILLD_Geth_PATH) $(ILLD_Gpt12_PATH) $(ILLD_Gtm_PATH) $(ILLD_Hssl_PATH)\
                          $(ILLD_I2c_PATH) $(ILLD_Iom_PATH) $(ILLD_Msc_PATH) $(ILLD_Mtu_PATH)\
                          $(ILLD_Pms_PATH) $(ILLD_Psi5_PATH) $(ILLD_Psi5s_PATH) $(ILLD_Qspi_PATH)\
                          $(ILLD_Scu_PATH) $(ILLD_Sent_PATH) $(ILLD_Smu_PATH) $(ILLD_Src_PATH)\
                          $(ILLD_Stm_PATH) $(ILLD_Compilers_PATH) $(ILLD_StartUp_PATH) $(ILLD_If_PATH)\
                          $(ILLD_StdIf_PATH) $(ILLD_SysSe_PATH) $(INFRA_Compilers_PATH) $(INFRA_StartUp_PATH)\
                          $(SERVICE_If_PATH) $(SERVICE_StdIf_PATH) $(SERVICE_SysSe_PATH) $(USER_PATH)\
						  $(INFRA_Reg_PATH) $(SERVICE_Utilities_PATH) $(ILLD_Port_PATH) $(AUTOSAR_OS_PATH)\
						  $(AUTOSAR_OSCFG_PATH)
