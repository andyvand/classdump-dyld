/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <CalendarUI/NSTextFieldDelegate.h>

@class IGPopupWindowController, EKUIAlarmGadget, EKUICustomAlarmView, NSString;

@interface EKUICustomAlarmViewController : NSViewController <NSTextFieldDelegate> {

	IGPopupWindowController* _popup;
	EKUIAlarmGadget* _gadget;
	EKUICustomAlarmView* _alarmView;

}

@property (retain) IGPopupWindowController * popup;                 //@synthesize popup=_popup - In the implementation block
@property (retain) EKUIAlarmGadget * gadget;                        //@synthesize gadget=_gadget - In the implementation block
@property (retain) EKUICustomAlarmView * alarmView;                 //@synthesize alarmView=_alarmView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)popupForAlarmGadget:(id)arg1 ;
-(void)setGadget:(EKUIAlarmGadget *)arg1 ;
-(EKUIAlarmGadget *)gadget;
-(void)setAlarmView:(EKUICustomAlarmView *)arg1 ;
-(id)initWithGadget:(id)arg1 ;
-(void)cancelClicked;
-(void)okClicked;
-(EKUICustomAlarmView *)alarmView;
-(IGPopupWindowController *)popup;
-(void)setPopup:(IGPopupWindowController *)arg1 ;
-(void)loadView;
@end

