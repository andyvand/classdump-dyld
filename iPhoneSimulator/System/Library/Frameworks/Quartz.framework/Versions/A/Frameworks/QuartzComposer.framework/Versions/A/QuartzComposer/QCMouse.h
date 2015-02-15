/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCBooleanPort;

@interface QCMouse : QCPatch {

	QCNumberPort* outputX;
	QCNumberPort* outputY;
	QCBooleanPort* outputButton1;
	QCBooleanPort* outputButton2;
	QCBooleanPort* outputButton3;
	QCNumberPort* outputScrollX;
	QCNumberPort* outputScrollY;
	QCNumberPort* outputScrollZ;
	QCNumberPort* _outputRotation;
	QCNumberPort* _outputMagnification;
	QCNumberPort* _outputSwipeX;
	QCNumberPort* _outputSwipeY;
	QCBooleanPort* _inputResetScroll;
	QCNumberPort* _inputScrollFactor;
	QCBooleanPort* _inputResetRotation;
	QCBooleanPort* _inputResetMagnification;
	CGRect _bounds;
	char _integrate;
	char _multitouch;
	char _integrateRotation;
	char _integrateMagnification;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(int)timeModeWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3 ;
-(void)setIntegrate:(char)arg1 ;
-(void)setIntegrateRotation:(char)arg1 ;
-(void)setIntegrateMagnification:(char)arg1 ;
-(char)integrate;
-(void)setMultitouch:(char)arg1 ;
@end

