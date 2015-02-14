/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface ReedSolomon : NSObject {

	int _expTable[256];
	int _logTable[256];
	int _cachedGeneratorNum;
	int _memoryCapacity;
	SCD_Struct_Re78* _cachedGenerators;

}
-(id)initReedSolomon;
-(char)encode:(int*)arg1 length:(int)arg2 bytes:(int)arg3 ;
-(char)fillPoly:(SCD_Struct_Re78*)arg1 coefficients:(int*)arg2 length:(int)arg3 ;
-(void)clearPoly:(SCD_Struct_Re78*)arg1 ;
-(char)isZero:(SCD_Struct_Re78*)arg1 ;
-(SCD_Struct_Re78*)copyPoly:(SCD_Struct_Re78*)arg1 ;
-(int)addOrSubtract:(int)arg1 with:(int)arg2 ;
-(int)multiply:(int)arg1 with:(int)arg2 ;
-(int)Degree:(SCD_Struct_Re78*)arg1 ;
-(int)polyCoefficient:(SCD_Struct_Re78*)arg1 degree:(int)arg2 ;
-(int)inverse:(int)arg1 ;
-(SCD_Struct_Re78*)multiplyByMonomial:(SCD_Struct_Re78*)arg1 degree:(int)arg2 coefficient:(int)arg3 ;
-(SCD_Struct_Re78*)addOrSubtractPoly:(SCD_Struct_Re78*)arg1 with:(SCD_Struct_Re78*)arg2 ;
-(int)Exp:(int)arg1 ;
-(SCD_Struct_Re78*)multiplyPoly:(SCD_Struct_Re78*)arg1 with:(SCD_Struct_Re78*)arg2 ;
-(SCD_Struct_Re78*)buildGenerator:(int)arg1 ;
-(SCD_Struct_Re78*)createMonomial:(int)arg1 coefficient:(int)arg2 ;
-(int*)coefficients:(SCD_Struct_Re78*)arg1 ;
-(SCD_Struct_Re78*)divide:(SCD_Struct_Re78*)arg1 by:(SCD_Struct_Re78*)arg2 ;
-(void)dealloc;
@end

