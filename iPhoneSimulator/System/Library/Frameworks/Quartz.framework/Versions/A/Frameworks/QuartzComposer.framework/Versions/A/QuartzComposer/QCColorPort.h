/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPort.h>

@interface QCColorPort : QCPort {

	double _red;
	double _green;
	double _blue;
	double _alpha;
	void** _unused3[4];

}
+(Class)baseClass;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(double)alphaComponent;
-(char)setValue:(id)arg1 ;
-(void)_windowWillClose:(id)arg1 ;
-(id)value;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(id)tooltipString;
-(void)setRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(CGColorRef)newCGColor;
-(void)setRedComponent:(double)arg1 ;
-(void)setGreenComponent:(double)arg1 ;
-(void)setBlueComponent:(double)arg1 ;
-(void)setAlphaComponent:(double)arg1 ;
-(CGColorRef)createCGColor;
-(id)CIColorWithColorSpace:(CGColorSpaceRef)arg1 ;
-(char)canConnectToPort:(id)arg1 ;
-(char)takeValue:(id)arg1 fromPort:(id)arg2 ;
-(id)stateValue;
-(char)setStateValue:(id)arg1 ;
-(char)acceptValuesOfClass:(Class)arg1 ;
-(Class)valueClass;
-(id)setupParameterView;
-(void)resetParameterView:(id)arg1 ;
-(void)editValueWithEvent:(id)arg1 inView:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)_doneColor:(id)arg1 ;
-(id)tooltipExtensionView;
-(CGSize)tooltipExtensionViewSize:(id)arg1 ;
-(void)drawPortView:(id)arg1 ;
-(SCD_Struct_QC4)md5WithTime:(double)arg1 arguments:(id)arg2 ;
@end

