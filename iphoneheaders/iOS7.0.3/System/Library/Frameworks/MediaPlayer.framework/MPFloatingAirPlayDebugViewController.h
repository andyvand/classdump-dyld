/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <MediaPlayer/AirPlayDiagnosticsFullscreenControllerDelegate.h>

@class UIWindow, AirPlayDiagnosticsFullscreenController;

@interface MPFloatingAirPlayDebugViewController : UINavigationController <AirPlayDiagnosticsFullscreenControllerDelegate> {

	UIWindow* _floatingWindow;
	BOOL _presentedAnimated;
	AirPlayDiagnosticsFullscreenController* _airPlayDiagsController;

}

@property (nonatomic,readonly) AirPlayDiagnosticsFullscreenController * airPlayDiagsController;              //@synthesize airPlayDiagsController=_airPlayDiagsController - In the implementation block
-(void)presentFromFloatingWindowAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_destroyFloatingWindow;
-(void)airPlayDiagnosticsContentViewController:(id)arg1 didComplete:(BOOL)arg2 ;
-(id)airPlayDiagsController;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void).cxx_destruct;
@end
