/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSNumber.h>

@interface NSDecimalNumber : NSNumber {

	unsigned _exponent : 8;
	unsigned _length : 4;
	unsigned _isNegative : 1;
	unsigned _isCompact : 1;
	unsigned _reserved : 1;
	unsigned _hasExternalRefCount : 1;
	unsigned _refs : 16;
	unsigned short _mantissa[0];

}

@property (readonly) SCD_Struct_NS27 decimalValue; 
@property (readonly) const char* objCType; 
@property (readonly) double doubleValue; 
+(id)isd_propertyValueWithType:(int)arg1 bytesEncodedForSqlite:(const void*)arg2 ;
+(id)decimalNumberWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(char)arg3 ;
+(id)defaultBehavior;
+(id)decimalNumberWithString:(id)arg1 locale:(id)arg2 ;
+(id)minimumDecimalNumber;
+(id)maximumDecimalNumber;
+(id)zero;
+(id)one;
+(void)setDefaultBehavior:(id)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithBool:(char)arg1 ;
+(id)numberWithFloat:(float)arg1 ;
+(id)numberWithUnsignedLongLong:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)numberWithUnsignedShort:(unsigned short)arg1 ;
+(id)numberWithUnsignedLong:(unsigned long long)arg1 ;
+(id)numberWithLong:(long long)arg1 ;
+(id)numberWithDouble:(double)arg1 ;
+(id)numberWithShort:(short)arg1 ;
+(id)numberWithInteger:(long long)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(char)supportsSecureCoding;
+(id)numberWithUnsignedChar:(unsigned char)arg1 ;
+(id)decimalNumberWithDecimal:(SCD_Struct_NS27)arg1 ;
+(id)decimalNumberWithString:(id)arg1 ;
+(id)numberWithChar:(char)arg1 ;
+(id)notANumber;
-(int)isd_quickDirtyCoderType;
-(void*)isd_bytesEncodedForSqlite;
-(int)isd_sqlitePropertyValueType;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithString:(id)arg1 locale:(id)arg2 ;
-(id)initWithDecimal:(SCD_Struct_NS27)arg1 ;
-(id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(char)arg3 ;
-(id)decimalNumberByAdding:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberBySubtracting:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingBy:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByDividingBy:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByRaisingToPower:(unsigned long long)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingBy:(id)arg1 ;
-(id)decimalNumberByAdding:(id)arg1 ;
-(id)decimalNumberBySubstracting:(id)arg1 ;
-(id)decimalNumberBySubstracting:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberBySubtracting:(id)arg1 ;
-(id)decimalNumberByDividingBy:(id)arg1 ;
-(id)decimalNumberByRaisingToPower:(unsigned long long)arg1 ;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 ;
-(id)decimalNumberByRoundingAccordingToBehavior:(id)arg1 ;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(id)description;
-(char)boolValue;
-(int)intValue;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)floatValue;
-(unsigned short)unsignedShortValue;
-(double)doubleValue;
-(long long)longLongValue;
-(long long)compare:(id)arg1 ;
-(unsigned)unsignedIntValue;
-(const char*)objCType;
-(void)getValue:(void*)arg1 ;
-(Class)classForCoder;
-(unsigned long long)unsignedLongValue;
-(short)shortValue;
-(unsigned long long)unsignedLongLongValue;
-(long long)longValue;
-(SCD_Struct_NS27)decimalValue;
-(char)charValue;
-(unsigned char)unsignedCharValue;
@end

