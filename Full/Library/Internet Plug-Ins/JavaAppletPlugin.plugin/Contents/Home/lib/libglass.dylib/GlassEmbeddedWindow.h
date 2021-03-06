/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Internet Plug-Ins/JavaAppletPlugin.plugin/Contents/Home/lib/libglass.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libglass.dylib/libglass.dylib-Structs.h>
#import <libglass.dylib/GlassWindow_Normal.h>

@class NSWindow;

@interface GlassEmbeddedWindow : GlassWindow_Normal {

	NSWindow* fullscreenWindow;
	char isKeyWindow;
	GlassEmbeddedWindow* parent;
	GlassEmbeddedWindow* child;

}
+(char)exists:(id)arg1 ;
-(char)_isParent;
-(void)setFullscreenWindow:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 frameRect:(CGRect)arg2 styleMask:(unsigned long long)arg3 screen:(id)arg4 ;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)makeKeyWindow;
-(void)setFrameTopLeftPoint:(CGPoint)arg1 ;
-(char)isKeyWindow;
-(void)setContentView:(id)arg1 ;
-(void)close;
-(void)resignKeyWindow;
-(void)setOpaque:(char)arg1 ;
-(char)isOpaque;
-(double)alphaValue;
-(void)setHasShadow:(char)arg1 ;
-(void)setAlphaValue:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 animate:(char)arg3 ;
-(char)hasShadow;
-(unsigned long long)collectionBehavior;
-(void)invalidateShadow;
@end

