/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSCoder : NSObject
-(SCD_Struct_NS16)decodeMarginForKey:(id)arg1 ;
-(void)encodeMargin:(SCD_Struct_NS16)arg1 forKey:(id)arg2 ;
-(void)encodeQTTimeRange:(SCD_Struct_NS18)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS18)decodeQTTimeRangeForKey:(id)arg1 ;
-(void)encodeSMPTETime:(SMPTETime)arg1 forKey:(id)arg2 ;
-(SMPTETime)decodeSMPTETimeForKey:(id)arg1 ;
-(void)encodeQTTime:(SCD_Struct_NS17)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS17)decodeQTTimeForKey:(id)arg1 ;
-(void)encodeCMTime:(SCD_Struct_NS19)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS19)decodeCMTimeForKey:(id)arg1 ;
-(void)encodeCMTimeRange:(SCD_Struct_NS20)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS20)decodeCMTimeRangeForKey:(id)arg1 ;
-(void)encodeCMTimeMapping:(SCD_Struct_NS21)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS21)decodeCMTimeMappingForKey:(id)arg1 ;
-(id)safeDecodeObjectForKey:(id)arg1 expectedClass:(Class)arg2 ;
-(id)_safeDecodeContainerForKey:(id)arg1 containerClass:(Class)arg2 valueClass:(Class)arg3 ;
-(id)safeDecodeStringForKey:(id)arg1 ;
-(id)safeDecodeDateForKey:(id)arg1 ;
-(id)safeDecodeNumberForKey:(id)arg1 ;
-(id)safeDecodeArrayForKey:(id)arg1 valueClass:(Class)arg2 ;
-(id)safeDecodeSetForKey:(id)arg1 valueClass:(Class)arg2 ;
-(id)safeDecodeDictionaryForKey:(id)arg1 keyClass:(Class)arg2 valueClass:(Class)arg3 ;
-(unsigned char)_decodeByte;
-(int)_decodeDepth;
-(void)_encodeDepth:(int)arg1 ;
-(void)_encodeByte:(unsigned char)arg1 ;
-(id)decodeNXColor;
-(void)encodeTheme:(unsigned long long)arg1 ;
-(void)encodeTheme:(unsigned long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)decodeTheme;
-(unsigned long long)decodeThemeForKey:(id)arg1 ;
-(void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(char)arg3 ;
-(id)CA_decodeObjectForKey:(id)arg1 ;
-(void)CA_encodeCGFloatArray:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(char)CA_decodeCGFloatArray:(double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)allowedClasses;
-(void)encodeBycopyObject:(id)arg1 ;
-(void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(char)arg3 ;
-(void)validateClassSupportsSecureCoding:(Class)arg1 ;
-(void)encodeByrefObject:(id)arg1 ;
-(void)encodeLong:(long long)arg1 forKey:(id)arg2 ;
-(long long)decodeLongForKey:(id)arg1 ;
-(void)setAllowedClasses:(id)arg1 ;
-(id)decodePropertyListForKey:(id)arg1 ;
-(void)validateAllowedClass:(Class)arg1 forKey:(id)arg2 ;
-(void)encodeNXObject:(id)arg1 ;
-(id)decodeNXObject;
-(char)allowsKeyedCoding;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(id)decodeObject;
-(void)encodeObject:(id)arg1 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(char)decodeBoolForKey:(id)arg1 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(char)containsValueForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeIntForKey:(id)arg1 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(id)decodeDataObject;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)encodeSize:(CGSize)arg1 forKey:(id)arg2 ;
-(CGSize)decodeSize;
-(CGSize)decodeSizeForKey:(id)arg1 ;
-(id)decodePropertyList;
-(void)encodePropertyList:(id)arg1 ;
-(unsigned)systemVersion;
-(NSZone*)objectZone;
-(void)encodeRootObject:(id)arg1 ;
-(CGPoint)decodePoint;
-(CGPoint)decodePointForKey:(id)arg1 ;
-(void)encodePoint:(CGPoint)arg1 ;
-(void)encodePoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeSize:(CGSize)arg1 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(CGRect)decodeRectForKey:(id)arg1 ;
-(char)requiresSecureCoding;
-(void)encodeRect:(CGRect)arg1 forKey:(id)arg2 ;
-(CGRect)decodeRect;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(void)setObjectZone:(NSZone*)arg1 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)encodeRect:(CGRect)arg1 ;
@end

