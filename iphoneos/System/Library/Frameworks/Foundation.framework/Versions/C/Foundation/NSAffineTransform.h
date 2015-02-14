/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSCoding.h>

@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {

	SCD_Struct_NS1 _transformStruct;

}

@property (assign) SCD_Struct_NS1 transformStruct; 
+(void)insertAttribute:(id)arg1 intoView:(id)arg2 anchorPosition:(CGPoint*)arg3 forFilter:(id)arg4 settings:(id)arg5 configuration:(id)arg6 objectController:(id)arg7 ;
+(id)transform;
-(void)set;
-(id)transformBezierPath:(id)arg1 ;
-(void)concat;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(Object*)CA_copyRenderValue;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_NS1)transformStruct;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(void)translateXBy:(double)arg1 yBy:(double)arg2 ;
-(void)scaleXBy:(double)arg1 yBy:(double)arg2 ;
-(void)scaleBy:(double)arg1 ;
-(void)rotateByDegrees:(double)arg1 ;
-(void)appendTransform:(id)arg1 ;
-(void)invert;
-(void)setTransformStruct:(SCD_Struct_NS1)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(id)initWithTransform:(id)arg1 ;
-(void)prependTransform:(id)arg1 ;
-(void)rotateByRadians:(double)arg1 ;
@end

