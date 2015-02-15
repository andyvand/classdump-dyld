/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPort.h>

@interface QCVirtualPort : QCPort {

	id _value;
	unsigned long long _lastFlagUpdateFrameID;
	void** _unused3[3];

}
+(Class)baseClass;
-(void)dealloc;
-(char)setValue:(id)arg1 ;
-(id)value;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(id)tooltipString;
-(char)canConnectToPort:(id)arg1 ;
-(char)takeValue:(id)arg1 fromPort:(id)arg2 ;
-(id)stateValue;
-(char)setStateValue:(id)arg1 ;
-(char)acceptValuesOfClass:(Class)arg1 ;
-(Class)valueClass;
-(id)rawValue;
-(void)setRawValue:(id)arg1 ;
@end

