/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUISingleTextFieldGadget.h>
#import <CalendarUI/CalUIResizingTextFieldDelegate.h>

@class NSString;

@interface EKUIURLGadget : EKUISingleTextFieldGadget <CalUIResizingTextFieldDelegate> {

	char _mouseEntered;

}

@property (assign) char mouseEntered;                               //@synthesize mouseEntered=_mouseEntered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(double)maxHeight;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(id)placeholderText;
-(id)claimedPboardTypes;
-(void)updateWithChanges:(id)arg1 ;
-(void)setMouseEntered:(char)arg1 ;
-(void)updateEvent;
-(char)hasData;
-(void)mouseEnteredGadgetView;
-(void)mouseExitedGadgetView;
-(char)mouseEntered;
-(id)url;
-(char)performDragOperation:(id)arg1 ;
@end

