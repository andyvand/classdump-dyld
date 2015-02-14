/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalUIResizingTextField.h>

@class EKEventViewController;

@interface EKUIResizingTextField : CalUIResizingTextField {

	char _consumeEnterPress;
	EKEventViewController* _eventViewController;

}

@property (assign) char consumeEnterPress;                                   //@synthesize consumeEnterPress=_consumeEnterPress - In the implementation block
@property (retain) EKEventViewController * eventViewController;              //@synthesize eventViewController=_eventViewController - In the implementation block
-(EKEventViewController *)eventViewController;
-(id)initWithEventViewController:(id)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
-(void)configureText;
-(char)consumeEnterPress;
-(void)setConsumeEnterPress:(char)arg1 ;
-(id)textAttributes;
@end

