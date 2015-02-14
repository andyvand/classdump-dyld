/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPanel.h>

@protocol IIDatePickerPanelDelegate;
@interface IIDatePickerPanel : NSPanel {

	id<IIDatePickerPanelDelegate> _panelDelegate;

}

@property (__weak) id<IIDatePickerPanelDelegate> panelDelegate;              //@synthesize panelDelegate=_panelDelegate - In the implementation block
-(void)setPanelDelegate:(id<IIDatePickerPanelDelegate>)arg1 ;
-(id<IIDatePickerPanelDelegate>)panelDelegate;
-(void)resignKeyWindow;
-(char)hasKeyAppearance;
-(char)canBecomeKeyWindow;
-(void)selectKeyViewFollowingView:(id)arg1 ;
-(void)selectKeyViewPrecedingView:(id)arg1 ;
@end

