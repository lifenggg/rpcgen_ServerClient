/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADD_H_RPCGEN
#define _ADD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define ADD_PROG 0x31111111
#define ADDS_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define get_addition 1
extern  int * get_addition_1(int *, CLIENT *);
extern  int * get_addition_1_svc(int *, struct svc_req *);
#define get_time 2
extern  time_t * get_time_1(void *, CLIENT *);
extern  time_t * get_time_1_svc(void *, struct svc_req *);
extern int add_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define get_addition 1
extern  int * get_addition_1();
extern  int * get_addition_1_svc();
#define get_time 2
extern  time_t * get_time_1();
extern  time_t * get_time_1_svc();
extern int add_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADD_H_RPCGEN */
