// ST820 stepper driver validate

#if AXIS1_DRIVER_MODEL == ST820
  #if AXIS1_MICROSTEPS!=1 && AXIS1_MICROSTEPS!=2 && AXIS1_MICROSTEPS!=4 && AXIS1_MICROSTEPS!=8 && AXIS1_MICROSTEPS!=16 && AXIS1_MICROSTEPS!=32 && AXIS1_MICROSTEPS!=128 && AXIS1_MICROSTEPS!=256
    #error "Configuration: AXIS1_MICROSTEPS; ST820 invalid micro-step mode, use: 256,128,32,16,8,4,2,or 1"
  #endif
  #if HAL_PULSE_WIDTH < ST820_PULSE_WIDTH
    #error "Configuration: STEP_WAVE_FORM PULSE; Pulse width is below the ST820 stepper driver specifications."
  #endif
#endif
#if AXIS2_DRIVER_MODEL == ST820
  #if AXIS2_MICROSTEPS!=1 && AXIS2_MICROSTEPS!=2 && AXIS2_MICROSTEPS!=4 && AXIS2_MICROSTEPS!=8 && AXIS2_MICROSTEPS!=16 && AXIS2_MICROSTEPS!=32 && AXIS2_MICROSTEPS!=128 && AXIS2_MICROSTEPS!=256
    #error "Configuration: AXIS2_MICROSTEPS; ST820 invalid micro-step mode, use: 256,128,32,16,8,4,2,or 1"
  #endif
  #if HAL_PULSE_WIDTH < ST820_PULSE_WIDTH
    #error "Configuration: STEP_WAVE_FORM PULSE; Pulse width is below the ST820 stepper driver specifications."
  #endif
#endif
#ifdef AXIS1_MICROSTEPS_GOTO
  #if AXIS1_DRIVER_MODEL == ST820
    #if AXIS1_MICROSTEPS_GOTO!=1 && AXIS1_MICROSTEPS_GOTO!=2 && AXIS1_MICROSTEPS_GOTO!=4 && AXIS1_MICROSTEPS_GOTO!=8 && AXIS1_MICROSTEPS_GOTO!=16 && AXIS1_MICROSTEPS_GOTO!=32 && AXIS1_MICROSTEPS_GOTO!=128 && AXIS1_MICROSTEPS_GOTO!=256
      #error "Configuration: AXIS1_MICROSTEPS_GOTO; ST820 invalid micro-step mode, use: 256,128,32,16,8,4,2,1,or _OFF"
    #endif
  #endif
#endif
#ifdef AXIS2_MICROSTEPS_GOTO
  #if AXIS2_DRIVER_MODEL == ST820
    #if AXIS2_MICROSTEPS_GOTO!=1 && AXIS2_MICROSTEPS_GOTO!=2 && AXIS2_MICROSTEPS_GOTO!=4 && AXIS2_MICROSTEPS_GOTO!=8 && AXIS2_MICROSTEPS_GOTO!=16 && AXIS2_MICROSTEPS_GOTO!=32 && AXIS2_MICROSTEPS_GOTO!=128 && AXIS2_MICROSTEPS_GOTO!=256
      #error "Configuration: AXIS2_MICROSTEPS_GOTO; ST820 invalid micro-step mode, use: 256,128,32,16,8,4,2,1,or _OFF"
    #endif
  #endif
#endif
