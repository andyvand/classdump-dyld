/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class BrowserTabViewItem, BrowserWindowControllerMac, NSWindow;

@interface DetachedTabDraggingImageToBrowserWindowTransitionController : NSObject {

	BrowserTabViewItem* _movingBrowserTabViewItem;
	BrowserWindowControllerMac* _sourceBrowserWindowControllerMac;
	BrowserWindowControllerMac* _destinationBrowserWindowControllerMac;
	NSWindow* _sourceMiniWindow;
	NSWindow* _destinationBrowserWindow;
	CGRect _browserWindowAnimationStartFrame;
	CGRect _browserWindowAnimationEndFrame;
	CGAffineTransform _browserWindowAnimationEndTransform;

}
+(void)detachBrowserTabViewItem:(id)arg1 fromBrowserWindowControllerMac:(id)arg2 withDraggedMiniWindow:(id)arg3 ofWidth:(double)arg4 ;
-(id)_initWithBrowserTabViewItem:(id)arg1 sourceBrowserWindowControllerMac:(id)arg2 miniWindow:(id)arg3 ofWidth:(double)arg4 ;
-(void)_setUpBrowserWindowAnimationStartFrameWithMiniWindowWidth:(double)arg1 ;
-(void)_setUpBrowserWindowAnimationEndFrame;
-(void)_setUpBrowserWindow;
-(void)_updateAnimationWithProgress:(float)arg1 ;
-(id)init;
-(void)_startAnimation;
@end

