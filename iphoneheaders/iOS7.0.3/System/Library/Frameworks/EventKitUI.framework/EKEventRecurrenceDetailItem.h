/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class EKEventDetailRecurrenceCell, NSDate, NSString;

@interface EKEventRecurrenceDetailItem : EKEventDetailItem {

	EKEventDetailRecurrenceCell* _cell;
	int _repeatType;
	int _originalRepeatType;
	NSDate* _repeatEnd;
	NSString* _customRepeatDescription;
	BOOL _indent;

}
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(void)reset;
-(void).cxx_destruct;
@end
