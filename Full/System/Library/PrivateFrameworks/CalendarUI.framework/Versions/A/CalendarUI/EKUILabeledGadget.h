/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUIGadget.h>

@class NSView, NSTextField, NSArray;

@interface EKUILabeledGadget : EKUIGadget {

	NSView* _controlView;
	NSTextField* _label;
	NSArray* _constraints;

}

@property (retain) NSTextField * label;                //@synthesize label=_label - In the implementation block
@property (retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(id)control;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(id)getAlignmentLabelAndAddToSubviewsIfNeeded;
-(id)labelString;
-(double)pixelsBetweenLabelAndControl;
-(char)shouldDisplayWhenNotEditable;
-(double)centerlineOffset;
-(void)addSubviewsIfNeeded;
-(id)viewForBaselineAlignment;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)updateConstraints;
-(id)controlView;
-(void)setLabel:(NSTextField *)arg1 ;
-(NSArray *)constraints;
-(NSTextField *)label;
-(double)baselineOffset;
@end

