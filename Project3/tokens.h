#ifndef __TOKEN_H_
#define __TOKEN_H_																				/* 
*Defined tokens in Mini Java based on Figure1 in the project instruction
*/
#define ANDnum			257
#define ASSGNum			258
#define DECLARATIONnum 	259
#define DOTnum 			260
#define ENDDECLARATIONSnum 261
#define EQUALnum 		262
#define GTnum 			263
#define IDnum 			264
#define INTnum 			265
#define LBRACnum 		266
#define LPARENnum 		267
#define METHODnum 		268
#define NEnum 			269
#define ORnum 			270
#define PROGRAMnum 		271
#define RBRACnum 		272
#define RPARENnum 		273
#define SEMInum 		274
#define VALnum 			275
#define WHILEnum 		276
#define CLASSnum		277
#define COMMAnum		278
#define DIVIDEnum		279
#define ELSEnum			280
#define EQnum		281
#define GEnum		282
#define	ICONSTnum	283
#define IFnum		284
#define	LBRACEnum	285
#define	LEnum		286
#define	LTnum		287
#define	MINUSnum	288
#define	NOTnum		289
#define	PLUSnum		290
#define RBRACEnum	291
#define RETURNnum	292
#define SCONSTnum	293
#define TIMESnum	294
#define VOIDnum		295
#define malformedComment 296
#define COMMENT 297
#define EOFnum		0
#define errIdentifier 	500 /*to identify malformed identifier*/
#define errComment 		501 /*?????*/
#define errString 		502 /*to identify strings which are not closed using an '*/
#define errIntzero 		503 /*to identify an integer starts with zero */
#define errOther 		504

#endif