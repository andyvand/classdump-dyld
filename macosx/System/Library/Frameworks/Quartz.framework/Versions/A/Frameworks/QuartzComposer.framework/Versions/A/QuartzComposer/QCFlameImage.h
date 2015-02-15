/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCColorPort, QCImagePort;

@interface QCFlameImage : QCPatch {

	QCColorPort* inputColorStart;
	QCColorPort* inputColorMiddle;
	QCColorPort* inputColorEnd;
	QCImagePort* outputImage;
	unsigned long long _width;
	unsigned long long _height;
	char _colorCorrection;
	unsigned _clut[256];
	char* _bufferAddress;
	unsigned long long _bufferRowBytes;
	unsigned _target;
	unsigned long long _mipmapLevels;

}
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned long long)width;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(unsigned long long)height;
@end
