/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:39:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SBLockScreenViewController, SBAwayViewPluginController, SBLockOverlayContext;

@interface SBLockScreenPluginTransitionContext : NSObject {

	SBLockScreenViewController* _lockScreenViewController;
	SBAwayViewPluginController* _fromController;
	SBLockOverlayContext* _fromOverlay;
	SBAwayViewPluginController* _toController;
	SBLockOverlayContext* _toOverlay;

}

@property (assign) SBLockScreenViewController * lockScreenViewController;              //@synthesize lockScreenViewController=_lockScreenViewController - In the implementation block
@property (assign) SBAwayViewPluginController * fromController;                        //@synthesize fromController=_fromController - In the implementation block
@property (assign) SBLockOverlayContext * fromOverlay;                                 //@synthesize fromOverlay=_fromOverlay - In the implementation block
@property (assign) SBAwayViewPluginController * toController;                          //@synthesize toController=_toController - In the implementation block
@property (assign) SBLockOverlayContext * toOverlay;                                   //@synthesize toOverlay=_toOverlay - In the implementation block
-(id)lockScreenViewController;
-(id)fromController;
-(id)toController;
-(id)fromOverlay;
-(id)toOverlay;
-(void)setLockScreenViewController:(id)arg1 ;
-(void)setFromController:(id)arg1 ;
-(void)setFromOverlay:(id)arg1 ;
-(void)setToController:(id)arg1 ;
-(void)setToOverlay:(id)arg1 ;
@end
