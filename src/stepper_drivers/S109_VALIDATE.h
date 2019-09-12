// S109 stepper driver validate

#if AXIS1_DRIVER_MODEL == S109
  #if AXIS1_MICROSTEPS!=1 && AXIS1_MICROSTEPS!=2 && AXIS1_MICROSTEPS!=4 && AXIS1_MICROSTEPS!=8 && AXIS1_MICROSTEPS!=16 && AXIS1_MICROSTEPS!=32
    #error "Configuration: AXIS1_MICROSTEPS; S109 invalid micro-step mode, use: 32,16,8,4,2,or 1"
  #endif
  #if HAL_PULSE_WIDTH < S109_PULSE_WIDTH
    #error "Configuration: STEP_WAVE_FORM PULSE; Pulse width is below the S109 stepper driver specifications."
  #endif
#endif
#if AXIS2_DRIVER_MODEL == S109
  #if AXIS2_MICROSTEPS!=1 && AXIS2_MICROSTEPS!=2 && AXIS2_MICROSTEPS!=4 && AXIS2_MICROSTEPS!=8 && AXIS2_MICROSTEPS!=16 && AXIS2_MICROSTEPS!=32
    #error "Configuration: AXIS2_MICROSTEPS; S109 invalid micro-step mode, use: 32,16,8,4,2,or 1"
  #endif
  #if HAL_PULSE_WIDTH < S109_PULSE_WIDTH
    #error "Configuration: STEP_WAVE_FORM PULSE; Pulse width is below the S109 stepper driver specifications."
  #endif
#endif
#ifdef AXIS2_MICROSTEPS_GOTO
  #if AXIS1_DRIVER_MODEL == S109
    #if AXIS1_MICROSTEPS_GOTO!=1 && AXIS1_MICROSTEPS_GOTO!=2 && AXIS1_MICROSTEPS_GOTO!=4 && AXIS1_MICROSTEPS_GOTO!=8 && AXIS1_MICROSTEPS_GOTO!=16 && AXIS1_MICROSTEPS_GOTO!=32
      #error "Configuration: AXIS1_MICROSTEPS_GOTO; S109 invalid micro-step mode, use: 32,16,8,4,2,1,or _OFF"
    #endif
  #endif
#endif
#ifdef AXIS2_MICROSTEPS_GOTO
  #if AXIS2_DRIVER_MODEL == S109
    #if AXIS2_MICROSTEPS_GOTO!=1 && AXIS2_MICROSTEPS_GOTO!=2 && AXIS2_MICROSTEPS_GOTO!=4 && AXIS2_MICROSTEPS_GOTO!=8 && AXIS2_MICROSTEPS_GOTO!=16 && AXIS2_MICROSTEPS_GOTO!=32
      #error "Configuration: AXIS2_MICROSTEPS_GOTO; S109 invalid micro-step mode, use: 32,16,8,4,2,1,or _OFF"
    #endif
  #endif
#endif
