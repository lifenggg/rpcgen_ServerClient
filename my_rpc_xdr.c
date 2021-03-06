/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "my_rpc.h"

bool_t
xdr_intlist (XDR *xdrs, intlist *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (struct intnode), (xdrproc_t) xdr_intnode))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_intnode (XDR *xdrs, intnode *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->v))
		 return FALSE;
	 if (!xdr_intlist (xdrs, &objp->next))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_coupled_int_list (XDR *xdrs, coupled_int_list *objp)
{
	register int32_t *buf;

	 if (!xdr_intlist (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_intlist (xdrs, &objp->b))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_matrix (XDR *xdrs, matrix *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->data.data_val, (u_int *) &objp->data.data_len, MAXLEN,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->d1))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->d2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_coupled_matrix (XDR *xdrs, coupled_matrix *objp)
{
	register int32_t *buf;

	 if (!xdr_matrix (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_matrix (xdrs, &objp->b))
		 return FALSE;
	return TRUE;
}
