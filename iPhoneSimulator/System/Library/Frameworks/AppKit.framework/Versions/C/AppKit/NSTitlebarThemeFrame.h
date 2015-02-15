/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSThemeFrame.h>

@class NSImage;

@interface NSTitlebarThemeFrame : NSThemeFrame {

	NSImage* _shadowImage;
	double _shadowAlpha;

}

@property (assign) double shadowAlpha;              //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(char)isOpaque;
-(char)bottomCornerRounded;
-(char)alwaysShowTitlebar;
-(CGRect)_shadowRect;
-(void)_ensureShadowImage;
-(double)shadowAlpha;
-(void)setShadowAlpha:(double)arg1 ;
@end

