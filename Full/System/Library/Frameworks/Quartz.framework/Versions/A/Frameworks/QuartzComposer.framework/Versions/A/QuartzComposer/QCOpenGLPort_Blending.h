/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCIndexPort.h>
#import <QuartzComposer/QCOpenGLPort.h>

@interface QCOpenGLPort_Blending : QCIndexPort <QCOpenGLPort> {

	unsigned char _enabled;
	unsigned char _testingEnabled;
	int _sourceFunction;
	int _destFunction;
	int _alphaFunc;
	double _alphaRef;
	void** _unused4[1];

}
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(void)setOnOpenGLContext:(id)arg1 ;
-(void)unsetOnOpenGLContext:(id)arg1 ;
@end

