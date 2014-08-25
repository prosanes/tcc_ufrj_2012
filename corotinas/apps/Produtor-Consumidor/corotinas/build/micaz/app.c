#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 315
static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memset(void *arg_0x402a1ee8, int arg_0x402a6068, size_t arg_0x402a6200);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x402b7338, const void *arg_0x402b74d0);
# 23 "/opt/tinyos-2.1.1/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 78 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/chip_thread.h"
#line 44
typedef struct thread_regs {
  uint8_t status;
  uint8_t r0;
  uint8_t r1;
  uint8_t r2;
  uint8_t r3;
  uint8_t r4;
  uint8_t r5;
  uint8_t r6;
  uint8_t r7;
  uint8_t r8;
  uint8_t r9;
  uint8_t r10;
  uint8_t r11;
  uint8_t r12;
  uint8_t r13;
  uint8_t r14;
  uint8_t r15;
  uint8_t r16;
  uint8_t r17;
  uint8_t r18;
  uint8_t r19;
  uint8_t r20;
  uint8_t r21;
  uint8_t r22;
  uint8_t r23;
  uint8_t r24;
  uint8_t r25;
  uint8_t r26;
  uint8_t r27;
  uint8_t r28;
  uint8_t r29;
  uint8_t r30;
  uint8_t r31;
} thread_regs_t;

typedef uint16_t *stack_ptr_t;
# 42 "/opt/tinyos-2.1.1/tos/lib/coroutines/types/linked_list.h"
#line 39
typedef struct list_element {
  struct list_element *next;
  uint8_t *element_data;
} list_element_t;




#line 44
typedef struct linked_list {
  list_element_t *head;
  volatile uint8_t size;
} linked_list_t;
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/types/thread_queue.h"
#line 41
typedef struct thread_queue {
  linked_list_t l;
} thread_queue_t;
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/types/refcounter.h"
#line 42
typedef struct refcounter {
  uint8_t count;
  thread_queue_t thread_queue;
} refcounter_t;
# 42 "/opt/tinyos-2.1.1/tos/lib/coroutines/types/thread.h"
typedef uint8_t thread_id_t;
typedef uint8_t syscall_id_t;
typedef thread_id_t tosthread_t;










enum __nesc_unnamed4246 {



  TOSTHREAD_MAX_NUM_THREADS = 33, 

  TOSTHREAD_NUM_STATIC_THREADS = 3U, 
  TOSTHREAD_MAX_DYNAMIC_THREADS = TOSTHREAD_MAX_NUM_THREADS - TOSTHREAD_NUM_STATIC_THREADS, 
  TOSTHREAD_TOS_THREAD_ID = TOSTHREAD_MAX_NUM_THREADS, 
  TOSTHREAD_INVALID_THREAD_ID = TOSTHREAD_MAX_NUM_THREADS, 
  TOSTHREAD_PREEMPTION_PERIOD = 1000
};

enum __nesc_unnamed4247 {
  INVALID_ID = 0xFF, 
  SYSCALL_WAIT_ON_EVENT = 0
};

typedef struct syscall syscall_t;
typedef struct thread thread_t;
typedef struct init_block init_block_t;



struct init_block {
  void *globals;
  void (*init_ptr)(void *arg_0x403071a0);
  void *init_arg;
  refcounter_t thread_counter;
};


struct syscall {

  struct syscall *next_call;
  syscall_id_t id;
  thread_t *thread;
  void (*syscall_ptr)(struct syscall *arg_0x4030c010);
  void *params;
};


struct thread {

  volatile struct thread *next_thread;
  thread_id_t id;
  init_block_t *init_block;
  stack_ptr_t stack_ptr;
  volatile uint8_t state;
  volatile uint8_t mutex_count;
  uint8_t joinedOnMe[(TOSTHREAD_MAX_NUM_THREADS - 1) / 8 + 1];
  void (*start_ptr)(void *arg_0x4030b6e8);
  void *start_arg_ptr;
  syscall_t *syscall;
  thread_regs_t regs;
};

enum __nesc_unnamed4248 {
  TOSTHREAD_STATE_INACTIVE = 0, 
  TOSTHREAD_STATE_ACTIVE = 1, 
  TOSTHREAD_STATE_READY = 2, 
  TOSTHREAD_STATE_SUSPENDED = 3, 
  TOSTHREAD_STATE_BRIEFLYINTERRUPTED = 4
};
# 239 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4249 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 211 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4250 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 34 "/opt/tinyos-2.1.1/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4251 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4252 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4253 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4254 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4255 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4256 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4260 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4261 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4262 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4263 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4264 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4265 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4266 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4267 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4268 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4269 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4280 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4283 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4290 {

  uint8_t flat;
  struct __nesc_unnamed4291 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.1.1/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4292 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4293 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4294 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4295 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4296 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4297 {
  PLATFORM_MHZ = 8
};
# 56 "/opt/tinyos-2.1.1/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4298 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4299 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4300 {
  PLATFORM_BAUDRATE = 57600L
};
# 32 "/opt/tinyos-2.1.1/tos/types/Leds.h"
enum __nesc_unnamed4301 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/opt/tinyos-2.1.1/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4302 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE, 

  AM_OVERHEAD = 2
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4303 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/opt/tinyos-2.1.1/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4304 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4305 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.1.1/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4306 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4307 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4308 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 49 "/opt/tinyos-2.1.1/tos/platforms/micaz/platform_message.h"
#line 46
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 55
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.1/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4309 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 66
#line 54
typedef union __nesc_unnamed4310 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4311 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4312 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4313 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4314 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4315 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4316 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/types/syscall_queue.h"
#line 41
typedef struct syscall_queue {
  linked_list_t l;
} syscall_queue_t;
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/types/mutex.h"
#line 41
typedef struct mutex {
  bool lock;
  thread_queue_t thread_queue;
} mutex_t;
enum HilTimerMilliC____nesc_unnamed4317 {
  HilTimerMilliC__TIMER_COUNT = 1U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TMilli /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__precision_tag;
typedef /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__precision_tag /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__precision_tag;
typedef /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__precision_tag /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__precision_tag;
typedef TMilli ThreadSleepP__TimerMilli__precision_tag;
typedef TMicro BenchmarkC__Timer__precision_tag;
typedef uint32_t BenchmarkC__Timer__size_type;
enum /*BenchmarkAppC.Produtor*/CoroutineC__0____nesc_unnamed4318 {
  CoroutineC__0__THREAD_ID = 0U
};
enum /*BenchmarkAppC.Consumidor*/CoroutineC__1____nesc_unnamed4319 {
  CoroutineC__1__THREAD_ID = 1U
};
enum /*BenchmarkAppC.SerialSender*/CoroutineC__2____nesc_unnamed4320 {
  CoroutineC__2__THREAD_ID = 2U
};
typedef uint16_t HplAtm128Timer3P__CompareA__size_type;
typedef uint16_t HplAtm128Timer3P__Capture__size_type;
typedef uint16_t HplAtm128Timer3P__CompareB__size_type;
typedef uint16_t HplAtm128Timer3P__CompareC__size_type;
typedef uint16_t HplAtm128Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__size_type;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
enum /*BlockingSerialActiveMessageC.BlockingStdControlC*/BlockingStdControlC__0____nesc_unnamed4321 {
  BlockingStdControlC__0__CLIENT_ID = 0U
};
typedef TMilli /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Timer__precision_tag;
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void TinyOSMainP__TinyOSBoot__booted(void );
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *TinyOSMainP__ThreadInfo__get(void );
#line 39
static error_t TinyOSMainP__ThreadInfo__reset(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SchedulerBasicP.nc"
uint8_t arg_0x4038b4a8);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SchedulerBasicP.nc"
uint8_t arg_0x4038b4a8);
# 62 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/TaskScheduler.nc"
static bool SchedulerBasicP__TaskScheduler__hasTasks(void );
#line 47
static void SchedulerBasicP__TaskScheduler__init(void );
#line 69
static void SchedulerBasicP__TaskScheduler__taskLoop(void );
#line 55
static bool SchedulerBasicP__TaskScheduler__runNextTask(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 72 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void LedsP__Leds__led1Toggle(void );
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
static error_t TinyThreadSchedulerP__ThreadScheduler__suspendCurrentThread(void );
#line 39
static uint8_t TinyThreadSchedulerP__ThreadScheduler__currentThreadId(void );
static thread_t *TinyThreadSchedulerP__ThreadScheduler__currentThreadInfo(void );



static error_t TinyThreadSchedulerP__ThreadScheduler__startThread(thread_id_t id);
#line 41
static thread_t *TinyThreadSchedulerP__ThreadScheduler__threadInfo(thread_id_t id);

static error_t TinyThreadSchedulerP__ThreadScheduler__initThread(thread_id_t id);





static error_t TinyThreadSchedulerP__ThreadScheduler__brieflyInterruptCurrentThread(void );

static error_t TinyThreadSchedulerP__ThreadScheduler__wakeupThread(thread_id_t id);
#line 48
static error_t TinyThreadSchedulerP__ThreadScheduler__interruptCurrentThread(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void TinyThreadSchedulerP__ThreadSchedulerBoot__booted(void );
# 29 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BitArrayUtils.nc"
static void BitArrayUtilsC__BitArrayUtils__clrArray(uint8_t *array, uint8_t numBytes);
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
static error_t LinkedListC__LinkedList__addLast(linked_list_t *l, list_element_t *e);









static list_element_t *LinkedListC__LinkedList__removeAt(linked_list_t *l, uint8_t i);
#line 39
static void LinkedListC__LinkedList__init(linked_list_t *l);


static error_t LinkedListC__LinkedList__addAt(linked_list_t *l, list_element_t *e, uint8_t i);
static error_t LinkedListC__LinkedList__addFirst(linked_list_t *l, list_element_t *e);









static list_element_t *LinkedListC__LinkedList__remove(linked_list_t *l, list_element_t *e);
#line 50
static list_element_t *LinkedListC__LinkedList__getAfter(linked_list_t *l, list_element_t *e);





static list_element_t *LinkedListC__LinkedList__removeLast(linked_list_t *l);
#line 48
static list_element_t *LinkedListC__LinkedList__getFirst(linked_list_t *l);






static list_element_t *LinkedListC__LinkedList__removeFirst(linked_list_t *l);
#line 41
static uint8_t LinkedListC__LinkedList__size(linked_list_t *l);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
static void ThreadQueueP__ThreadQueue__enqueue(thread_queue_t *q, thread_t *t);


static bool ThreadQueueP__ThreadQueue__isEmpty(thread_queue_t *q);
#line 39
static void ThreadQueueP__ThreadQueue__init(thread_queue_t *q);

static thread_t *ThreadQueueP__ThreadQueue__dequeue(thread_queue_t *q);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadNotification.nc"
static void StaticThreadP__ThreadNotification__default__justCreated(
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405be4d8);
# 38 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadNotification.nc"
static void StaticThreadP__ThreadNotification__default__aboutToDestroy(
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405be4d8);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
static error_t StaticThreadP__Coroutine__yield(
# 38 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405c27a8);
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
static void StaticThreadP__Coroutine__default__run(
# 38 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405c27a8, 
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
void *arg);
#line 37
static error_t StaticThreadP__Coroutine__start(
# 38 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405c27a8, 
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
void *arg);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
static void StaticThreadP__ThreadCleanup__cleanup(
# 46 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405cc3c8);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadFunction.nc"
static void StaticThreadP__ThreadFunction__signalThreadRun(
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405cece8, 
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadFunction.nc"
void *arg);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *StaticThreadP__ThreadInfo__default__get(
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405ce580);
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static error_t StaticThreadP__ThreadInfo__default__reset(
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405ce580);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
static void ThreadMapP__DynamicThreadCleanup__default__cleanup(
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e4148);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *ThreadMapP__StaticThreadInfo__default__get(
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e48b0);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
static void ThreadMapP__ThreadCleanup__cleanup(
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e3868);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
static void ThreadMapP__StaticThreadCleanup__default__cleanup(
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e6988);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *ThreadMapP__DynamicThreadInfo__default__get(
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e3108);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *ThreadMapP__ThreadInfo__get(
# 38 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e6148);
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP__Timer__timer_size HplAtm128Timer0AsyncP__Timer__get(void );
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/PlatformInterrupt.nc"
static void TOSThreadsInterruptP__PlatformInterrupt__postAmble(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 125
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406e1708);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406e1708);
# 118 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406e1708, 
# 118 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406e1708);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__fired(void );
#line 62
static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__startOneShot(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406e1708, 
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__stop(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406e1708);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ThreadSleepP__TimerMilli__fired(
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadSleepP.nc"
uint8_t arg_0x40724300);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
static error_t SystemCallP__SystemCall__finish(syscall_t *s);
#line 39
static error_t SystemCallP__SystemCall__start(void *syscall_ptr, syscall_t *s, syscall_id_t id, void *params);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SystemCallP__threadTask__runTask(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
static void BenchmarkC__Produtor__run(void *arg);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void BenchmarkC__Boot__booted(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
static void BenchmarkC__Consumidor__run(void *arg);
#line 43
static void BenchmarkC__SerialSender__run(void *arg);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void BenchmarkC__Timer__overflow(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__Init__init(void );
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t */*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadInfo__get(void );
#line 39
static error_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadInfo__reset(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__Init__init(void );
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t */*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadInfo__get(void );
#line 39
static error_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadInfo__reset(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__Init__init(void );
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t */*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadInfo__get(void );
#line 39
static error_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadInfo__reset(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static Atm128_ETIFR_t HplAtm128Timer3P__TimerCtrl__getInterruptFlag(void );
#line 41
static void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__default__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P__Capture__default__captured(HplAtm128Timer3P__Capture__size_type t);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__default__fired(void );
#line 49
static void HplAtm128Timer3P__CompareC__default__fired(void );
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer3P__Timer__test(void );
#line 52
static HplAtm128Timer3P__Timer__timer_size HplAtm128Timer3P__Timer__get(void );
#line 95
static void HplAtm128Timer3P__Timer__setScale(uint8_t scale);
#line 58
static void HplAtm128Timer3P__Timer__set(HplAtm128Timer3P__Timer__timer_size t);










static void HplAtm128Timer3P__Timer__start(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
#line 53
static /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__get(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 36 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x4085baf0, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static 
#line 112
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40873548, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 136 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 132
message_t * amsg);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 64
static void SerialP__RunTx__runTask(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 38
static void SerialP__SerialFlush__default__flush(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 83 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 74
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 60 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 51
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092b810, 
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092b810, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 39 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092b1d0, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092a398, 
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092a398);
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092a398, 
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 70 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 51 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 45 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 68
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 54
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 74
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void BlockingStdControlImplP__SplitControl__startDone(
# 42 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
uint8_t arg_0x40a0b0c0, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
error_t error);
#line 117
static void BlockingStdControlImplP__SplitControl__stopDone(
# 42 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
uint8_t arg_0x40a0b0c0, 
# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
error_t error);
#line 83
static error_t BlockingStdControlImplP__SplitControl__default__start(
# 42 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
uint8_t arg_0x40a0b0c0);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t BlockingStdControlImplP__Init__init(void );
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BlockingStdControl.nc"
static error_t BlockingStdControlImplP__BlockingStdControl__start(
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
uint8_t arg_0x40a0e908);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCallQueue.nc"
static void SystemCallQueueP__SystemCallQueue__enqueue(syscall_queue_t *q, syscall_t *t);
#line 40
static void SystemCallQueueP__SystemCallQueue__init(syscall_queue_t *q);


static syscall_t *SystemCallQueueP__SystemCallQueue__remove(syscall_queue_t *q, syscall_t *t);

static syscall_t *SystemCallQueueP__SystemCallQueue__find(syscall_queue_t *q, syscall_id_t id);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Init__init(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Receive__receive(
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMReceiverImplP.nc"
uint8_t arg_0x40a60010, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Timer__fired(
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMReceiverImplP.nc"
uint8_t arg_0x40a40a70);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__AMSend__sendDone(
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMSenderImplP.nc"
am_id_t arg_0x40a77380, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Init__init(void );
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BlockingAMSend.nc"
static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__BlockingAMSend__send(
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMSenderImplP.nc"
am_id_t arg_0x40a7bed8, 
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BlockingAMSend.nc"
am_addr_t addr, message_t *msg, uint8_t len);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Mutex.nc"
static error_t MutexP__Mutex__unlock(mutex_t *m);
#line 40
static error_t MutexP__Mutex__lock(mutex_t *m);
#line 39
static void MutexP__Mutex__init(mutex_t *m);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 42 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 30
static void MotePlatformP__SerialIdPin__clr(void );
# 26 "/opt/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
# 33 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4322 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 120
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t TinyOSMainP__SoftwareInit__init(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void TinyOSMainP__Boot__booted(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t TinyOSMainP__PlatformInit__init(void );
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/TaskScheduler.nc"
static void TinyOSMainP__TaskScheduler__init(void );
#line 69
static void TinyOSMainP__TaskScheduler__taskLoop(void );
#line 55
static bool TinyOSMainP__TaskScheduler__runNextTask(void );
# 65 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyOSMainP.nc"
thread_t TinyOSMainP__thread_info;

static inline void TinyOSMainP__TinyOSBoot__booted(void );
#line 103
static inline error_t TinyOSMainP__ThreadInfo__reset(void );



static inline thread_t *TinyOSMainP__ThreadInfo__get(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void RealMainImplP__ThreadSchedulerBoot__booted(void );
# 49 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/RealMainImplP.nc"
int main(void )   ;
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
static error_t SchedulerBasicP__ThreadScheduler__suspendCurrentThread(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SchedulerBasicP.nc"
uint8_t arg_0x4038b4a8);




enum SchedulerBasicP____nesc_unnamed4323 {
  SchedulerBasicP__NUM_TASKS = 10U, 
  SchedulerBasicP__NO_TASK = 255
};

volatile uint8_t SchedulerBasicP__m_head;
volatile uint8_t SchedulerBasicP__m_tail;
volatile uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 83
static inline bool SchedulerBasicP__isWaiting(uint8_t id);



static inline bool SchedulerBasicP__TaskScheduler__hasTasks(void );



static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 108
static inline void SchedulerBasicP__TaskScheduler__init(void );







static bool SchedulerBasicP__TaskScheduler__runNextTask(void );
#line 128
static inline void SchedulerBasicP__TaskScheduler__taskLoop(void );
#line 145
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);



static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 58 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 97
static inline void McuSleepC__McuSleep__sleep(void );
#line 110
static inline void McuSleepC__McuPowerState__update(void );
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 88
static inline void LedsP__Leds__led1Toggle(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void TinyThreadSchedulerP__TinyOSBoot__booted(void );
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
static void TinyThreadSchedulerP__ThreadQueue__enqueue(thread_queue_t *q, thread_t *t);


static bool TinyThreadSchedulerP__ThreadQueue__isEmpty(thread_queue_t *q);
#line 39
static void TinyThreadSchedulerP__ThreadQueue__init(thread_queue_t *q);

static thread_t *TinyThreadSchedulerP__ThreadQueue__dequeue(thread_queue_t *q);
# 29 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BitArrayUtils.nc"
static void TinyThreadSchedulerP__BitArrayUtils__clrArray(uint8_t *array, uint8_t numBytes);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
static void TinyThreadSchedulerP__ThreadCleanup__cleanup(
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
uint8_t arg_0x404e2250);
# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
static void TinyThreadSchedulerP__McuSleep__sleep(void );
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *TinyThreadSchedulerP__ThreadInfo__get(
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
uint8_t arg_0x404e2d18);









thread_t *TinyThreadSchedulerP__current_thread;

thread_t *TinyThreadSchedulerP__tos_thread;

thread_t *TinyThreadSchedulerP__yielding_thread;

thread_t *TinyThreadSchedulerP__briefly_interrupted_thread;

uint8_t TinyThreadSchedulerP__num_runnable_threads;

thread_queue_t TinyThreadSchedulerP__ready_queue;
#line 88
static void TinyThreadSchedulerP__switchThreads(void ) __attribute((noinline)) ;


static void TinyThreadSchedulerP__restoreThread(void ) __attribute((noinline)) ;









static void TinyThreadSchedulerP__sleepWhileIdle(void );
#line 115
static void TinyThreadSchedulerP__scheduleNextThread(void );
#line 133
static void TinyThreadSchedulerP__interrupt(thread_t *thread);
#line 147
static inline void TinyThreadSchedulerP__suspend(thread_t *thread);
#line 160
static inline void TinyThreadSchedulerP__wakeupJoined(thread_t *t);
#line 182
static inline void TinyThreadSchedulerP__stop(thread_t *t);
#line 199
static void TinyThreadSchedulerP__threadWrapper(void ) __attribute((noinline)) __attribute((naked)) ;
#line 214
static inline void TinyThreadSchedulerP__ThreadSchedulerBoot__booted(void );
#line 228
static inline error_t TinyThreadSchedulerP__ThreadScheduler__initThread(uint8_t id);








static inline error_t TinyThreadSchedulerP__ThreadScheduler__startThread(uint8_t id);
#line 270
static error_t TinyThreadSchedulerP__ThreadScheduler__suspendCurrentThread(void );










static error_t TinyThreadSchedulerP__ThreadScheduler__interruptCurrentThread(void );
#line 294
static inline error_t TinyThreadSchedulerP__ThreadScheduler__brieflyInterruptCurrentThread(void );
#line 324
static error_t TinyThreadSchedulerP__ThreadScheduler__wakeupThread(uint8_t id);
#line 342
static inline uint8_t TinyThreadSchedulerP__ThreadScheduler__currentThreadId(void );



static thread_t *TinyThreadSchedulerP__ThreadScheduler__threadInfo(uint8_t id);



static inline thread_t *TinyThreadSchedulerP__ThreadScheduler__currentThreadInfo(void );
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BitArrayUtilsC.nc"
static inline void BitArrayUtilsC__BitArrayUtils__clrArray(uint8_t *array, uint8_t size);
# 42 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static list_element_t *LinkedListC__get_elementAt(linked_list_t *l, uint8_t i);
#line 54
static inline list_element_t *LinkedListC__get_element(linked_list_t *l, list_element_t *e);








static inline list_element_t *LinkedListC__get_element_before(linked_list_t *l, list_element_t *e);
#line 84
static error_t LinkedListC__insert_element(linked_list_t *l, list_element_t **previous_next, list_element_t *e);







static list_element_t *LinkedListC__remove_element(linked_list_t *l, list_element_t **previous_next);







static inline void LinkedListC__LinkedList__init(linked_list_t *l);










static inline uint8_t LinkedListC__LinkedList__size(linked_list_t *l);


static inline error_t LinkedListC__LinkedList__addFirst(linked_list_t *l, list_element_t *e);


static list_element_t *LinkedListC__LinkedList__getFirst(linked_list_t *l);



static inline list_element_t *LinkedListC__LinkedList__removeFirst(linked_list_t *l);



static inline error_t LinkedListC__LinkedList__addLast(linked_list_t *l, list_element_t *e);





static inline list_element_t *LinkedListC__LinkedList__removeLast(linked_list_t *l);


static inline error_t LinkedListC__LinkedList__addAt(linked_list_t *l, list_element_t *e, uint8_t i);
#line 148
static list_element_t *LinkedListC__LinkedList__removeAt(linked_list_t *l, uint8_t i);
#line 171
static list_element_t *LinkedListC__LinkedList__getAfter(linked_list_t *l, list_element_t *e);










static list_element_t *LinkedListC__LinkedList__remove(linked_list_t *l, list_element_t *e);
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
static void ThreadQueueP__LinkedList__init(linked_list_t *l);



static error_t ThreadQueueP__LinkedList__addFirst(linked_list_t *l, list_element_t *e);
#line 56
static list_element_t *ThreadQueueP__LinkedList__removeLast(linked_list_t *l);
#line 41
static uint8_t ThreadQueueP__LinkedList__size(linked_list_t *l);
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadQueueP.nc"
static inline void ThreadQueueP__ThreadQueue__init(thread_queue_t *q);


static inline void ThreadQueueP__ThreadQueue__enqueue(thread_queue_t *q, thread_t *t);


static inline thread_t *ThreadQueueP__ThreadQueue__dequeue(thread_queue_t *q);





static inline bool ThreadQueueP__ThreadQueue__isEmpty(thread_queue_t *q);
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
static error_t StaticThreadP__ThreadScheduler__startThread(thread_id_t id);
#line 43
static error_t StaticThreadP__ThreadScheduler__initThread(thread_id_t id);




static error_t StaticThreadP__ThreadScheduler__interruptCurrentThread(void );
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadNotification.nc"
static void StaticThreadP__ThreadNotification__justCreated(
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405be4d8);
# 38 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadNotification.nc"
static void StaticThreadP__ThreadNotification__aboutToDestroy(
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405be4d8);
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
static void StaticThreadP__Coroutine__run(
# 38 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405c27a8, 
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
void *arg);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *StaticThreadP__ThreadInfo__get(
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405ce580);
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static error_t StaticThreadP__ThreadInfo__reset(
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
uint8_t arg_0x405ce580);







static inline error_t StaticThreadP__init(uint8_t id, void *arg);










static error_t StaticThreadP__Coroutine__start(uint8_t id, void *arg);
#line 89
static inline error_t StaticThreadP__Coroutine__yield(uint8_t id);
#line 101
static inline void StaticThreadP__ThreadFunction__signalThreadRun(uint8_t id, void *arg);



static inline void StaticThreadP__ThreadCleanup__cleanup(uint8_t id);



static inline void StaticThreadP__Coroutine__default__run(uint8_t id, void *arg);
static inline thread_t *StaticThreadP__ThreadInfo__default__get(uint8_t id);
static inline error_t StaticThreadP__ThreadInfo__default__reset(uint8_t id);
static inline void StaticThreadP__ThreadNotification__default__justCreated(uint8_t id);
static inline void StaticThreadP__ThreadNotification__default__aboutToDestroy(uint8_t id);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
static void ThreadMapP__DynamicThreadCleanup__cleanup(
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e4148);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *ThreadMapP__StaticThreadInfo__get(
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e48b0);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
static void ThreadMapP__StaticThreadCleanup__cleanup(
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e6988);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *ThreadMapP__DynamicThreadInfo__get(
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
uint8_t arg_0x405e3108);





static inline thread_t *ThreadMapP__ThreadInfo__get(uint8_t id);





static thread_t *ThreadMapP__StaticThreadInfo__default__get(uint8_t id);





static inline thread_t *ThreadMapP__DynamicThreadInfo__default__get(uint8_t id);





static inline void ThreadMapP__ThreadCleanup__cleanup(uint8_t id);


static inline void ThreadMapP__StaticThreadCleanup__default__cleanup(uint8_t id);


static void ThreadMapP__DynamicThreadCleanup__default__cleanup(uint8_t id);
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4324 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/PlatformInterrupt.nc"
static void HplAtm128Timer0AsyncP__PlatformInterrupt__postAmble(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 51 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void );
#line 77
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 95
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 123
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void );


static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 156
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 179
void __vector_15(void ) __attribute((signal))   ;






void __vector_16(void ) __attribute((signal))   ;
#line 201
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
static uint8_t TOSThreadsInterruptP__ThreadScheduler__currentThreadId(void );









static error_t TOSThreadsInterruptP__ThreadScheduler__brieflyInterruptCurrentThread(void );

static error_t TOSThreadsInterruptP__ThreadScheduler__wakeupThread(thread_id_t id);
# 62 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/TaskScheduler.nc"
static bool TOSThreadsInterruptP__TaskScheduler__hasTasks(void );
# 48 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TOSThreadsInterruptP.nc"
static void TOSThreadsInterruptP__interruptThread(void ) __attribute((noinline)) ;







static __inline void TOSThreadsInterruptP__PlatformInterrupt__postAmble(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4325 {
#line 63
  AlarmToTimerC__0__fired = 0U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406e1708);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4326 {
#line 60
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4327 {

  VirtualizeTimerC__0__NUM_TIMERS = 1, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4328 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 153
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 173
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt);




static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__postTask(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__getNow(void );
#line 118
static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__stop(void );




static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406e1708);
#line 60
enum /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1____nesc_unnamed4329 {
#line 60
  VirtualizeTimerC__1__updateFromTimer = 2U
};
#line 60
typedef int /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1____nesc_sillytask_updateFromTimer[/*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer];
#line 42
enum /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1____nesc_unnamed4330 {

  VirtualizeTimerC__1__NUM_TIMERS = 33, 
  VirtualizeTimerC__1__END_OF_LIST = 255
};








#line 48
typedef struct /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1____nesc_unnamed4331 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer_t;

/*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer_t /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__m_timers[/*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__NUM_TIMERS];




static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__fireTimers(uint32_t now);
#line 89
static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__runTask(void );
#line 128
static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__fired(void );




static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 148
static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__stop(uint8_t num);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
static thread_t *ThreadSleepP__ThreadScheduler__threadInfo(thread_id_t id);
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void ThreadSleepP__TimerMilli__startOneShot(
# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadSleepP.nc"
uint8_t arg_0x40724300, 
# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
static error_t ThreadSleepP__SystemCall__finish(syscall_t *s);
# 50 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadSleepP.nc"
#line 48
typedef struct ThreadSleepP__sleep_params {
  uint32_t *milli;
} ThreadSleepP__sleep_params_t;

static inline void ThreadSleepP__sleepTask(syscall_t *s);
#line 76
static inline void ThreadSleepP__TimerMilli__fired(uint8_t id);
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
static error_t SystemCallP__ThreadScheduler__suspendCurrentThread(void );
#line 40
static thread_t *SystemCallP__ThreadScheduler__currentThreadInfo(void );










static error_t SystemCallP__ThreadScheduler__wakeupThread(thread_id_t id);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SystemCallP__threadTask__postTask(void );
# 48 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SystemCallP.nc"
enum SystemCallP____nesc_unnamed4332 {
#line 48
  SystemCallP__threadTask = 3U
};
#line 48
typedef int SystemCallP____nesc_sillytask_threadTask[SystemCallP__threadTask];
#line 46
syscall_t *SystemCallP__current_call = (void *)0;

static inline void SystemCallP__threadTask__runTask(void );
#line 63
static error_t SystemCallP__SystemCall__start(void *syscall_ptr, syscall_t *s, syscall_id_t id, void *p);
#line 82
static inline error_t SystemCallP__SystemCall__finish(syscall_t *s);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
static error_t BenchmarkC__Produtor__yield(void );
#line 37
static error_t BenchmarkC__Produtor__start(void *arg);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BlockingStdControl.nc"
static error_t BenchmarkC__AMControl__start(void );
# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static 
#line 112
void * 


BenchmarkC__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
static error_t BenchmarkC__Consumidor__yield(void );
#line 37
static error_t BenchmarkC__Consumidor__start(void *arg);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BlockingAMSend.nc"
static error_t BenchmarkC__BlockingAMSend__send(am_addr_t addr, message_t *msg, uint8_t len);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
static error_t BenchmarkC__SerialSender__start(void *arg);
# 72 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void BenchmarkC__Leds__led1Toggle(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static BenchmarkC__Timer__size_type BenchmarkC__Timer__get(void );
# 18 "BenchmarkC.nc"
uint32_t BenchmarkC__t1;
uint32_t *BenchmarkC__tempo;
uint8_t BenchmarkC__buffer;

static inline void BenchmarkC__Timer__overflow(void );


static inline void BenchmarkC__Boot__booted(void );







static void BenchmarkC__SerialSender__run(void *arg);
#line 56
static void BenchmarkC__Produtor__run(void *arg);
#line 72
static void BenchmarkC__Consumidor__run(void *arg);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadFunction.nc"
static void /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadFunction__signalThreadRun(void *arg);
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadInfoP.nc"
uint8_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__stack[800];
thread_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info;

static void /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__run_thread(void *arg) __attribute((noinline)) ;



static error_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__init(void );
#line 67
static inline error_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__Init__init(void );



static inline error_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadInfo__reset(void );



static inline thread_t */*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadInfo__get(void );
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadFunction.nc"
static void /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadFunction__signalThreadRun(void *arg);
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadInfoP.nc"
uint8_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__stack[800];
thread_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info;

static void /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__run_thread(void *arg) __attribute((noinline)) ;



static error_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__init(void );
#line 67
static inline error_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__Init__init(void );



static inline error_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadInfo__reset(void );



static inline thread_t */*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadInfo__get(void );
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadFunction.nc"
static void /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadFunction__signalThreadRun(void *arg);
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadInfoP.nc"
uint8_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__stack[800];
thread_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info;

static void /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__run_thread(void *arg) __attribute((noinline)) ;



static error_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__init(void );
#line 67
static inline error_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__Init__init(void );



static inline error_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadInfo__reset(void );



static inline thread_t */*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadInfo__get(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t);
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/PlatformInterrupt.nc"
static void HplAtm128Timer3P__PlatformInterrupt__postAmble(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__fired(void );
#line 49
static void HplAtm128Timer3P__CompareC__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P__Timer__overflow(void );
# 48 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__Timer__get(void );


static inline void HplAtm128Timer3P__Timer__set(uint16_t t);








static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x);
#line 107
static inline Atm128_ETIFR_t HplAtm128Timer3P__TimerCtrl__getInterruptFlag(void );
#line 128
static inline void HplAtm128Timer3P__Timer__start(void );
#line 140
static inline bool HplAtm128Timer3P__Timer__test(void );
#line 189
static inline void HplAtm128Timer3P__CompareA__default__fired(void );
void __vector_26(void ) __attribute((interrupt))   ;



static inline void HplAtm128Timer3P__CompareB__default__fired(void );
void __vector_27(void ) __attribute((interrupt))   ;



static inline void HplAtm128Timer3P__CompareC__default__fired(void );
void __vector_28(void ) __attribute((interrupt))   ;



static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time);
void __vector_25(void ) __attribute((interrupt))   ;




void __vector_29(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 58
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 52
static /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 56 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__0____nesc_unnamed4333 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__get(void );
#line 122
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 36 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x4085baf0, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40873548, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__ReceiveDefault__receive(
# 38 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40873c38, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 86
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 120
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 161
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 117
static void SerialP__SplitControl__stopDone(error_t error);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 38 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 45 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 68
static void SerialP__SerialFrameComm__resetReceive(void );
#line 54
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 70 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 51 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 189 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4334 {
#line 189
  SerialP__RunTx = 4U
};
#line 189
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 320
enum SerialP____nesc_unnamed4335 {
#line 320
  SerialP__startDoneTask = 5U
};
#line 320
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];





enum SerialP____nesc_unnamed4336 {
#line 326
  SerialP__stopDoneTask = 6U
};
#line 326
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4337 {
#line 335
  SerialP__defaultSerialFlushTask = 7U
};
#line 335
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 79
enum SerialP____nesc_unnamed4338 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4339 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4340 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 109
typedef enum SerialP____nesc_unnamed4341 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4342 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP____nesc_unnamed4343 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 128
typedef struct SerialP____nesc_unnamed4344 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 133
typedef struct SerialP____nesc_unnamed4345 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 205
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 232
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 295
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );





static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );




static void SerialP__testOff(void );
#line 384
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 502
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 539
static inline void SerialP__RunTx__runTask(void );
#line 642
static inline void SerialP__SerialFrameComm__putDone(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092b810, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 39 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092b1d0, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092a398, 
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092a398);
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x4092a398, 
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 60 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 51
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 147 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4346 {
#line 147
  SerialDispatcherP__0__signalSendDone = 8U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4347 {
#line 264
  SerialDispatcherP__0__receiveTask = 9U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4348 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4349 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4350 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 147
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 167
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 183
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 233
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 264
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 285
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 347
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 83 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 74
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 47 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC____nesc_unnamed4351 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 86
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );





static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 104
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/PlatformInterrupt.nc"
static void HplAtm128UartP__PlatformInterrupt__postAmble(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 88 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 108
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 165
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_18(void ) __attribute((signal))   ;






void __vector_20(void ) __attribute((interrupt))   ;




static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 268
void __vector_30(void ) __attribute((signal))   ;





void __vector_32(void ) __attribute((interrupt))   ;






static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t BlockingStdControlImplP__SplitControl__start(
# 42 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
uint8_t arg_0x40a0b0c0);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
static error_t BlockingStdControlImplP__SystemCall__finish(syscall_t *s);
#line 39
static error_t BlockingStdControlImplP__SystemCall__start(void *syscall_ptr, syscall_t *s, syscall_id_t id, void *params);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCallQueue.nc"
static void BlockingStdControlImplP__SystemCallQueue__enqueue(syscall_queue_t *q, syscall_t *t);
#line 40
static void BlockingStdControlImplP__SystemCallQueue__init(syscall_queue_t *q);


static syscall_t *BlockingStdControlImplP__SystemCallQueue__remove(syscall_queue_t *q, syscall_t *t);

static syscall_t *BlockingStdControlImplP__SystemCallQueue__find(syscall_queue_t *q, syscall_id_t id);
# 53 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
#line 51
typedef struct BlockingStdControlImplP__params {
  error_t error;
} BlockingStdControlImplP__params_t;

syscall_queue_t BlockingStdControlImplP__std_cntrl_queue;

static inline error_t BlockingStdControlImplP__Init__init(void );





static inline void BlockingStdControlImplP__startTask(syscall_t *s);






static inline error_t BlockingStdControlImplP__BlockingStdControl__start(uint8_t id);
#line 87
static inline void BlockingStdControlImplP__SplitControl__startDone(uint8_t id, error_t error);
#line 119
static inline void BlockingStdControlImplP__SplitControl__stopDone(uint8_t id, error_t error);





static inline error_t BlockingStdControlImplP__SplitControl__default__start(uint8_t id);
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
static error_t SystemCallQueueP__LinkedList__addLast(linked_list_t *l, list_element_t *e);
#line 39
static void SystemCallQueueP__LinkedList__init(linked_list_t *l);
#line 53
static list_element_t *SystemCallQueueP__LinkedList__remove(linked_list_t *l, list_element_t *e);
#line 50
static list_element_t *SystemCallQueueP__LinkedList__getAfter(linked_list_t *l, list_element_t *e);
#line 48
static list_element_t *SystemCallQueueP__LinkedList__getFirst(linked_list_t *l);
# 46 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SystemCallQueueP.nc"
static inline void SystemCallQueueP__SystemCallQueue__init(syscall_queue_t *q);


static inline void SystemCallQueueP__SystemCallQueue__enqueue(syscall_queue_t *q, syscall_t *s);






static inline syscall_t *SystemCallQueueP__SystemCallQueue__remove(syscall_queue_t *q, syscall_t *s);


static syscall_t *SystemCallQueueP__SystemCallQueue__find(syscall_queue_t *q, uint8_t id);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
static thread_t */*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__ThreadScheduler__threadInfo(thread_id_t id);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
static error_t /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCall__finish(syscall_t *s);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCallQueue.nc"
static void /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCallQueue__init(syscall_queue_t *q);




static syscall_t */*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCallQueue__find(syscall_queue_t *q, syscall_id_t id);
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Timer__stop(
# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMReceiverImplP.nc"
uint8_t arg_0x40a40a70);
#line 58
#line 54
typedef struct /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__params {
  uint32_t *timeout;
  message_t *msg;
  error_t error;
} /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__params_t;


syscall_queue_t /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__am_queue;


bool /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__blockForAny = FALSE;






static inline error_t /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Init__init(void );
#line 133
static inline message_t */*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Receive__receive(uint8_t am_id, message_t *m, void *payload, uint8_t len);
#line 153
static inline void /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Timer__fired(uint8_t id);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__SystemCall__finish(syscall_t *s);
#line 39
static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__SystemCall__start(void *syscall_ptr, syscall_t *s, syscall_id_t id, void *params);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__AMSend__send(
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMSenderImplP.nc"
am_id_t arg_0x40a77380, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Mutex.nc"
static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Mutex__unlock(mutex_t *m);
#line 40
static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Mutex__lock(mutex_t *m);
#line 39
static void /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Mutex__init(mutex_t *m);
# 57 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMSenderImplP.nc"
#line 52
typedef struct /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__params {
  am_addr_t addr;
  message_t *msg;
  uint8_t len;
  error_t error;
} /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__params_t;

syscall_t */*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__send_call = (void *)0;
mutex_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__my_mutex;

static inline void /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__sendTask(syscall_t *s);






static inline error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Init__init(void );




static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__BlockingAMSend__send(am_id_t am_id, am_addr_t addr, message_t *msg, uint8_t len);
#line 104
static inline void /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__AMSend__sendDone(am_id_t am_id, message_t *m, error_t error);
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
static error_t MutexP__ThreadScheduler__suspendCurrentThread(void );
#line 40
static thread_t *MutexP__ThreadScheduler__currentThreadInfo(void );










static error_t MutexP__ThreadScheduler__wakeupThread(thread_id_t id);
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
static void MutexP__ThreadQueue__enqueue(thread_queue_t *q, thread_t *t);
#line 39
static void MutexP__ThreadQueue__init(thread_queue_t *q);

static thread_t *MutexP__ThreadQueue__dequeue(thread_queue_t *q);
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/MutexP.nc"
static inline void MutexP__Mutex__init(mutex_t *m);




static inline error_t MutexP__Mutex__lock(mutex_t *m);
#line 67
static inline error_t MutexP__Mutex__unlock(mutex_t *m);
# 86 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli");}

#line 103
#line 102
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t SchedulerBasicP__ThreadScheduler__suspendCurrentThread(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__suspendCurrentThread();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 68 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
#line 68
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) {
      uint8_t id = SchedulerBasicP__m_head;

#line 71
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 128
static inline void SchedulerBasicP__TaskScheduler__taskLoop(void )
#line 128
{
  for (; ; ) {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 132
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) {
              SchedulerBasicP__ThreadScheduler__suspendCurrentThread();
            }
        }
#line 136
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 69 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/TaskScheduler.nc"
inline static void TinyOSMainP__TaskScheduler__taskLoop(void ){
#line 69
  SchedulerBasicP__TaskScheduler__taskLoop();
#line 69
}
#line 69
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
inline static error_t BenchmarkC__Consumidor__start(void *arg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = StaticThreadP__Coroutine__start(/*BenchmarkAppC.Consumidor*/CoroutineC__1__THREAD_ID, arg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
inline static error_t BenchmarkC__Produtor__start(void *arg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = StaticThreadP__Coroutine__start(/*BenchmarkAppC.Produtor*/CoroutineC__0__THREAD_ID, arg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static BenchmarkC__Timer__size_type BenchmarkC__Timer__get(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 25 "BenchmarkC.nc"
static inline void BenchmarkC__Boot__booted(void )
#line 25
{
  BenchmarkC__buffer = 0;
  BenchmarkC__t1 = BenchmarkC__Timer__get();

  BenchmarkC__Produtor__start((void *)0);
  BenchmarkC__Consumidor__start((void *)0);
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void TinyOSMainP__Boot__booted(void ){
#line 49
  BenchmarkC__Boot__booted();
#line 49
}
#line 49
# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei");}

# 55 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/TaskScheduler.nc"
inline static bool TinyOSMainP__TaskScheduler__runNextTask(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = SchedulerBasicP__TaskScheduler__runNextTask();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 58 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 123 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 123
{
#line 123
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 56
  HplAtm128Timer0AsyncP__Compare__start();
#line 56
}
#line 56
# 136 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 136
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 45
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 45
}
#line 45
# 77 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 77
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP__TimerCtrl__setControl(control);
#line 37
}
#line 37
# 201 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 201
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 67 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadInfoP.nc"
static inline error_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__Init__init(void )
#line 67
{
  return /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__init();
}

#line 67
static inline error_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__Init__init(void )
#line 67
{
  return /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__init();
}

#line 67
static inline error_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__Init__init(void )
#line 67
{
  return /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__init();
}

# 214 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 214
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 205
static __inline void SerialP__rxInit(void )
#line 205
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_NOSYNC;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 193
static __inline void SerialP__txInit(void )
#line 193
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 195
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_IDLE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 218
static inline error_t SerialP__Init__init(void )
#line 218
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 120 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 184 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 184
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 88
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 88
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 100 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static inline void LinkedListC__LinkedList__init(linked_list_t *l)
#line 100
{
  l->head = (void *)0;
  l->size = 0;
}

# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
inline static void SystemCallQueueP__LinkedList__init(linked_list_t *l){
#line 39
  LinkedListC__LinkedList__init(l);
#line 39
}
#line 39
# 46 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SystemCallQueueP.nc"
static inline void SystemCallQueueP__SystemCallQueue__init(syscall_queue_t *q)
#line 46
{
  SystemCallQueueP__LinkedList__init(& q->l);
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCallQueue.nc"
inline static void BlockingStdControlImplP__SystemCallQueue__init(syscall_queue_t *q){
#line 40
  SystemCallQueueP__SystemCallQueue__init(q);
#line 40
}
#line 40
# 57 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
static inline error_t BlockingStdControlImplP__Init__init(void )
#line 57
{
  BlockingStdControlImplP__SystemCallQueue__init(&BlockingStdControlImplP__std_cntrl_queue);
  return SUCCESS;
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCallQueue.nc"
inline static void /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCallQueue__init(syscall_queue_t *q){
#line 40
  SystemCallQueueP__SystemCallQueue__init(q);
#line 40
}
#line 40
# 71 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMReceiverImplP.nc"
static inline error_t /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Init__init(void )
#line 71
{
  /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCallQueue__init(&/*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__am_queue);
  /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__blockForAny = FALSE;
  return SUCCESS;
}

# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
inline static void ThreadQueueP__LinkedList__init(linked_list_t *l){
#line 39
  LinkedListC__LinkedList__init(l);
#line 39
}
#line 39
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadQueueP.nc"
static inline void ThreadQueueP__ThreadQueue__init(thread_queue_t *q)
#line 45
{
  ThreadQueueP__LinkedList__init(& q->l);
}

# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
inline static void MutexP__ThreadQueue__init(thread_queue_t *q){
#line 39
  ThreadQueueP__ThreadQueue__init(q);
#line 39
}
#line 39
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/MutexP.nc"
static inline void MutexP__Mutex__init(mutex_t *m)
#line 47
{
  m->lock = FALSE;
  MutexP__ThreadQueue__init(& m->thread_queue);
}

# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Mutex.nc"
inline static void /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Mutex__init(mutex_t *m){
#line 39
  MutexP__Mutex__init(m);
#line 39
}
#line 39
# 69 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMSenderImplP.nc"
static inline error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Init__init(void )
#line 69
{
  /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Mutex__init(&/*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__my_mutex);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t TinyOSMainP__SoftwareInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, BlockingStdControlImplP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 42 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 80 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 80
{
#line 80
  union __nesc_unnamed4352 {
#line 80
    Atm128TimerCtrlCapture_t f;
#line 80
    uint16_t t;
  } 
#line 80
  c = { .f = x };

#line 80
  return c.t;
}





static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x)
#line 87
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P__TimerCtrlCapture2int(x);
}

#line 70
static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void )
#line 70
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 60
static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s)
#line 60
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P__TimerCtrl__getCtrlCapture();

#line 62
  x.bits.cs = s;
  HplAtm128Timer3P__TimerCtrl__setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 95
  HplAtm128Timer3P__Timer__setScale(scale);
#line 95
}
#line 95
# 128 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__start(void )
#line 128
{
#line 128
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void ){
#line 69
  HplAtm128Timer3P__Timer__start();
#line 69
}
#line 69
# 51 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__set(uint16_t t)
#line 51
{
#line 51
  * (volatile uint16_t *)0x88 = t;
}

# 58 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t){
#line 58
  HplAtm128Timer3P__Timer__set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 33
}
#line 33
# 26 "/opt/tinyos-2.1.1/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 26
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.1.1/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.1.1/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t TinyOSMainP__PlatformInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 108 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__TaskScheduler__init(void )
#line 108
{
  /* atomic removed: atomic calls only */
#line 109
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/TaskScheduler.nc"
inline static void TinyOSMainP__TaskScheduler__init(void ){
#line 47
  SchedulerBasicP__TaskScheduler__init();
#line 47
}
#line 47
# 67 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyOSMainP.nc"
static inline void TinyOSMainP__TinyOSBoot__booted(void )
#line 67
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 68
    {




      {
      }
#line 73
      ;


      TinyOSMainP__TaskScheduler__init();





      TinyOSMainP__PlatformInit__init();
      while (TinyOSMainP__TaskScheduler__runNextTask()) ;





      TinyOSMainP__SoftwareInit__init();
      while (TinyOSMainP__TaskScheduler__runNextTask()) ;
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  TinyOSMainP__Boot__booted();


  TinyOSMainP__TaskScheduler__taskLoop();
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void TinyThreadSchedulerP__TinyOSBoot__booted(void ){
#line 49
  TinyOSMainP__TinyOSBoot__booted();
#line 49
}
#line 49
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
inline static void TinyThreadSchedulerP__ThreadQueue__init(thread_queue_t *q){
#line 39
  ThreadQueueP__ThreadQueue__init(q);
#line 39
}
#line 39
# 50 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
static inline thread_t *ThreadMapP__ThreadInfo__get(uint8_t id)
#line 50
{
  return ThreadMapP__StaticThreadInfo__get(id);
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
inline static thread_t *TinyThreadSchedulerP__ThreadInfo__get(uint8_t arg_0x404e2d18){
#line 40
  struct thread *__nesc_result;
#line 40

#line 40
  __nesc_result = ThreadMapP__ThreadInfo__get(arg_0x404e2d18);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 214 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static inline void TinyThreadSchedulerP__ThreadSchedulerBoot__booted(void )
#line 214
{
  TinyThreadSchedulerP__num_runnable_threads = 0;
  TinyThreadSchedulerP__tos_thread = TinyThreadSchedulerP__ThreadInfo__get(TOSTHREAD_TOS_THREAD_ID);
  TinyThreadSchedulerP__tos_thread->id = TOSTHREAD_TOS_THREAD_ID;
  TinyThreadSchedulerP__ThreadQueue__init(&TinyThreadSchedulerP__ready_queue);

  TinyThreadSchedulerP__current_thread = TinyThreadSchedulerP__tos_thread;
  TinyThreadSchedulerP__current_thread->state = TOSTHREAD_STATE_ACTIVE;
  TinyThreadSchedulerP__current_thread->init_block = (void *)0;

  TinyThreadSchedulerP__briefly_interrupted_thread = (void *)0;
  TinyThreadSchedulerP__TinyOSBoot__booted();
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void RealMainImplP__ThreadSchedulerBoot__booted(void ){
#line 49
  TinyThreadSchedulerP__ThreadSchedulerBoot__booted();
#line 49
}
#line 49
# 62 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
static inline thread_t *ThreadMapP__DynamicThreadInfo__default__get(uint8_t id)
#line 62
{
  return ThreadMapP__StaticThreadInfo__get(id);
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
inline static thread_t *ThreadMapP__DynamicThreadInfo__get(uint8_t arg_0x405e3108){
#line 40
  struct thread *__nesc_result;
#line 40

#line 40
    __nesc_result = ThreadMapP__DynamicThreadInfo__default__get(arg_0x405e3108);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 50 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 50
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 161
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 161
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 163
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 51 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t SystemCallP__ThreadScheduler__wakeupThread(thread_id_t id){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__wakeupThread(id);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 82 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SystemCallP.nc"
static inline error_t SystemCallP__SystemCall__finish(syscall_t *s)
#line 82
{
  return SystemCallP__ThreadScheduler__wakeupThread(s->thread->id);
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
inline static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__SystemCall__finish(syscall_t *s){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = SystemCallP__SystemCall__finish(s);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 104 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMSenderImplP.nc"
static inline void /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__AMSend__sendDone(am_id_t am_id, message_t *m, error_t error)
#line 104
{
  if (/*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__send_call != (void *)0) {
      if (/*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__send_call->id == am_id) {
          /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__params_t *p;

#line 108
          p = /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__send_call->params;
          p->error = error;
          /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__SystemCall__finish(/*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__send_call);
        }
    }
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x4085baf0, message_t * msg, error_t error){
#line 99
  /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__AMSend__sendDone(arg_0x4085baf0, msg, error);
#line 99
}
#line 99
# 86 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 86
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 365 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 365
{
  return;
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x4092b810, message_t * msg, error_t error){
#line 89
  switch (arg_0x4092b810) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x4092b810, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 147 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 147
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 151
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 153
    error = ECANCEL;
    }
#line 154
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 201
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 201
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
inline static error_t /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCall__finish(syscall_t *s){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = SystemCallP__SystemCall__finish(s);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 153 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__stop(uint8_t num)
{
  /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Timer__stop(uint8_t arg_0x40a40a70){
#line 67
  /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__stop(arg_0x40a40a70);
#line 67
}
#line 67
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCallQueue.nc"
inline static syscall_t */*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCallQueue__find(syscall_queue_t *q, syscall_id_t id){
#line 45
  struct syscall *__nesc_result;
#line 45

#line 45
  __nesc_result = SystemCallQueueP__SystemCallQueue__find(q, id);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 133 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMReceiverImplP.nc"
static inline message_t */*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Receive__receive(uint8_t am_id, message_t *m, void *payload, uint8_t len)
#line 133
{
  syscall_t *s;
  /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__params_t *p;

  if (/*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__blockForAny == TRUE) {
    s = /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCallQueue__find(&/*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__am_queue, INVALID_ID);
    }
  else {
#line 140
    s = /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCallQueue__find(&/*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__am_queue, am_id);
    }
#line 141
  if (s == (void *)0) {
#line 141
    return m;
    }
  p = s->params;
  if (p->error == EBUSY) {
      /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Timer__stop(s->thread->id);
      * p->msg = *m;
      p->error = SUCCESS;
      /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCall__finish(s);
    }
  return m;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__ReceiveDefault__receive(am_id_t arg_0x40873c38, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Receive__receive(arg_0x40873c38, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 94 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 94
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__ReceiveDefault__receive(id, msg, payload, len);
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x40873548, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x40873548, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 102 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 102
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 360 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 362
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x4092b1d0, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x4092b1d0) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x4092b1d0, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 46 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 354 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 355
{
  return 0;
}

# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x4092a398, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x4092a398) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x4092a398, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 347 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 347
{
  return 0;
}

# 15 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x4092a398){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x4092a398) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x4092a398);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 264 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 264
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 278
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 48 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
inline static list_element_t *SystemCallQueueP__LinkedList__getFirst(linked_list_t *l){
#line 48
  struct list_element *__nesc_result;
#line 48

#line 48
  __nesc_result = LinkedListC__LinkedList__getFirst(l);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48


inline static list_element_t *SystemCallQueueP__LinkedList__getAfter(linked_list_t *l, list_element_t *e){
#line 50
  struct list_element *__nesc_result;
#line 50

#line 50
  __nesc_result = LinkedListC__LinkedList__getAfter(l, e);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 54 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static inline list_element_t *LinkedListC__get_element(linked_list_t *l, list_element_t *e)
#line 54
{
  list_element_t *temp = l->head;

#line 56
  while (temp != (void *)0) {
      if (temp == e) {
#line 57
        return temp;
        }
#line 58
      temp = temp->next;
    }
  return (void *)0;
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
inline static error_t BlockingStdControlImplP__SystemCall__finish(syscall_t *s){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = SystemCallP__SystemCall__finish(s);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 45 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCallQueue.nc"
inline static syscall_t *BlockingStdControlImplP__SystemCallQueue__find(syscall_queue_t *q, syscall_id_t id){
#line 45
  struct syscall *__nesc_result;
#line 45

#line 45
  __nesc_result = SystemCallQueueP__SystemCallQueue__find(q, id);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 119 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
static inline void BlockingStdControlImplP__SplitControl__stopDone(uint8_t id, error_t error)
#line 119
{
  syscall_t *s = BlockingStdControlImplP__SystemCallQueue__find(&BlockingStdControlImplP__std_cntrl_queue, id);
  BlockingStdControlImplP__params_t *p = s->params;

#line 122
  p->error = error;
  BlockingStdControlImplP__SystemCall__finish(s);
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 117
  BlockingStdControlImplP__SplitControl__stopDone(/*BlockingSerialActiveMessageC.BlockingStdControlC*/BlockingStdControlC__0__CLIENT_ID, error);
#line 117
}
#line 117
# 110 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 110
{
}

# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 126 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 126
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 114 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 114
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 93 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 330 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 330
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 335
{
  SerialP__SerialFlush__flushDone();
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 338 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 338
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 38 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 38
  SerialP__SerialFlush__default__flush();
#line 38
}
#line 38
# 326 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 326
{
  SerialP__SerialFlush__flush();
}

# 83 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
#line 83
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}





static inline bool SchedulerBasicP__pushTask(uint8_t id)
#line 91
{
  if (!SchedulerBasicP__isWaiting(id)) {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else {
      return FALSE;
    }
}

# 87 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
static inline void BlockingStdControlImplP__SplitControl__startDone(uint8_t id, error_t error)
#line 87
{
  syscall_t *s = BlockingStdControlImplP__SystemCallQueue__find(&BlockingStdControlImplP__std_cntrl_queue, id);
  BlockingStdControlImplP__params_t *p = s->params;

#line 90
  p->error = error;
  BlockingStdControlImplP__SystemCall__finish(s);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 92
  BlockingStdControlImplP__SplitControl__startDone(/*BlockingSerialActiveMessageC.BlockingStdControlC*/BlockingStdControlC__0__CLIENT_ID, error);
#line 92
}
#line 92
# 143 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 143
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 120 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 120
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 108 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 108
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 148 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 148
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 138 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 138
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 320 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 320
{
  SerialP__SerialControl__start();
  SerialP__SplitControl__startDone(SUCCESS);
}

# 45 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 183 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 80 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 80
}
#line 80
# 242 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 242
{
  bool ret;

#line 244
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 244
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 244
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 258
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 260
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 268
{
  uint8_t retval = 0;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
          retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
          if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 273
            SerialP__ackQ.readPtr = 0;
            }
        }
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
#line 276
  return retval;
}

#line 539
static inline void SerialP__RunTx__runTask(void )
#line 539
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 556
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 565
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP__txSeqno++;
      if (SerialP__txProto == SERIAL_PROTO_ACK) {
          SerialP__ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 583
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
        goInactive = SerialP__offPending;
#line 583
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 585
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 585
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 591
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 591
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 594
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();
                }
#line 599
                __nesc_atomic_end(__nesc_atomic); }
              SerialP__txProto = SERIAL_PROTO_ACK;
              SerialP__txIndex = SerialP__TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 604
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP__txIndex = SerialP__TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }

  if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
      SerialP__testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 633
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 635
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 635
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 132 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 132
{
  * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 48 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SystemCallP.nc"
static inline void SystemCallP__threadTask__runTask(void )
#line 48
{
  (* SystemCallP__current_call->syscall_ptr)(SystemCallP__current_call);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 133 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

#line 173
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(0U, t0, dt);
#line 118
}
#line 118
# 153 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 67
}
#line 67
# 222 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 178 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static uint32_t /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(0U);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 89 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__runTask(void )
{




  uint32_t now = /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__stop();

  for (num = 0; num < /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__NUM_TIMERS; num++) 
    {
      /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer_t *timer = &/*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__fireTimers(now);
        }
      else {
#line 124
        /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 95 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 95
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4276 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
inline static error_t ThreadSleepP__SystemCall__finish(syscall_t *s){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = SystemCallP__SystemCall__finish(s);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 133 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer_t *timer = &/*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__postTask();
}






static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__startTimer(num, /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__getNow(), dt, TRUE);
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void ThreadSleepP__TimerMilli__startOneShot(uint8_t arg_0x40724300, uint32_t dt){
#line 62
  /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__startOneShot(arg_0x40724300, dt);
#line 62
}
#line 62
# 52 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadSleepP.nc"
static inline void ThreadSleepP__sleepTask(syscall_t *s)
#line 52
{
  ThreadSleepP__sleep_params_t *p = s->params;

#line 54
  ThreadSleepP__TimerMilli__startOneShot(s->thread->id, * p->milli);
}

# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static thread_t *ThreadSleepP__ThreadScheduler__threadInfo(thread_id_t id){
#line 41
  struct thread *__nesc_result;
#line 41

#line 41
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__threadInfo(id);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 76 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadSleepP.nc"
static inline void ThreadSleepP__TimerMilli__fired(uint8_t id)
#line 76
{
  thread_t *t = ThreadSleepP__ThreadScheduler__threadInfo(id);

#line 78
  if (t->syscall->syscall_ptr == ThreadSleepP__sleepTask) {
    ThreadSleepP__SystemCall__finish(t->syscall);
    }
}

# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static thread_t */*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__ThreadScheduler__threadInfo(thread_id_t id){
#line 41
  struct thread *__nesc_result;
#line 41

#line 41
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__threadInfo(id);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 153 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMReceiverImplP.nc"
static inline void /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Timer__fired(uint8_t id)
#line 153
{
  thread_t *t = /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__ThreadScheduler__threadInfo(id);
  /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__params_t *p = t->syscall->params;

#line 156
  if (p->error == EBUSY) {
      p->error = FAIL;
      /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__SystemCall__finish(t->syscall);
    }
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__fired(uint8_t arg_0x406e1708){
#line 72
  /*BlockingSerialAMReceiverP.BlockingAMReceiverImplP*/BlockingAMReceiverImplP__0__Timer__fired(arg_0x406e1708);
#line 72
  ThreadSleepP__TimerMilli__fired(arg_0x406e1708);
#line 72
}
#line 72
# 92 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 67
}
#line 67
# 89 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

#line 128
static inline void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__fired(void )
{
  /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__fireTimers(/*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__getNow());
}

#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x406e1708){
#line 72
  switch (arg_0x406e1708) {
#line 72
    case 0U:
#line 72
      /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x406e1708);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 51 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void )
#line 51
{
#line 51
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer0AsyncP__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 209 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 209
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 67
}
#line 67
# 128 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 72
}
#line 72
# 226 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 109 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static inline void StaticThreadP__Coroutine__default__run(uint8_t id, void *arg)
#line 109
{
}

# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
inline static void StaticThreadP__Coroutine__run(uint8_t arg_0x405c27a8, void *arg){
#line 43
  switch (arg_0x405c27a8) {
#line 43
    case /*BenchmarkAppC.Produtor*/CoroutineC__0__THREAD_ID:
#line 43
      BenchmarkC__Produtor__run(arg);
#line 43
      break;
#line 43
    case /*BenchmarkAppC.Consumidor*/CoroutineC__1__THREAD_ID:
#line 43
      BenchmarkC__Consumidor__run(arg);
#line 43
      break;
#line 43
    case /*BenchmarkAppC.SerialSender*/CoroutineC__2__THREAD_ID:
#line 43
      BenchmarkC__SerialSender__run(arg);
#line 43
      break;
#line 43
    default:
#line 43
      StaticThreadP__Coroutine__default__run(arg_0x405c27a8, arg);
#line 43
      break;
#line 43
    }
#line 43
}
#line 43
# 101 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static inline void StaticThreadP__ThreadFunction__signalThreadRun(uint8_t id, void *arg)
#line 101
{
  StaticThreadP__Coroutine__run(id, arg);
}

# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadFunction.nc"
inline static void /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadFunction__signalThreadRun(void *arg){
#line 37
  StaticThreadP__ThreadFunction__signalThreadRun(/*BenchmarkAppC.SerialSender*/CoroutineC__2__THREAD_ID, arg);
#line 37
}
#line 37
# 48 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__Timer__get(void )
#line 48
{
#line 48
  return * (volatile uint16_t *)0x88;
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer3P__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__get(void ){
#line 53
  unsigned short __nesc_result;
#line 53

#line 53
  __nesc_result = /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 107 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline Atm128_ETIFR_t HplAtm128Timer3P__TimerCtrl__getInterruptFlag(void )
#line 107
{
  return * (Atm128_ETIFR_t *)& * (volatile uint8_t *)0x7C;
}

#line 140
static inline bool HplAtm128Timer3P__Timer__test(void )
#line 140
{
  return HplAtm128Timer3P__TimerCtrl__getInterruptFlag().bits.tov3;
}

# 78 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = HplAtm128Timer3P__Timer__test();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 60 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static bool /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 53 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
inline static list_element_t *SystemCallQueueP__LinkedList__remove(linked_list_t *l, list_element_t *e){
#line 53
  struct list_element *__nesc_result;
#line 53

#line 53
  __nesc_result = LinkedListC__LinkedList__remove(l, e);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 56 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SystemCallQueueP.nc"
static inline syscall_t *SystemCallQueueP__SystemCallQueue__remove(syscall_queue_t *q, syscall_t *s)
#line 56
{
  return (syscall_t *)SystemCallQueueP__LinkedList__remove(& q->l, (list_element_t *)s);
}

# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCallQueue.nc"
inline static syscall_t *BlockingStdControlImplP__SystemCallQueue__remove(syscall_queue_t *q, syscall_t *t){
#line 43
  struct syscall *__nesc_result;
#line 43

#line 43
  __nesc_result = SystemCallQueueP__SystemCallQueue__remove(q, t);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 342 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 342
{
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 125 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
static inline error_t BlockingStdControlImplP__SplitControl__default__start(uint8_t id)
#line 125
{
#line 125
  return FAIL;
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t BlockingStdControlImplP__SplitControl__start(uint8_t arg_0x40a0b0c0){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  switch (arg_0x40a0b0c0) {
#line 83
    case /*BlockingSerialActiveMessageC.BlockingStdControlC*/BlockingStdControlC__0__CLIENT_ID:
#line 83
      __nesc_result = SerialP__SplitControl__start();
#line 83
      break;
#line 83
    default:
#line 83
      __nesc_result = BlockingStdControlImplP__SplitControl__default__start(arg_0x40a0b0c0);
#line 83
      break;
#line 83
    }
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 63 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
static inline void BlockingStdControlImplP__startTask(syscall_t *s)
#line 63
{
  BlockingStdControlImplP__params_t *p = s->params;

#line 65
  p->error = BlockingStdControlImplP__SplitControl__start(s->id);
  if (p->error != SUCCESS) {
    BlockingStdControlImplP__SystemCall__finish(s);
    }
}

# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
inline static error_t BlockingStdControlImplP__SystemCall__start(void *syscall_ptr, syscall_t *s, syscall_id_t id, void *params){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = SystemCallP__SystemCall__start(syscall_ptr, s, id, params);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 134 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static inline error_t LinkedListC__LinkedList__addAt(linked_list_t *l, list_element_t *e, uint8_t i)
#line 134
{
  if (i > l->size) {
#line 135
    return FAIL;
    }
  else {
#line 136
    if (i == 0) {
      return LinkedListC__insert_element(l, & l->head, e);
      }
    else 
#line 138
      {
        list_element_t *temp = LinkedListC__get_elementAt(l, i - 1);

#line 140
        return LinkedListC__insert_element(l, & temp->next, e);
      }
    }
}

#line 125
static inline error_t LinkedListC__LinkedList__addLast(linked_list_t *l, list_element_t *e)
#line 125
{
  return LinkedListC__LinkedList__addAt(l, e, l->size);
}

# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
inline static error_t SystemCallQueueP__LinkedList__addLast(linked_list_t *l, list_element_t *e){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = LinkedListC__LinkedList__addLast(l, e);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 49 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SystemCallQueueP.nc"
static inline void SystemCallQueueP__SystemCallQueue__enqueue(syscall_queue_t *q, syscall_t *s)
#line 49
{
  s->next_call = (void *)0;
  SystemCallQueueP__LinkedList__addLast(& q->l, (list_element_t *)s);
}

# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCallQueue.nc"
inline static void BlockingStdControlImplP__SystemCallQueue__enqueue(syscall_queue_t *q, syscall_t *t){
#line 41
  SystemCallQueueP__SystemCallQueue__enqueue(q, t);
#line 41
}
#line 41
# 70 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingStdControlImplP.nc"
static inline error_t BlockingStdControlImplP__BlockingStdControl__start(uint8_t id)
#line 70
{
  syscall_t s;
  BlockingStdControlImplP__params_t p;

#line 73
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (BlockingStdControlImplP__SystemCallQueue__find(&BlockingStdControlImplP__std_cntrl_queue, id) != (void *)0) 
        {
          unsigned char __nesc_temp = 
#line 75
          EBUSY;

          {
#line 75
            __nesc_atomic_end(__nesc_atomic); 
#line 75
            return __nesc_temp;
          }
        }
#line 76
      BlockingStdControlImplP__SystemCallQueue__enqueue(&BlockingStdControlImplP__std_cntrl_queue, &s);
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }

  BlockingStdControlImplP__SystemCall__start(&BlockingStdControlImplP__startTask, &s, id, &p);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    {
      BlockingStdControlImplP__SystemCallQueue__remove(&BlockingStdControlImplP__std_cntrl_queue, &s);
      {
        unsigned char __nesc_temp = 
#line 83
        p.error;

        {
#line 83
          __nesc_atomic_end(__nesc_atomic); 
#line 83
          return __nesc_temp;
        }
      }
    }
#line 86
    __nesc_atomic_end(__nesc_atomic); }
}

# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BlockingStdControl.nc"
inline static error_t BenchmarkC__AMControl__start(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = BlockingStdControlImplP__BlockingStdControl__start(/*BlockingSerialActiveMessageC.BlockingStdControlC*/BlockingStdControlC__0__CLIENT_ID);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 350 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static inline thread_t *TinyThreadSchedulerP__ThreadScheduler__currentThreadInfo(void )
#line 350
{
  /* atomic removed: atomic calls only */
#line 351
  {
    struct thread *__nesc_temp = 
#line 351
    TinyThreadSchedulerP__current_thread;

#line 351
    return __nesc_temp;
  }
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static thread_t *SystemCallP__ThreadScheduler__currentThreadInfo(void ){
#line 40
  struct thread *__nesc_result;
#line 40

#line 40
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__currentThreadInfo();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SystemCallP__threadTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SystemCallP__threadTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t SystemCallP__ThreadScheduler__suspendCurrentThread(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__suspendCurrentThread();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 147 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static inline void TinyThreadSchedulerP__suspend(thread_t *thread)
#line 147
{








  TinyThreadSchedulerP__sleepWhileIdle();
  TinyThreadSchedulerP__interrupt(thread);
}

# 111 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static inline uint8_t LinkedListC__LinkedList__size(linked_list_t *l)
#line 111
{
  return l->size;
}

# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
inline static uint8_t ThreadQueueP__LinkedList__size(linked_list_t *l){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = LinkedListC__LinkedList__size(l);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 57 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadQueueP.nc"
static inline bool ThreadQueueP__ThreadQueue__isEmpty(thread_queue_t *q)
#line 57
{
  return ThreadQueueP__LinkedList__size(& q->l) == 0;
}

# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
inline static bool TinyThreadSchedulerP__ThreadQueue__isEmpty(thread_queue_t *q){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = ThreadQueueP__ThreadQueue__isEmpty(q);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 156 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 156
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 171
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.1.1/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 104
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
inline static void TinyThreadSchedulerP__McuSleep__sleep(void ){
#line 59
  McuSleepC__McuSleep__sleep();
#line 59
}
#line 59
# 131 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static inline list_element_t *LinkedListC__LinkedList__removeLast(linked_list_t *l)
#line 131
{
  return LinkedListC__LinkedList__removeAt(l, l->size - 1);
}

# 56 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
inline static list_element_t *ThreadQueueP__LinkedList__removeLast(linked_list_t *l){
#line 56
  struct list_element *__nesc_result;
#line 56

#line 56
  __nesc_result = LinkedListC__LinkedList__removeLast(l);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 51 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadQueueP.nc"
static inline thread_t *ThreadQueueP__ThreadQueue__dequeue(thread_queue_t *q)
#line 51
{
  return (thread_t *)ThreadQueueP__LinkedList__removeLast(& q->l);
}

# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
inline static thread_t *TinyThreadSchedulerP__ThreadQueue__dequeue(thread_queue_t *q){
#line 41
  struct thread *__nesc_result;
#line 41

#line 41
  __nesc_result = ThreadQueueP__ThreadQueue__dequeue(q);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 121 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static inline list_element_t *LinkedListC__LinkedList__removeFirst(linked_list_t *l)
#line 121
{
  if (l->head == (void *)0) {
#line 122
    return (void *)0;
    }
  else {
#line 123
    return LinkedListC__remove_element(l, & l->head);
    }
}

#line 63
static inline list_element_t *LinkedListC__get_element_before(linked_list_t *l, list_element_t *e)
#line 63
{
  list_element_t *temp = l->head;

#line 65
  if (temp == (void *)0) {
#line 65
    return (void *)0;
    }
#line 66
  while (temp->next != (void *)0) {
      if (temp->next == e) {
#line 67
        return temp;
        }
#line 67
      ;
      temp = temp->next;
    }
  return (void *)0;
}

# 120 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 120
{
  return 28;
}

static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 124
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void * BenchmarkC__Packet__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BlockingAMSend.nc"
inline static error_t BenchmarkC__BlockingAMSend__send(am_addr_t addr, message_t *msg, uint8_t len){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__BlockingAMSend__send(228, addr, msg, len);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 47 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t MutexP__ThreadScheduler__suspendCurrentThread(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__suspendCurrentThread();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 114 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static inline error_t LinkedListC__LinkedList__addFirst(linked_list_t *l, list_element_t *e)
#line 114
{
  return LinkedListC__insert_element(l, & l->head, e);
}

# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/LinkedList.nc"
inline static error_t ThreadQueueP__LinkedList__addFirst(linked_list_t *l, list_element_t *e){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = LinkedListC__LinkedList__addFirst(l, e);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 48 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadQueueP.nc"
static inline void ThreadQueueP__ThreadQueue__enqueue(thread_queue_t *q, thread_t *t)
#line 48
{
  ThreadQueueP__LinkedList__addFirst(& q->l, (list_element_t *)t);
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
inline static void MutexP__ThreadQueue__enqueue(thread_queue_t *q, thread_t *t){
#line 40
  ThreadQueueP__ThreadQueue__enqueue(q, t);
#line 40
}
#line 40
# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static thread_t *MutexP__ThreadScheduler__currentThreadInfo(void ){
#line 40
  struct thread *__nesc_result;
#line 40

#line 40
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__currentThreadInfo();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 52 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/MutexP.nc"
static inline error_t MutexP__Mutex__lock(mutex_t *m)
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {
      thread_t *t = MutexP__ThreadScheduler__currentThreadInfo();

#line 55
      if (m->lock == FALSE) {
          m->lock = TRUE;
          t->mutex_count++;
        }
      else {
          MutexP__ThreadQueue__enqueue(& m->thread_queue, t);
          MutexP__ThreadScheduler__suspendCurrentThread();
        }
      {
        unsigned char __nesc_temp = 
#line 63
        SUCCESS;

        {
#line 63
          __nesc_atomic_end(__nesc_atomic); 
#line 63
          return __nesc_temp;
        }
      }
    }
#line 66
    __nesc_atomic_end(__nesc_atomic); }
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Mutex.nc"
inline static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Mutex__lock(mutex_t *m){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = MutexP__Mutex__lock(m);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/SystemCall.nc"
inline static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__SystemCall__start(void *syscall_ptr, syscall_t *s, syscall_id_t id, void *params){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = SystemCallP__SystemCall__start(syscall_ptr, s, id, params);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 315
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 522 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 522
{
  bool not_busy = FALSE;

#line 524
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 524
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 530
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 350 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 351
{
  return 0;
}

# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x4092a398, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x4092a398) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x4092a398, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 100 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 108
            ESIZE;

            {
#line 108
              __nesc_atomic_end(__nesc_atomic); 
#line 108
              return __nesc_temp;
            }
          }
        }
#line 111
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 58 "/opt/tinyos-2.1.1/tos/lib/coroutines/lib/serial/SerialActiveMessageP.nc"
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 60
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 62
  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__AMSend__send(am_id_t arg_0x40a77380, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x40a77380, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 62 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMSenderImplP.nc"
static inline void /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__sendTask(syscall_t *s)
#line 62
{
  /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__params_t *p = s->params;

#line 64
  p->error = /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__AMSend__send(s->id, p->addr, p->msg, p->len);
  if (p->error != SUCCESS) {
    /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__SystemCall__finish(s);
    }
}

# 51 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t MutexP__ThreadScheduler__wakeupThread(thread_id_t id){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__wakeupThread(id);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
inline static thread_t *MutexP__ThreadQueue__dequeue(thread_queue_t *q){
#line 41
  struct thread *__nesc_result;
#line 41

#line 41
  __nesc_result = ThreadQueueP__ThreadQueue__dequeue(q);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 67 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/MutexP.nc"
static inline error_t MutexP__Mutex__unlock(mutex_t *m)
#line 67
{
  /* atomic removed: atomic calls only */
#line 68
  {
    if (m->lock == TRUE) {
        thread_t *t = MutexP__ThreadScheduler__currentThreadInfo();

#line 71
        t->mutex_count--;
        if ((t = MutexP__ThreadQueue__dequeue(& m->thread_queue)) != (void *)0) {
          MutexP__ThreadScheduler__wakeupThread(t->id);
          }
        else {
#line 74
          m->lock = FALSE;
          }
      }
#line 76
    {
      unsigned char __nesc_temp = 
#line 76
      SUCCESS;

#line 76
      return __nesc_temp;
    }
  }
}

# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Mutex.nc"
inline static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Mutex__unlock(mutex_t *m){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = MutexP__Mutex__unlock(m);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 31
}
#line 31
# 88 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 88
{
  LedsP__Led1__toggle();
  ;
#line 90
  ;
}

# 72 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void BenchmarkC__Leds__led1Toggle(void ){
#line 72
  LedsP__Leds__led1Toggle();
#line 72
}
#line 72
# 48 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t StaticThreadP__ThreadScheduler__interruptCurrentThread(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__interruptCurrentThread();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 89 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static inline error_t StaticThreadP__Coroutine__yield(uint8_t id)
#line 89
{
  return StaticThreadP__ThreadScheduler__interruptCurrentThread();
}

# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
inline static error_t BenchmarkC__Consumidor__yield(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = StaticThreadP__Coroutine__yield(/*BenchmarkAppC.Consumidor*/CoroutineC__1__THREAD_ID);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
#line 37
inline static error_t BenchmarkC__SerialSender__start(void *arg){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = StaticThreadP__Coroutine__start(/*BenchmarkAppC.SerialSender*/CoroutineC__2__THREAD_ID, arg);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BitArrayUtilsC.nc"
static inline void BitArrayUtilsC__BitArrayUtils__clrArray(uint8_t *array, uint8_t size)
#line 39
{
  memset(array, 0, size);
}

# 29 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/BitArrayUtils.nc"
inline static void TinyThreadSchedulerP__BitArrayUtils__clrArray(uint8_t *array, uint8_t numBytes){
#line 29
  BitArrayUtilsC__BitArrayUtils__clrArray(array, numBytes);
#line 29
}
#line 29
# 228 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static inline error_t TinyThreadSchedulerP__ThreadScheduler__initThread(uint8_t id)
#line 228
{
  thread_t *t = TinyThreadSchedulerP__ThreadInfo__get(id);

#line 230
  t->state = TOSTHREAD_STATE_INACTIVE;
  t->init_block = TinyThreadSchedulerP__current_thread->init_block;
  TinyThreadSchedulerP__BitArrayUtils__clrArray(t->joinedOnMe, sizeof  t->joinedOnMe);
  {
#line 233
    uint16_t temp;

#line 233
     __asm ("in %A0, __SP_L__\n\t in %B0, __SP_H__" : "=r"(temp)); __asm ("out __SP_H__,%B0\n\t out __SP_L__,%A0" :  : "r"(t->stack_ptr)); __asm ("push %A0\n push %B0" :  : "r"(&TinyThreadSchedulerP__threadWrapper)); __asm ("in %A0, __SP_L__\n\t in %B0, __SP_H__" : "=r"(t->stack_ptr)); __asm ("out __SP_H__,%B0\n\t out __SP_L__,%A0" :  : "r"(temp)); __asm ("in %0,__SREG__ \n\t" : "=r"(t->regs.status));}
#line 233
  ;
  return SUCCESS;
}

# 43 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t StaticThreadP__ThreadScheduler__initThread(thread_id_t id){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__initThread(id);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 103 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyOSMainP.nc"
static inline error_t TinyOSMainP__ThreadInfo__reset(void )
#line 103
{
  return FAIL;
}

# 71 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadInfoP.nc"
static inline error_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadInfo__reset(void )
#line 71
{
  return /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__init();
}

#line 71
static inline error_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadInfo__reset(void )
#line 71
{
  return /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__init();
}

#line 71
static inline error_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadInfo__reset(void )
#line 71
{
  return /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__init();
}

# 111 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static inline error_t StaticThreadP__ThreadInfo__default__reset(uint8_t id)
#line 111
{
#line 111
  return FAIL;
}

# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
inline static error_t StaticThreadP__ThreadInfo__reset(uint8_t arg_0x405ce580){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x405ce580) {
#line 39
    case /*BenchmarkAppC.Produtor*/CoroutineC__0__THREAD_ID:
#line 39
      __nesc_result = /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadInfo__reset();
#line 39
      break;
#line 39
    case /*BenchmarkAppC.Consumidor*/CoroutineC__1__THREAD_ID:
#line 39
      __nesc_result = /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadInfo__reset();
#line 39
      break;
#line 39
    case /*BenchmarkAppC.SerialSender*/CoroutineC__2__THREAD_ID:
#line 39
      __nesc_result = /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadInfo__reset();
#line 39
      break;
#line 39
    case TOSTHREAD_TOS_THREAD_ID:
#line 39
      __nesc_result = TinyOSMainP__ThreadInfo__reset();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = StaticThreadP__ThreadInfo__default__reset(arg_0x405ce580);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 107 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyOSMainP.nc"
static inline thread_t *TinyOSMainP__ThreadInfo__get(void )
#line 107
{
  return &TinyOSMainP__thread_info;
}

# 75 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadInfoP.nc"
static inline thread_t */*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadInfo__get(void )
#line 75
{
  return &/*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info;
}

#line 75
static inline thread_t */*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadInfo__get(void )
#line 75
{
  return &/*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info;
}

#line 75
static inline thread_t */*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadInfo__get(void )
#line 75
{
  return &/*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info;
}

# 110 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static inline thread_t *StaticThreadP__ThreadInfo__default__get(uint8_t id)
#line 110
{
#line 110
  return (void *)0;
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
inline static thread_t *StaticThreadP__ThreadInfo__get(uint8_t arg_0x405ce580){
#line 40
  struct thread *__nesc_result;
#line 40

#line 40
  switch (arg_0x405ce580) {
#line 40
    case /*BenchmarkAppC.Produtor*/CoroutineC__0__THREAD_ID:
#line 40
      __nesc_result = /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadInfo__get();
#line 40
      break;
#line 40
    case /*BenchmarkAppC.Consumidor*/CoroutineC__1__THREAD_ID:
#line 40
      __nesc_result = /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadInfo__get();
#line 40
      break;
#line 40
    case /*BenchmarkAppC.SerialSender*/CoroutineC__2__THREAD_ID:
#line 40
      __nesc_result = /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadInfo__get();
#line 40
      break;
#line 40
    case TOSTHREAD_TOS_THREAD_ID:
#line 40
      __nesc_result = TinyOSMainP__ThreadInfo__get();
#line 40
      break;
#line 40
    default:
#line 40
      __nesc_result = StaticThreadP__ThreadInfo__default__get(arg_0x405ce580);
#line 40
      break;
#line 40
    }
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 52 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static inline error_t StaticThreadP__init(uint8_t id, void *arg)
#line 52
{
  error_t r1;
#line 53
  error_t r2;
  thread_t *thread_info = StaticThreadP__ThreadInfo__get(id);

#line 55
  thread_info->start_arg_ptr = arg;
  thread_info->mutex_count = 0;
  thread_info->next_thread = (void *)0;
  r1 = StaticThreadP__ThreadInfo__reset(id);
  r2 = StaticThreadP__ThreadScheduler__initThread(id);
  return ecombine(r1, r2);
}

# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadFunction.nc"
inline static void /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadFunction__signalThreadRun(void *arg){
#line 37
  StaticThreadP__ThreadFunction__signalThreadRun(/*BenchmarkAppC.Consumidor*/CoroutineC__1__THREAD_ID, arg);
#line 37
}
#line 37
inline static void /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadFunction__signalThreadRun(void *arg){
#line 37
  StaticThreadP__ThreadFunction__signalThreadRun(/*BenchmarkAppC.Produtor*/CoroutineC__0__THREAD_ID, arg);
#line 37
}
#line 37
# 113 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static inline void StaticThreadP__ThreadNotification__default__aboutToDestroy(uint8_t id)
#line 113
{
}

# 38 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadNotification.nc"
inline static void StaticThreadP__ThreadNotification__aboutToDestroy(uint8_t arg_0x405be4d8){
#line 38
    StaticThreadP__ThreadNotification__default__aboutToDestroy(arg_0x405be4d8);
#line 38
}
#line 38
# 105 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static inline void StaticThreadP__ThreadCleanup__cleanup(uint8_t id)
#line 105
{
  StaticThreadP__ThreadNotification__aboutToDestroy(id);
}

# 71 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
static inline void ThreadMapP__StaticThreadCleanup__default__cleanup(uint8_t id)
#line 71
{
  ThreadMapP__DynamicThreadCleanup__cleanup(id);
}

# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
inline static void ThreadMapP__StaticThreadCleanup__cleanup(uint8_t arg_0x405e6988){
#line 37
  switch (arg_0x405e6988) {
#line 37
    case /*BenchmarkAppC.Produtor*/CoroutineC__0__THREAD_ID:
#line 37
      StaticThreadP__ThreadCleanup__cleanup(/*BenchmarkAppC.Produtor*/CoroutineC__0__THREAD_ID);
#line 37
      break;
#line 37
    case /*BenchmarkAppC.Consumidor*/CoroutineC__1__THREAD_ID:
#line 37
      StaticThreadP__ThreadCleanup__cleanup(/*BenchmarkAppC.Consumidor*/CoroutineC__1__THREAD_ID);
#line 37
      break;
#line 37
    case /*BenchmarkAppC.SerialSender*/CoroutineC__2__THREAD_ID:
#line 37
      StaticThreadP__ThreadCleanup__cleanup(/*BenchmarkAppC.SerialSender*/CoroutineC__2__THREAD_ID);
#line 37
      break;
#line 37
    default:
#line 37
      ThreadMapP__StaticThreadCleanup__default__cleanup(arg_0x405e6988);
#line 37
      break;
#line 37
    }
#line 37
}
#line 37
# 68 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
static inline void ThreadMapP__ThreadCleanup__cleanup(uint8_t id)
#line 68
{
  ThreadMapP__StaticThreadCleanup__cleanup(id);
}

# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
inline static void TinyThreadSchedulerP__ThreadCleanup__cleanup(uint8_t arg_0x404e2250){
#line 37
  ThreadMapP__ThreadCleanup__cleanup(arg_0x404e2250);
#line 37
}
#line 37
# 160 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static inline void TinyThreadSchedulerP__wakeupJoined(thread_t *t)
#line 160
{
  int i;
#line 161
  int j;
#line 161
  int k;

#line 162
  k = 0;
  for (i = 0; i < sizeof  t->joinedOnMe; i++) {
      if (t->joinedOnMe[i] == 0) {
          k += 8;
          continue;
        }
      for (j = 0; j < 8; j++) {
          if (t->joinedOnMe[i] & 0x1) {
            TinyThreadSchedulerP__ThreadScheduler__wakeupThread(k);
            }
#line 171
          t->joinedOnMe[i] >>= 1;
          k++;
        }
    }
}






static inline void TinyThreadSchedulerP__stop(thread_t *t)
#line 182
{
  t->state = TOSTHREAD_STATE_INACTIVE;
  TinyThreadSchedulerP__num_runnable_threads--;
  TinyThreadSchedulerP__wakeupJoined(t);








  TinyThreadSchedulerP__ThreadCleanup__cleanup(t->id);
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadQueue.nc"
inline static void TinyThreadSchedulerP__ThreadQueue__enqueue(thread_queue_t *q, thread_t *t){
#line 40
  ThreadQueueP__ThreadQueue__enqueue(q, t);
#line 40
}
#line 40
# 237 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static inline error_t TinyThreadSchedulerP__ThreadScheduler__startThread(uint8_t id)
#line 237
{
  /* atomic removed: atomic calls only */
#line 238
  {
    thread_t *t = TinyThreadSchedulerP__ThreadInfo__get(id);

#line 240
    if (t->state == TOSTHREAD_STATE_INACTIVE) {
        TinyThreadSchedulerP__num_runnable_threads++;








        t->state = TOSTHREAD_STATE_READY;
        TinyThreadSchedulerP__ThreadQueue__enqueue(&TinyThreadSchedulerP__ready_queue, t);
        {
          unsigned char __nesc_temp = 
#line 252
          SUCCESS;

#line 252
          return __nesc_temp;
        }
      }
  }
#line 255
  return FAIL;
}

# 44 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t StaticThreadP__ThreadScheduler__startThread(thread_id_t id){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__startThread(id);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 112 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static inline void StaticThreadP__ThreadNotification__default__justCreated(uint8_t id)
#line 112
{
}

# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadNotification.nc"
inline static void StaticThreadP__ThreadNotification__justCreated(uint8_t arg_0x405be4d8){
#line 37
    StaticThreadP__ThreadNotification__default__justCreated(arg_0x405be4d8);
#line 37
}
#line 37
# 41 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/Coroutine.nc"
inline static error_t BenchmarkC__Produtor__yield(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = StaticThreadP__Coroutine__yield(/*BenchmarkAppC.Produtor*/CoroutineC__0__THREAD_ID);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 141 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 141
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 71
}
#line 71
# 133 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 133
{
#line 133
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 149 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 49
}
#line 49
# 87 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__TaskScheduler__hasTasks(void )
#line 87
{
  /* atomic removed: atomic calls only */
#line 88
  {
    unsigned char __nesc_temp = 
#line 88
    SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK;

#line 88
    return __nesc_temp;
  }
}

# 62 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/TaskScheduler.nc"
inline static bool TOSThreadsInterruptP__TaskScheduler__hasTasks(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SchedulerBasicP__TaskScheduler__hasTasks();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TOSThreadsInterruptP.nc"
static __inline void TOSThreadsInterruptP__PlatformInterrupt__postAmble(void )
#line 56
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    {
      if (TOSThreadsInterruptP__TaskScheduler__hasTasks() == TRUE) {
        TOSThreadsInterruptP__interruptThread();
        }
    }
#line 61
    __nesc_atomic_end(__nesc_atomic); }
}

# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/PlatformInterrupt.nc"
inline static void HplAtm128Timer0AsyncP__PlatformInterrupt__postAmble(void ){
#line 37
  TOSThreadsInterruptP__PlatformInterrupt__postAmble();
#line 37
}
#line 37
# 51 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t TOSThreadsInterruptP__ThreadScheduler__wakeupThread(thread_id_t id){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__wakeupThread(id);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 342 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static inline uint8_t TinyThreadSchedulerP__ThreadScheduler__currentThreadId(void )
#line 342
{
  /* atomic removed: atomic calls only */
#line 343
  {
    unsigned char __nesc_temp = 
#line 343
    TinyThreadSchedulerP__current_thread->id;

#line 343
    return __nesc_temp;
  }
}

# 39 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static uint8_t TOSThreadsInterruptP__ThreadScheduler__currentThreadId(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__currentThreadId();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 294 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static inline error_t TinyThreadSchedulerP__ThreadScheduler__brieflyInterruptCurrentThread(void )
#line 294
{
  /* atomic removed: atomic calls only */
#line 295
  {
    if (TinyThreadSchedulerP__current_thread->state == TOSTHREAD_STATE_ACTIVE) {
        TinyThreadSchedulerP__briefly_interrupted_thread = TinyThreadSchedulerP__current_thread;
        TinyThreadSchedulerP__briefly_interrupted_thread->state = 
        TOSTHREAD_STATE_BRIEFLYINTERRUPTED;



        TinyThreadSchedulerP__interrupt(TinyThreadSchedulerP__current_thread);
        {
          unsigned char __nesc_temp = 
#line 304
          SUCCESS;

#line 304
          return __nesc_temp;
        }
      }
#line 306
    {
      unsigned char __nesc_temp = 
#line 306
      FAIL;

#line 306
      return __nesc_temp;
    }
  }
}

# 49 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadScheduler.nc"
inline static error_t TOSThreadsInterruptP__ThreadScheduler__brieflyInterruptCurrentThread(void ){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = TinyThreadSchedulerP__ThreadScheduler__brieflyInterruptCurrentThread();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 230 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 61
}
#line 61
# 189 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareA__default__fired(void )
#line 189
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareA__fired(void ){
#line 49
  HplAtm128Timer3P__CompareA__default__fired();
#line 49
}
#line 49
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/PlatformInterrupt.nc"
inline static void HplAtm128Timer3P__PlatformInterrupt__postAmble(void ){
#line 37
  TOSThreadsInterruptP__PlatformInterrupt__postAmble();
#line 37
}
#line 37
# 194 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareB__default__fired(void )
#line 194
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareB__fired(void ){
#line 49
  HplAtm128Timer3P__CompareB__default__fired();
#line 49
}
#line 49
# 199 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareC__default__fired(void )
#line 199
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareC__fired(void ){
#line 49
  HplAtm128Timer3P__CompareC__default__fired();
#line 49
}
#line 49
# 204 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time)
#line 204
{
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t){
#line 51
  HplAtm128Timer3P__Capture__default__captured(t);
#line 51
}
#line 51
# 22 "BenchmarkC.nc"
static inline void BenchmarkC__Timer__overflow(void )
{
}

# 216 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 71
  BenchmarkC__Timer__overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void )
#line 51
{
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer3P__Timer__overflow(void ){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 61
}
#line 61
# 387 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 387
{
  SerialP__rx_state_machine(FALSE, data);
}

# 83 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 83
  SerialP__SerialFrameComm__dataReceived(data);
#line 83
}
#line 83
# 384 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 384
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 74 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 74
  SerialP__SerialFrameComm__delimiterReceived();
#line 74
}
#line 74
# 61 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 116 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 391 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 391
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 192 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 192
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 188
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 188
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 215
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 215
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 217
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 309 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 309
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 312
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 69
}
#line 69
# 210 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 210
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 232 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 232
{
  uint8_t tmp;
#line 233
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 234
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 238
    tmp = 0;
    }
#line 239
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 248
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 250
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 252
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 254
      SerialP__MaybeScheduleTx();
    }
}

# 233 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 255
            ;
      }
  }
}

# 58 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 58
}
#line 58
# 299 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 299
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 301
  return tmp;
}

#line 303
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 303
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 305
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 305
    SerialP__rxBuf.readPtr = 0;
    }
#line 306
  return tmp;
}

#line 295
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 295
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 297
    SerialP__rxBuf.writePtr = 0;
    }
}

# 55 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 55
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 68 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 68
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 68
}
#line 68
# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/PlatformInterrupt.nc"
inline static void HplAtm128UartP__PlatformInterrupt__postAmble(void ){
#line 37
  TOSThreadsInterruptP__PlatformInterrupt__postAmble();
#line 37
}
#line 37
# 54 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 513 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 513
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 515
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 167 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 167
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 170
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 642 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 642
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP__txState) {

        case SerialP__TXSTATE_PROTO: 

          txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

        SerialP__txState = SerialP__TXSTATE_INFO;



        SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
        break;

        case SerialP__TXSTATE_SEQNO: 
          txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
        SerialP__txState = SerialP__TXSTATE_INFO;
        SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
        break;

        case SerialP__TXSTATE_INFO: 
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 666
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 673
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
#line 684
            __nesc_atomic_end(__nesc_atomic); }
        break;

        case SerialP__TXSTATE_FCS1: 
          txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
        SerialP__txState = SerialP__TXSTATE_FCS2;
        break;

        case SerialP__TXSTATE_FCS2: 
          txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
        SerialP__txState = SerialP__TXSTATE_ENDFLAG;
        break;

        case SerialP__TXSTATE_ENDFLAG: 
          txResult = SerialP__SerialFrameComm__putDelimiter();
        SerialP__txState = SerialP__TXSTATE_ENDWAIT;
        break;

        case SerialP__TXSTATE_ENDWAIT: 
          SerialP__txState = SerialP__TXSTATE_FINISH;
        case SerialP__TXSTATE_FINISH: 
          SerialP__MaybeScheduleTx();
        break;
        case SerialP__TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP__txState = SerialP__TXSTATE_ERROR;
        SerialP__MaybeScheduleTx();
      }
  }
}

# 89 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 89
  SerialP__SerialFrameComm__putDone();
#line 89
}
#line 89
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 104 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC__state.sendEscape) {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
      HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
    }
  else {
      HdlcTranslateC__SerialFrameComm__putDone();
    }
}

# 57 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 282 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 282
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 281 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 281
{
}

# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 49 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/RealMainImplP.nc"
  int main(void )
#line 49
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 50
    {

      RealMainImplP__ThreadSchedulerBoot__booted();
    }
#line 53
    __nesc_atomic_end(__nesc_atomic); }




  return -1;
}

# 56 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
static thread_t *ThreadMapP__StaticThreadInfo__default__get(uint8_t id)
#line 56
{
  return ThreadMapP__DynamicThreadInfo__get(id);
}

# 40 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadInfo.nc"
static thread_t *ThreadMapP__StaticThreadInfo__get(uint8_t arg_0x405e48b0){
#line 40
  struct thread *__nesc_result;
#line 40

#line 40
  switch (arg_0x405e48b0) {
#line 40
    case /*BenchmarkAppC.Produtor*/CoroutineC__0__THREAD_ID:
#line 40
      __nesc_result = /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadInfo__get();
#line 40
      break;
#line 40
    case /*BenchmarkAppC.Consumidor*/CoroutineC__1__THREAD_ID:
#line 40
      __nesc_result = /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadInfo__get();
#line 40
      break;
#line 40
    case /*BenchmarkAppC.SerialSender*/CoroutineC__2__THREAD_ID:
#line 40
      __nesc_result = /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadInfo__get();
#line 40
      break;
#line 40
    case TOSTHREAD_TOS_THREAD_ID:
#line 40
      __nesc_result = TinyOSMainP__ThreadInfo__get();
#line 40
      break;
#line 40
    default:
#line 40
      __nesc_result = ThreadMapP__StaticThreadInfo__default__get(arg_0x405e48b0);
#line 40
      break;
#line 40
    }
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 116 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__TaskScheduler__runNextTask(void )
#line 116
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 118
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) {
        {
          unsigned char __nesc_temp = 
#line 121
          FALSE;

#line 121
          return __nesc_temp;
        }
      }
  }
#line 124
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 149
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
#line 149
{
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x4038b4a8){
#line 64
  switch (arg_0x4038b4a8) {
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 64
      break;
#line 64
    case /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer:
#line 64
      /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__runTask();
#line 64
      break;
#line 64
    case SystemCallP__threadTask:
#line 64
      SystemCallP__threadTask__runTask();
#line 64
      break;
#line 64
    case SerialP__RunTx:
#line 64
      SerialP__RunTx__runTask();
#line 64
      break;
#line 64
    case SerialP__startDoneTask:
#line 64
      SerialP__startDoneTask__runTask();
#line 64
      break;
#line 64
    case SerialP__stopDoneTask:
#line 64
      SerialP__stopDoneTask__runTask();
#line 64
      break;
#line 64
    case SerialP__defaultSerialFlushTask:
#line 64
      SerialP__defaultSerialFlushTask__runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x4038b4a8);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 324 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static error_t TinyThreadSchedulerP__ThreadScheduler__wakeupThread(uint8_t id)
#line 324
{
  thread_t *t = TinyThreadSchedulerP__ThreadInfo__get(id);

#line 326
  if (t->state == TOSTHREAD_STATE_SUSPENDED) {
      t->state = TOSTHREAD_STATE_READY;
      if (t != TinyThreadSchedulerP__tos_thread) {
          TinyThreadSchedulerP__ThreadQueue__enqueue(&TinyThreadSchedulerP__ready_queue, TinyThreadSchedulerP__ThreadInfo__get(id));
        }






      return SUCCESS;
    }
  return FAIL;
}

# 84 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static error_t LinkedListC__insert_element(linked_list_t *l, list_element_t **previous_next, list_element_t *e)
#line 84
{
  if (e == (void *)0) {
#line 85
    return FAIL;
    }
#line 86
  e->next = *previous_next;
  *previous_next = e;
  l->size++;
  return SUCCESS;
}

# 59 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SystemCallQueueP.nc"
static syscall_t *SystemCallQueueP__SystemCallQueue__find(syscall_queue_t *q, uint8_t id)
#line 59
{
  syscall_t *s;

#line 61
  for (s = (syscall_t *)SystemCallQueueP__LinkedList__getFirst(& q->l); 
  s != (void *)0; 
  s = (syscall_t *)SystemCallQueueP__LinkedList__getAfter(& q->l, (list_element_t *)s)) {
      if (s->id == id) {
#line 64
        return s;
        }
    }
#line 66
  return (void *)0;
}

# 117 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static list_element_t *LinkedListC__LinkedList__getFirst(linked_list_t *l)
#line 117
{
  if (l->head == (void *)0) {
#line 118
    return (void *)0;
    }
#line 119
  return l->head;
}

#line 171
static list_element_t *LinkedListC__LinkedList__getAfter(linked_list_t *l, list_element_t *e)
#line 171
{
  list_element_t *temp = LinkedListC__get_element(l, e);

#line 173
  if (temp == (void *)0) {
#line 173
    return (void *)0;
    }
#line 174
  if (temp->next == (void *)0) {
#line 174
    return (void *)0;
    }
#line 175
  return temp->next;
}

# 145 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
#line 145
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 146
    {
#line 146
      {
        unsigned char __nesc_temp = 
#line 146
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 146
          __nesc_atomic_end(__nesc_atomic); 
#line 146
          return __nesc_temp;
        }
      }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
}

# 347 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 347
{
  bool turnOff = FALSE;

#line 349
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
      SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
        SerialP__offPending = FALSE;
#line 357
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
        SerialP__offPending = TRUE;
#line 360
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 86
{
  HdlcTranslateC__state.sendEscape = 0;
  HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 165 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 165
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 166
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 169
    __nesc_atomic_end(__nesc_atomic); }
}

# 502 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 502
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 503
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 509
    __nesc_atomic_end(__nesc_atomic); }
}

# 161 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__NUM_TIMERS; num++) 
    {
      /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer_t *timer = &/*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__fired(num);
              break;
            }
        }
    }
  /*ThreadTimersC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__postTask();
}

# 346 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static thread_t *TinyThreadSchedulerP__ThreadScheduler__threadInfo(uint8_t id)
#line 346
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 347
    {
      struct thread *__nesc_temp = 
#line 347
      TinyThreadSchedulerP__ThreadInfo__get(id);

      {
#line 347
        __nesc_atomic_end(__nesc_atomic); 
#line 347
        return __nesc_temp;
      }
    }
#line 349
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 212 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 54 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadInfoP.nc"
static error_t /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__init(void )
#line 54
{
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info.next_thread = (void *)0;
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info.id = 2;
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info.init_block = (void *)0;
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info.stack_ptr = (stack_ptr_t )&((uint8_t *)/*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__stack)[sizeof /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__stack - sizeof(stack_ptr_t )];
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info.state = TOSTHREAD_STATE_INACTIVE;
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info.mutex_count = 0;
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info.start_ptr = /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__run_thread;
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info.start_arg_ptr = (void *)0;
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__thread_info.syscall = (void *)0;
  return SUCCESS;
}

#line 50
static __attribute((noinline)) void /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__run_thread(void *arg)
#line 50
{
  /*BenchmarkAppC.SerialSender.ThreadInfoP*/ThreadInfoP__2__ThreadFunction__signalThreadRun(arg);
}

# 33 "BenchmarkC.nc"
static void BenchmarkC__SerialSender__run(void *arg)
{
  message_t msg;

  BenchmarkC__t1 = BenchmarkC__Timer__get() - BenchmarkC__t1;

  while (BenchmarkC__AMControl__start() != SUCCESS) ;

  BenchmarkC__tempo = BenchmarkC__Packet__getPayload(&msg, sizeof(uint32_t ));
  *BenchmarkC__tempo = BenchmarkC__t1;

  while (BenchmarkC__BlockingAMSend__send(AM_BROADCAST_ADDR, 
  &msg, sizeof(uint32_t )) != SUCCESS) ;


  *BenchmarkC__tempo = BenchmarkC__buffer;
  while (BenchmarkC__BlockingAMSend__send(AM_BROADCAST_ADDR, 
  &msg, sizeof(uint32_t )) != SUCCESS) ;

  BenchmarkC__Leds__led1Toggle();
}

# 69 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
static /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type high = /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper;
      /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type low = /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__get();

#line 76
      if (/*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMicro32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*CounterMicro32C.Transform32*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 42 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static list_element_t *LinkedListC__get_elementAt(linked_list_t *l, uint8_t i)
#line 42
{
  if (i >= l->size) {
#line 43
    return (void *)0;
    }
  else {
#line 44
    if (l->head == (void *)0) {
#line 44
      return (void *)0;
      }
    else 
#line 45
      {
        list_element_t *temp = l->head;

#line 47
        while (i-- > 0) {
            temp = temp->next;
          }
        return temp;
      }
    }
}

# 63 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/SystemCallP.nc"
static error_t SystemCallP__SystemCall__start(void *syscall_ptr, syscall_t *s, syscall_id_t id, void *p)
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 64
    {

      SystemCallP__current_call = s;
      SystemCallP__current_call->id = id;
      SystemCallP__current_call->thread = SystemCallP__ThreadScheduler__currentThreadInfo();
      SystemCallP__current_call->thread->syscall = s;
      SystemCallP__current_call->params = p;

      if (syscall_ptr != SYSCALL_WAIT_ON_EVENT) {
          SystemCallP__current_call->syscall_ptr = syscall_ptr;
          SystemCallP__threadTask__postTask();
          SystemCallP__ThreadScheduler__wakeupThread(TOSTHREAD_TOS_THREAD_ID);
        }

      {
        unsigned char __nesc_temp = 
#line 78
        SystemCallP__ThreadScheduler__suspendCurrentThread();

        {
#line 78
          __nesc_atomic_end(__nesc_atomic); 
#line 78
          return __nesc_temp;
        }
      }
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 270 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static error_t TinyThreadSchedulerP__ThreadScheduler__suspendCurrentThread(void )
#line 270
{
  /* atomic removed: atomic calls only */
#line 271
  {
    if (TinyThreadSchedulerP__current_thread->state == TOSTHREAD_STATE_ACTIVE) {
        TinyThreadSchedulerP__current_thread->state = TOSTHREAD_STATE_SUSPENDED;
        TinyThreadSchedulerP__suspend(TinyThreadSchedulerP__current_thread);
        {
          unsigned char __nesc_temp = 
#line 275
          SUCCESS;

#line 275
          return __nesc_temp;
        }
      }
#line 277
    {
      unsigned char __nesc_temp = 
#line 277
      FAIL;

#line 277
      return __nesc_temp;
    }
  }
}

#line 101
static void TinyThreadSchedulerP__sleepWhileIdle(void )
#line 101
{
  while (TRUE) {
      bool mt;

      /* atomic removed: atomic calls only */
#line 104
      mt = TinyThreadSchedulerP__ThreadQueue__isEmpty(&TinyThreadSchedulerP__ready_queue) == TRUE;
      if (!mt || TinyThreadSchedulerP__tos_thread->state == TOSTHREAD_STATE_READY) {
#line 105
        break;
        }
#line 106
      TinyThreadSchedulerP__McuSleep__sleep();
    }
}

#line 133
static void TinyThreadSchedulerP__interrupt(thread_t *thread)
#line 133
{
  TinyThreadSchedulerP__yielding_thread = thread;
  TinyThreadSchedulerP__scheduleNextThread();
  if (TinyThreadSchedulerP__current_thread != TinyThreadSchedulerP__yielding_thread) {
      TinyThreadSchedulerP__switchThreads();
    }
}

#line 115
static void TinyThreadSchedulerP__scheduleNextThread(void )
#line 115
{
  if (TinyThreadSchedulerP__tos_thread->state == TOSTHREAD_STATE_READY) {
    TinyThreadSchedulerP__current_thread = TinyThreadSchedulerP__tos_thread;
    }
  else {
#line 118
    if (TinyThreadSchedulerP__briefly_interrupted_thread != (void *)0) 
      {
        TinyThreadSchedulerP__current_thread = TinyThreadSchedulerP__briefly_interrupted_thread;
        TinyThreadSchedulerP__briefly_interrupted_thread = (void *)0;
      }
    else {
      TinyThreadSchedulerP__current_thread = TinyThreadSchedulerP__ThreadQueue__dequeue(&TinyThreadSchedulerP__ready_queue);
      }
    }
#line 126
  TinyThreadSchedulerP__current_thread->state = TOSTHREAD_STATE_ACTIVE;
}

# 148 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static list_element_t *LinkedListC__LinkedList__removeAt(linked_list_t *l, uint8_t i)
#line 148
{
  if (i == 0) {
    return LinkedListC__LinkedList__removeFirst(l);
    }
  else 
#line 151
    {
      list_element_t *temp = LinkedListC__get_elementAt(l, i - 1);

#line 153
      if (temp == (void *)0) {
#line 153
        return (void *)0;
        }
      else {
#line 154
        return LinkedListC__remove_element(l, & temp->next);
        }
    }
}

#line 92
static list_element_t *LinkedListC__remove_element(linked_list_t *l, list_element_t **previous_next)
#line 92
{
  list_element_t *e = *previous_next;

#line 94
  *previous_next = (*previous_next)->next;
  e->next = (void *)0;
  l->size--;
  return e;
}

# 88 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static __attribute((noinline)) void TinyThreadSchedulerP__switchThreads(void )
#line 88
{
   __asm ("mov %0,r0 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r0)); __asm ("mov %0,r1 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r1)); __asm ("mov %0,r2 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r2)); __asm ("mov %0,r3 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r3)); __asm ("mov %0,r4 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r4)); __asm ("mov %0,r5 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r5)); __asm ("mov %0,r6 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r6)); __asm ("mov %0,r7 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r7)); __asm ("mov %0,r8 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r8)); __asm ("mov %0,r9 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r9)); __asm ("mov %0,r10 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r10)); __asm ("mov %0,r11 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r11)); __asm ("mov %0,r12 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r12)); __asm ("mov %0,r13 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r13)); __asm ("mov %0,r14 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r14)); __asm ("mov %0,r15 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r15)); __asm ("mov %0,r16 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r16)); __asm ("mov %0,r17 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r17)); __asm ("mov %0,r18 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r18)); __asm ("mov %0,r19 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r19)); __asm ("mov %0,r20 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r20)); __asm ("mov %0,r21 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r21)); __asm ("mov %0,r22 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r22)); __asm ("mov %0,r23 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r23)); __asm ("mov %0,r24 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r24)); __asm ("mov %0,r25 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r25)); __asm ("mov %0,r26 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r26)); __asm ("mov %0,r27 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r27)); __asm ("mov %0,r28 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r28)); __asm ("mov %0,r29 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r29)); __asm ("mov %0,r30 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r30)); __asm ("mov %0,r31 \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.r31));;
#line 89
   __asm ("in %0,__SREG__ \n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->regs.status));;
#line 89
   __asm ("in %A0, __SP_L__\n\t""in %B0, __SP_H__\n\t" : "=r"(TinyThreadSchedulerP__yielding_thread->stack_ptr));;
#line 89
   __asm ("out __SP_H__,%B0 \n\t""out __SP_L__,%A0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->stack_ptr)); __asm ("out __SREG__,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.status));;
#line 89
   __asm ("mov r0,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r0)); __asm ("mov r1,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r1)); __asm ("mov r2,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r2)); __asm ("mov r3,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r3)); __asm ("mov r4,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r4)); __asm ("mov r5,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r5)); __asm ("mov r6,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r6)); __asm ("mov r7,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r7)); __asm ("mov r8,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r8)); __asm ("mov r9,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r9)); __asm ("mov r10,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r10)); __asm ("mov r11,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r11)); __asm ("mov r12,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r12)); __asm ("mov r13,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r13)); __asm ("mov r14,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r14)); __asm ("mov r15,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r15)); __asm ("mov r16,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r16)); __asm ("mov r17,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r17)); __asm ("mov r18,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r18)); __asm ("mov r19,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r19)); __asm ("mov r20,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r20)); __asm ("mov r21,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r21)); __asm ("mov r22,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r22)); __asm ("mov r23,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r23)); __asm ("mov r24,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r24)); __asm ("mov r25,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r25)); __asm ("mov r26,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r26)); __asm ("mov r27,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r27)); __asm ("mov r28,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r28)); __asm ("mov r29,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r29)); __asm ("mov r30,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r30)); __asm ("mov r31,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r31));;
}

# 182 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/LinkedListC.nc"
static list_element_t *LinkedListC__LinkedList__remove(linked_list_t *l, list_element_t *e)
#line 182
{
  list_element_t *temp;

#line 184
  if (l->head == (void *)0) {
#line 184
    return (void *)0;
    }
#line 185
  if (l->head == e) {
#line 185
    return LinkedListC__remove_element(l, & l->head);
    }
  temp = LinkedListC__get_element_before(l, e);
  if (temp == (void *)0) {
#line 188
    return (void *)0;
    }
  else {
#line 189
    return LinkedListC__remove_element(l, & temp->next);
    }
}

# 74 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/BlockingAMSenderImplP.nc"
static error_t /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__BlockingAMSend__send(am_id_t am_id, am_addr_t addr, message_t *msg, uint8_t len)
#line 74
{
  syscall_t s;
  /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__params_t p;

#line 77
  /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Mutex__lock(&/*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__my_mutex);
  if (/*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__send_call == (void *)0) {
      /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__send_call = &s;

      p.addr = addr;
      p.msg = msg;
      p.len = len;

      /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__SystemCall__start(&/*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__sendTask, &s, am_id, &p);
      /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__send_call = (void *)0;
    }
  else 
#line 87
    {
      p.error = EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 91
    {
      /*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__Mutex__unlock(&/*BlockingSerialAMSenderP.BlockingAMSenderImplP*/BlockingAMSenderImplP__0__my_mutex);
      {
        unsigned char __nesc_temp = 
#line 93
        p.error;

        {
#line 93
          __nesc_atomic_end(__nesc_atomic); 
#line 93
          return __nesc_temp;
        }
      }
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "BenchmarkC.nc"
static void BenchmarkC__Consumidor__run(void *arg)
#line 72
{
  uint16_t num_prods;
#line 73
  uint16_t j;
  uint16_t counter = 0;

  for (num_prods = 0; num_prods < 100; num_prods++) 
    {
      counter = BenchmarkC__buffer;


      for (j = 0; j < 100; j++) 
        counter *= 3;

      BenchmarkC__Consumidor__yield();
    }
  BenchmarkC__SerialSender__start((void *)0);
}

# 281 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static error_t TinyThreadSchedulerP__ThreadScheduler__interruptCurrentThread(void )
#line 281
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 282
    {
      if (TinyThreadSchedulerP__current_thread->state == TOSTHREAD_STATE_ACTIVE) {
          TinyThreadSchedulerP__current_thread->state = TOSTHREAD_STATE_READY;
          if (TinyThreadSchedulerP__current_thread != TinyThreadSchedulerP__tos_thread) {
            TinyThreadSchedulerP__ThreadQueue__enqueue(&TinyThreadSchedulerP__ready_queue, TinyThreadSchedulerP__current_thread);
            }
#line 287
          TinyThreadSchedulerP__interrupt(TinyThreadSchedulerP__current_thread);
          {
            unsigned char __nesc_temp = 
#line 288
            SUCCESS;

            {
#line 288
              __nesc_atomic_end(__nesc_atomic); 
#line 288
              return __nesc_temp;
            }
          }
        }
#line 290
      {
        unsigned char __nesc_temp = 
#line 290
        FAIL;

        {
#line 290
          __nesc_atomic_end(__nesc_atomic); 
#line 290
          return __nesc_temp;
        }
      }
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 63 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/StaticThreadP.nc"
static error_t StaticThreadP__Coroutine__start(uint8_t id, void *arg)
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 64
    {
      if (StaticThreadP__init(id, arg) == SUCCESS) {
          error_t e = StaticThreadP__ThreadScheduler__startThread(id);

#line 67
          if (e == SUCCESS) {
            StaticThreadP__ThreadNotification__justCreated(id);
            }
#line 69
          {
            unsigned char __nesc_temp = 
#line 69
            e;

            {
#line 69
              __nesc_atomic_end(__nesc_atomic); 
#line 69
              return __nesc_temp;
            }
          }
        }
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
#line 72
  return FAIL;
}

# 54 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadInfoP.nc"
static error_t /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__init(void )
#line 54
{
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info.next_thread = (void *)0;
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info.id = 1;
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info.init_block = (void *)0;
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info.stack_ptr = (stack_ptr_t )&((uint8_t *)/*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__stack)[sizeof /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__stack - sizeof(stack_ptr_t )];
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info.state = TOSTHREAD_STATE_INACTIVE;
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info.mutex_count = 0;
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info.start_ptr = /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__run_thread;
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info.start_arg_ptr = (void *)0;
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__thread_info.syscall = (void *)0;
  return SUCCESS;
}

#line 50
static __attribute((noinline)) void /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__run_thread(void *arg)
#line 50
{
  /*BenchmarkAppC.Consumidor.ThreadInfoP*/ThreadInfoP__1__ThreadFunction__signalThreadRun(arg);
}

static error_t /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__init(void )
#line 54
{
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info.next_thread = (void *)0;
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info.id = 0;
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info.init_block = (void *)0;
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info.stack_ptr = (stack_ptr_t )&((uint8_t *)/*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__stack)[sizeof /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__stack - sizeof(stack_ptr_t )];
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info.state = TOSTHREAD_STATE_INACTIVE;
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info.mutex_count = 0;
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info.start_ptr = /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__run_thread;
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info.start_arg_ptr = (void *)0;
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__thread_info.syscall = (void *)0;
  return SUCCESS;
}

#line 50
static __attribute((noinline)) void /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__run_thread(void *arg)
#line 50
{
  /*BenchmarkAppC.Produtor.ThreadInfoP*/ThreadInfoP__0__ThreadFunction__signalThreadRun(arg);
}

# 199 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static __attribute((noinline)) __attribute((naked)) void TinyThreadSchedulerP__threadWrapper(void )
#line 199
{
  thread_t *t;

#line 201
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 201
    t = TinyThreadSchedulerP__current_thread;
#line 201
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_enable_interrupt();
  (* t->start_ptr)(t->start_arg_ptr);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 206
    {
      TinyThreadSchedulerP__stop(t);
      TinyThreadSchedulerP__sleepWhileIdle();
      TinyThreadSchedulerP__scheduleNextThread();
      TinyThreadSchedulerP__restoreThread();
    }
#line 211
    __nesc_atomic_end(__nesc_atomic); }
}

# 74 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/ThreadMapP.nc"
static void ThreadMapP__DynamicThreadCleanup__default__cleanup(uint8_t id)
#line 74
{
  ThreadMapP__StaticThreadCleanup__cleanup(id);
}

# 37 "/opt/tinyos-2.1.1/tos/lib/coroutines/interfaces/ThreadCleanup.nc"
static void ThreadMapP__DynamicThreadCleanup__cleanup(uint8_t arg_0x405e4148){
#line 37
    ThreadMapP__DynamicThreadCleanup__default__cleanup(arg_0x405e4148);
#line 37
}
#line 37
# 91 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TinyThreadSchedulerP.nc"
static __attribute((noinline)) void TinyThreadSchedulerP__restoreThread(void )
#line 91
{
   __asm ("out __SP_H__,%B0 \n\t""out __SP_L__,%A0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->stack_ptr)); __asm ("out __SREG__,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.status));;
#line 92
   __asm ("mov r0,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r0)); __asm ("mov r1,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r1)); __asm ("mov r2,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r2)); __asm ("mov r3,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r3)); __asm ("mov r4,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r4)); __asm ("mov r5,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r5)); __asm ("mov r6,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r6)); __asm ("mov r7,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r7)); __asm ("mov r8,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r8)); __asm ("mov r9,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r9)); __asm ("mov r10,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r10)); __asm ("mov r11,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r11)); __asm ("mov r12,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r12)); __asm ("mov r13,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r13)); __asm ("mov r14,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r14)); __asm ("mov r15,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r15)); __asm ("mov r16,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r16)); __asm ("mov r17,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r17)); __asm ("mov r18,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r18)); __asm ("mov r19,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r19)); __asm ("mov r20,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r20)); __asm ("mov r21,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r21)); __asm ("mov r22,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r22)); __asm ("mov r23,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r23)); __asm ("mov r24,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r24)); __asm ("mov r25,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r25)); __asm ("mov r26,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r26)); __asm ("mov r27,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r27)); __asm ("mov r28,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r28)); __asm ("mov r29,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r29)); __asm ("mov r30,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r30)); __asm ("mov r31,%0 \n\t" :  : "r"(TinyThreadSchedulerP__current_thread->regs.r31));;
}

# 56 "BenchmarkC.nc"
static void BenchmarkC__Produtor__run(void *arg)
#line 56
{
  uint16_t counter = 1;
  uint16_t num_prods;
#line 58
  uint16_t j;

  for (num_prods = 0; num_prods < 100; num_prods++) 
    {

      for (j = 0; j < 100; j++) 
        counter *= 3;

      BenchmarkC__buffer = counter;

      BenchmarkC__Produtor__yield();
    }
}

# 179 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 179
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
  HplAtm128Timer0AsyncP__PlatformInterrupt__postAmble();
}

# 48 "/opt/tinyos-2.1.1/tos/lib/coroutines/system/TOSThreadsInterruptP.nc"
static __attribute((noinline)) void TOSThreadsInterruptP__interruptThread(void )
#line 48
{
  if (TOSThreadsInterruptP__ThreadScheduler__wakeupThread(TOSTHREAD_TOS_THREAD_ID) == SUCCESS) {
    if (TOSThreadsInterruptP__ThreadScheduler__currentThreadId() != TOSTHREAD_TOS_THREAD_ID) 
      {
        TOSThreadsInterruptP__ThreadScheduler__brieflyInterruptCurrentThread();
      }
    }
}

# 186 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_16(void )
#line 186
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
  HplAtm128Timer0AsyncP__PlatformInterrupt__postAmble();
}

# 190 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void )
#line 190
{
  HplAtm128Timer3P__CompareA__fired();
  HplAtm128Timer3P__PlatformInterrupt__postAmble();
}

__attribute((interrupt))   void __vector_27(void )
#line 195
{
  HplAtm128Timer3P__CompareB__fired();
  HplAtm128Timer3P__PlatformInterrupt__postAmble();
}

__attribute((interrupt))   void __vector_28(void )
#line 200
{
  HplAtm128Timer3P__CompareC__fired();
  HplAtm128Timer3P__PlatformInterrupt__postAmble();
}

__attribute((interrupt))   void __vector_25(void )
#line 205
{
  HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Timer__get());
  HplAtm128Timer3P__PlatformInterrupt__postAmble();
}

__attribute((interrupt))   void __vector_29(void )
#line 210
{
  HplAtm128Timer3P__Timer__overflow();
  HplAtm128Timer3P__PlatformInterrupt__postAmble();
}

# 172 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void )
#line 172
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
  HplAtm128UartP__PlatformInterrupt__postAmble();
}

# 402 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 402
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 285 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 285
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 287
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 297
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 179 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void )
#line 179
{
  HplAtm128UartP__HplUart0__txDone();
  HplAtm128UartP__PlatformInterrupt__postAmble();
}

# 92 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 268 "/opt/tinyos-2.1.1/tos/lib/coroutines/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void )
#line 268
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0x9C);
    }
#line 271
  HplAtm128UartP__PlatformInterrupt__postAmble();
}

__attribute((interrupt))   void __vector_32(void )
#line 274
{
  HplAtm128UartP__HplUart1__txDone();
  HplAtm128UartP__PlatformInterrupt__postAmble();
}

