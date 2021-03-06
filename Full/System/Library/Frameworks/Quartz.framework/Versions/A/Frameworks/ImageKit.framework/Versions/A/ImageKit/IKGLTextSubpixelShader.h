/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IKGLTextSubpixelShader : NSObject {

	void* _program;
	unsigned _framebufferTexture;
	int _viewportWidth;
	int _viewportHeight;
	unsigned _surfaceID;

}

@property (assign) unsigned framebufferTexture;              //@synthesize framebufferTexture=_framebufferTexture - In the implementation block
@property (assign) int viewportWidth;                        //@synthesize viewportWidth=_viewportWidth - In the implementation block
@property (assign) int viewportHeight;                       //@synthesize viewportHeight=_viewportHeight - In the implementation block
@property (assign) unsigned surfaceID;                       //@synthesize surfaceID=_surfaceID - In the implementation block
@property (readonly) void* program;                          //@synthesize program=_program - In the implementation block
-(id)initWithFragmentCode:(const char*)arg1 ;
-(unsigned)framebufferTexture;
-(void)setFramebufferTexture:(unsigned)arg1 ;
-(int)viewportWidth;
-(void)setViewportWidth:(int)arg1 ;
-(int)viewportHeight;
-(void)setViewportHeight:(int)arg1 ;
-(void)setSurfaceID:(unsigned)arg1 ;
-(unsigned)surfaceID;
-(void*)program;
@end

