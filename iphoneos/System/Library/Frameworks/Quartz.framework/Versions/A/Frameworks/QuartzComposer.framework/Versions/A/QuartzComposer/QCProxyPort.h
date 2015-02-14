/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPort.h>

@interface QCProxyPort : QCPort
+(id)allocWithZone:(NSZone*)arg1 ;
+(Class)baseClass;
-(id)object;
-(void)setStringValue:(id)arg1 ;
-(id)stringValue;
-(double)doubleValue;
-(char)booleanValue;
-(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(void)setDoubleValue:(double)arg1 ;
-(char)setValue:(id)arg1 ;
-(char)setObject:(id)arg1 ;
-(Class)objectClass;
-(id)value;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(void)portWillDeleteFromNode;
-(unsigned long long)_timestamp;
-(void)setRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(char)canConnectToPort:(id)arg1 ;
-(char)takeValue:(id)arg1 fromPort:(id)arg2 ;
-(id)stateValue;
-(char)setStateValue:(id)arg1 ;
-(char)acceptValuesOfClass:(Class)arg1 ;
-(Class)valueClass;
-(void)setIndexValue:(unsigned long long)arg1 ;
-(unsigned long long)indexValue;
-(void)setBooleanValue:(char)arg1 ;
-(id)rawValue;
-(id)structureValue;
-(void)setStructureValue:(id)arg1 ;
-(id)imageValue;
-(void)setImageValue:(id)arg1 ;
-(id)setupParameterView;
-(void)resetParameterView:(id)arg1 ;
-(void)editValueWithEvent:(id)arg1 inView:(id)arg2 atPoint:(CGPoint)arg3 ;
-(id)_argumentsFromAttributesKey:(id)arg1 originalArguments:(id)arg2 ;
-(void)setRawValue:(id)arg1 ;
-(id)meshValue;
-(void)_setConnectedPort:(id)arg1 ;
-(SCD_Struct_QC4)md5WithTime:(double)arg1 arguments:(id)arg2 ;
-(void)setMeshValue:(id)arg1 ;
@end

