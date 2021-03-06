/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUISingleViewGadget.h>

@class NSArray;

@interface EKUIIsolateableSingleViewGadget : EKUISingleViewGadget {

	char _isDoneWithGrouping;
	EKUIIsolateableSingleViewGadget* _linkedGadget;
	NSArray* _groupedGadgets;

}

@property (__weak) EKUIIsolateableSingleViewGadget * linkedGadget;              //@synthesize linkedGadget=_linkedGadget - In the implementation block
@property (retain) NSArray * groupedGadgets;                                    //@synthesize groupedGadgets=_groupedGadgets - In the implementation block
@property (assign) char isDoneWithGrouping;                                     //@synthesize isDoneWithGrouping=_isDoneWithGrouping - In the implementation block
-(char)shouldDisplayForEvent:(id)arg1 ;
-(char)updateWithDiff:(id)arg1 ;
-(char)needsExpansion;
-(char)hasData;
-(EKUIIsolateableSingleViewGadget *)linkedGadget;
-(NSArray *)groupedGadgets;
-(char)isGroupedGadget;
-(char)isIsolated;
-(char)isDoneWithGrouping;
-(void)setIsDoneWithGrouping:(char)arg1 ;
-(void)updateIsDoneGroupingForGroup;
-(void)setLinkedGadget:(EKUIIsolateableSingleViewGadget *)arg1 ;
-(void)setGroupedGadgets:(NSArray *)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(void)setEvent:(id)arg1 ;
@end

