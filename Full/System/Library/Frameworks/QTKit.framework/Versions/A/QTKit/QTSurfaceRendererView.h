/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <AppKit/NSView.h>
#import <QTKit/QTImageConsumerVendor.h>

@class QTSurfaceRenderer, NSColor;

@interface QTSurfaceRendererView : NSView <QTImageConsumerVendor> {

	QTSurfaceRenderer* _renderer;
	NSColor* _bgColor;
	int _flags;
	char _inRenewGState;

}
-(void)windowDidOrderOffScreen:(id)arg1 ;
-(void)windowWillOrderOnScreen:(id)arg1 ;
-(void)_updateGeometry;
-(id)imageConsumer;
-(void)_mainThreadDisplayConfigurationChanged;
-(void)_displayConfigurationChanged:(id)arg1 ;
-(void)rendererWillRelocateSurfaces:(id)arg1 ;
-(void)windowChangedFrame:(id)arg1 ;
-(void)windowChangedNumber:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isOpaque;
-(char)preservesContentDuringLiveResize;
-(id)backgroundColor;
-(void)viewDidMoveToWindow;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(void)renewGState;
-(char)wantsDefaultClipping;
@end

