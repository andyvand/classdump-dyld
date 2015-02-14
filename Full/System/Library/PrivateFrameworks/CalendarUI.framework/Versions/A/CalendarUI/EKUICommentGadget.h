/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUILabeledGadget.h>
#import <CalendarUI/NSTextFieldDelegate.h>

@class EKUIResizingTextField, NSView, NSMutableArray, NSString;

@interface EKUICommentGadget : EKUILabeledGadget <NSTextFieldDelegate> {

	EKUIResizingTextField* _textField;
	EKUIResizingTextField* _baselineField;
	NSView* _container;
	NSMutableArray* _constraints;

}

@property (retain) EKUIResizingTextField * textField;                  //@synthesize textField=_textField - In the implementation block
@property (retain) EKUIResizingTextField * baselineField;              //@synthesize baselineField=_baselineField - In the implementation block
@property (retain) NSView * container;                                 //@synthesize container=_container - In the implementation block
@property (retain) NSMutableArray * constraints;                       //@synthesize constraints=_constraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(double)maxHeight;
-(id)control;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(char)needsExpansion;
-(void)updateWithChanges:(id)arg1 ;
-(id)labelString;
-(double)pixelsBetweenLabelAndControl;
-(id)viewForBaselineAlignment;
-(void)setBaselineField:(EKUIResizingTextField *)arg1 ;
-(EKUIResizingTextField *)baselineField;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(char)isEditable;
-(NSMutableArray *)constraints;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(id)placeholderString;
-(EKUIResizingTextField *)textField;
-(void)setTextField:(EKUIResizingTextField *)arg1 ;
-(NSView *)container;
-(void)setContainer:(NSView *)arg1 ;
@end

