/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLOverlayButtonLayer.h>

@class QLOverlayProgressLayer;

@interface QLOverlayProgressButtonLayer : QLOverlayButtonLayer {

	QLOverlayProgressLayer* _progressLayer;
	char _expanded;
	dispatch_source_sRef _collapseTimer;
	char _ignoreNextProgressChange;

}

@property (assign) float progress; 
@property (assign) char expanded; 
+(CGSize)buttonSize;
+(double)_shadowBlur;
+(double)_shadowWidth;
-(void)_updateExpandedLook;
-(id)init;
-(void)setContentsScale:(double)arg1 ;
-(float)progress;
-(char)expanded;
-(void)setExpanded:(char)arg1 ;
-(void)setProgress:(float)arg1 ;
@end

