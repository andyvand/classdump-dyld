/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImagePort.h>
#import <QuartzComposer/QCOpenGLPort.h>

@class QCImagePort_Cache;

@interface QCOpenGLPort_Image : QCImagePort <QCOpenGLPort> {

	QCImagePort_Cache* _texturePort;
	void** _unused6[4];

}
-(void)dealloc;
-(id)initWithNode:(id)arg1 arguments:(id)arg2 ;
-(id)tooltipString;
-(void)setOnOpenGLContext:(id)arg1 unit:(unsigned)arg2 withBounds:(CGRect)arg3 transformation:(id)arg4 target:(unsigned)arg5 mipmappingLevels:(unsigned long long)arg6 matrix:(double*)arg7 ;
-(void)unsetOnOpenGLContext:(id)arg1 unit:(unsigned)arg2 ;
-(void)setOnOpenGLContext:(id)arg1 ;
-(void)unsetOnOpenGLContext:(id)arg1 ;
-(void)setRawValue:(id)arg1 ;
-(void)setOnOpenGLContext:(id)arg1 unit:(unsigned)arg2 ;
-(void)setOnOpenGLContext:(id)arg1 unit:(unsigned)arg2 fromBounds:(CGRect)arg3 withTarget:(unsigned)arg4 mipmappingLevels:(unsigned long long)arg5 matrix:(double*)arg6 ;
-(void)_clearTexture;
@end

