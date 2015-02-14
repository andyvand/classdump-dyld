/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPortView.h>

@class QCCGLContext, NSOpenGLContext;

@interface QCPortGLView : QCPortView {

	QCCGLContext* _cglContext;
	NSOpenGLContext* _glContext;

}
-(void)finalize;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)lockFocus;
-(char)wantsBestResolutionOpenGLSurface;
-(id)initWithPort:(id)arg1 ;
-(void)_startRendering:(id)arg1 ;
-(void)_stopRendering:(id)arg1 ;
-(id)cglContext;
@end

