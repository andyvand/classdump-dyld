/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLControl;
@class NSTrackingArea, QLControlTooltip, NSString, NSTimer;

@interface QLControlCommon : NSObject {

	NSTrackingArea* _trackingArea;
	QLControlTooltip* _tooltipWindow;
	NSString* _controlIdentifier;
	/*^block*/id _menuProvider;
	NSTimer* _menuTimer;
	char _canShowMenu;
	char _trackingButton;
	id<QLControl> _qlControl;

}

@property (__weak,readonly) id<QLControl> qlcontrol;              //@synthesize qlControl=_qlControl - In the implementation block
@property (copy) NSString * controlIdentifier;                    //@synthesize controlIdentifier=_controlIdentifier - In the implementation block
@property (copy) id menuProvider; 
-(void)updateTitle;
-(void)setupTrackingArea;
-(id)initWithQLControl:(id)arg1 ;
-(void)tearDownTrackingArea;
-(char)imageButton;
-(void)updateTooltip;
-(id)processImage:(id)arg1 ;
-(void)closeTooltip;
-(void)setMenuProvider:(id)arg1 ;
-(id)menuProvider;
-(void)setControlIdentifier:(NSString *)arg1 ;
-(NSString *)controlIdentifier;
-(id<QLControl>)qlcontrol;
-(void)_showTooltipWithText:(id)arg1 ;
-(void)_showButtonMenuWithEvent:(id)arg1 ;
-(void)_showButtonMenuFromTimer:(id)arg1 ;
-(void)dealloc;
-(void)sizeToFit;
-(void)rightMouseDown:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)tearDown;
@end

