/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MapsChromeModeController <NSObject>
@property (assign,nonatomic) ChromeViewController * chromeViewController; 
@optional
-(void)layoutForUnobscuredBoundsChange;
-(BOOL)popsWhenSuppressed;
-(void)willPopForSuppression;
-(void)willChangeToMapDisplayStyle:(int)arg1 forChangeToLightLevel:(int)arg2 animation:(id)arg3;
-(void)willRemoveFromChromeViewController;
-(void)didRemoveFromChromeViewController;
-(BOOL)needsAudioControl;
-(BOOL)shouldSlideTopBar;
-(float)hiddenTopMargin;
-(void)animateBarsToCurrentStateWithAnimation:(id)arg1;
-(id)viewState;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;

@required
-(id)chromeViewController;
-(void)setChromeViewController:(id)arg1;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(BOOL)arg2 state:(id)arg3 fromMode:(id)arg4;
-(void)resignCurrentModeAnimated:(BOOL)arg1 toMode:(id)arg2;
@end
