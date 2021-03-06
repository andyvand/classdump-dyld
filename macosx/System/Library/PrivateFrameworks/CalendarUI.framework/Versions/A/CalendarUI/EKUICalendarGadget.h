/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUISingleViewGadget.h>

@class EKUICalendarPopUpButton, EKUIGadget;

@interface EKUICalendarGadget : EKUISingleViewGadget {

	EKUICalendarPopUpButton* _calendarPicker;
	EKUIGadget* _compositeParent;

}

@property (retain) EKUICalendarPopUpButton * calendarPicker;                   //@synthesize calendarPicker=_calendarPicker - In the implementation block
@property (assign,nonatomic,__weak) EKUIGadget * compositeParent;              //@synthesize compositeParent=_compositeParent - In the implementation block
+(id)interestedChangeKeys;
-(id)control;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(char)needsExpansion;
-(void)updateWithChanges:(id)arg1 ;
-(EKUICalendarPopUpButton *)calendarPicker;
-(void)calendarSelected:(id)arg1 ;
-(EKUIGadget *)compositeParent;
-(void)setCompositeParent:(EKUIGadget *)arg1 ;
-(double)preferredWidth;
-(double)horizontalPadding;
-(void)setCalendarPicker:(EKUICalendarPopUpButton *)arg1 ;
-(char)isEditable;
@end

