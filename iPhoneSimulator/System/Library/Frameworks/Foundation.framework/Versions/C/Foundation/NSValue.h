/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSSecureCoding.h>

@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (readonly) SCD_Struct_NS81 MKCoordinateValue; 
@property (readonly) SCD_Struct_NS81 MKCoordinateSpanValue; 
@property (readonly) CATransform3D CATransform3DValue; 
@property (readonly) const char* objCType; 
+(id)valueWithMKCoordinate:(SCD_Struct_NS81)arg1 ;
+(id)valueWithMKCoordinateSpan:(SCD_Struct_NS81)arg1 ;
+(id)_mapkit_valueWithCGPoint:(CGPoint)arg1 ;
+(id)_mapkit_valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)valueWithMargin:(SCD_Struct_NS16)arg1 ;
+(id)valueWithC3DMatrix4x4:(C3DMatrix4x4)arg1 ;
+(id)valueWithSCNVector4:(SCNVector4)arg1 ;
+(id)valueWithC3DVector3:(SCNVector3)arg1 ;
+(id)valueWithSCNVector3:(SCNVector3)arg1 ;
+(id)valueWithC3DVector2:(C3DVector2)arg1 ;
+(id)valueWithC3DVector4:(SCNVector4)arg1 ;
+(id)valueWithQTTimeRange:(SCD_Struct_NS18)arg1 ;
+(id)valueWithSMPTETime:(SMPTETime)arg1 ;
+(id)valueWithQTTime:(SCD_Struct_NS17)arg1 ;
+(id)valueWithCMTime:(SCD_Struct_NS19)arg1 ;
+(id)valueWithCMTimeRange:(SCD_Struct_NS20)arg1 ;
+(id)valueWithCMTimeMapping:(SCD_Struct_NS21)arg1 ;
+(id)valueWithCAPoint3D:(CAPoint3D)arg1 ;
+(id)valueWithCATransform3D:(CATransform3D)arg1 ;
+(id)valueWithCAColorMatrix:(CAColorMatrix)arg1 ;
+(id)value:(const void*)arg1 withObjCType:(const char*)arg2 ;
+(id)valueWithPoint:(CGPoint)arg1 ;
+(id)valueWithRect:(CGRect)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)valueWithSize:(CGSize)arg1 ;
+(id)valueWithRange:(NSRange)arg1 ;
+(id)valueWithNonretainedObject:(id)arg1 ;
+(void)initialize;
+(id)valueWithPointer:(const void*)arg1 ;
+(char)supportsSecureCoding;
+(id)valueWithEdgeInsets:(NSEdgeInsets)arg1 ;
+(id)valueWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
-(char)isNSValue__;
-(id)_mapkit_initWithCADoublePoint:(CGPoint)arg1 ;
-(id)_mapkit_initWithCADoubleRect:(CGRect)arg1 ;
-(id)_mapkit_initWithCGPoint:(CGPoint)arg1 ;
-(CGPoint)CADoublePointValue;
-(CGRect)CADoubleRectValue;
-(id)_mapkit_initWithCGRect:(CGRect)arg1 ;
-(id)_mapkit_initWithZoomRegion:(SCD_Struct_NS87)arg1 ;
-(SCD_Struct_NS87)_mapkit_zoomRegionValue;
-(id)_mapkit_initWithMKMapRect:(SCD_Struct_NS88)arg1 ;
-(SCD_Struct_NS88)MKMapRectValue;
-(SCD_Struct_NS81)MKCoordinateValue;
-(SCD_Struct_NS81)MKCoordinateSpanValue;
-(CGRect)_mapkit_CGRectValue;
-(CGPoint)_mapkit_CGPointValue;
-(CGAffineTransform)_mapkit_CGAffineTransformValue;
-(long long)_ILMediaObjectPropertyCompare:(id)arg1 ;
-(SCD_Struct_NS16)marginValue;
-(C3DMatrix4x4)C3DMatrix4x4Value;
-(SCNVector4)QCSCN_Vector4Value;
-(SCNVector3)QCSCN_Vector3Value;
-(SCNVector3)C3DVector3Value;
-(SCNVector4)C3DVector4Value;
-(C3DVector2)C3DVector2Value;
-(SCD_Struct_NS18)QTTimeRangeValue;
-(SMPTETime)SMPTETimeValue;
-(SCD_Struct_NS17)QTTimeValue;
-(SCD_Struct_NS20)CMTimeRangeValue;
-(SCD_Struct_NS19)CMTimeValue;
-(SCD_Struct_NS21)CMTimeMappingValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_roundToIntegerFromValue:(id)arg1 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(CAPoint3D)CAPoint3DValue;
-(CATransform3D)CATransform3DValue;
-(CAColorMatrix)CAColorMatrixValue;
-(char)isNSValue__;
-(char)_matchType:(const char*)arg1 size:(unsigned long long)arg2 ;
-(char)isEqualToValue:(id)arg1 ;
-(NSEdgeInsets)edgeInsetsValue;
-(id)init;
-(id)description;
-(CGRect)rectValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)pointValue;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)sizeValue;
-(NSRange)rangeValue;
-(id)nonretainedObjectValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void*)pointerValue;
-(const char*)objCType;
-(void)getValue:(void*)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
@end

