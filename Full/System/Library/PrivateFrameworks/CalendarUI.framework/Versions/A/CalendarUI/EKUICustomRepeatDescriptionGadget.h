/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUIRepeatGadget.h>

@class EKUICustomRepeatDescriptionField;

@interface EKUICustomRepeatDescriptionGadget : EKUIRepeatGadget {

	EKUICustomRepeatDescriptionField* _repeatDescriptionField;

}

@property (retain) EKUICustomRepeatDescriptionField * repeatDescriptionField;              //@synthesize repeatDescriptionField=_repeatDescriptionField - In the implementation block
-(id)control;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(void)updateWithChanges:(id)arg1 ;
-(id)labelString;
-(double)pixelsBetweenLabelAndControl;
-(char)shouldDisplayWhenNotEditable;
-(void)setRepeatDescriptionField:(EKUICustomRepeatDescriptionField *)arg1 ;
-(EKUICustomRepeatDescriptionField *)repeatDescriptionField;
-(id)controlView;
@end

