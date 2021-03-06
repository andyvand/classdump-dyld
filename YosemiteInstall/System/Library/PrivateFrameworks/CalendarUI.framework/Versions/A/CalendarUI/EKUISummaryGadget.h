/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUISingleTextFieldGadget.h>
#import <CalendarUI/EKUISummary.h>

@class NSString;

@interface EKUISummaryGadget : EKUISingleTextFieldGadget <EKUISummary>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)attributedSummaryString;
-(id)initWithEventViewController:(id)arg1 ;
-(void)setActiveKeyboardHover:(char)arg1 ;
-(id)summaryString;
-(void)updateWithChanges:(id)arg1 ;
-(char)isEditable;
@end

