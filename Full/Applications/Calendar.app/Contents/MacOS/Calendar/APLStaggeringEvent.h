/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, EKEvent, APLPDayCalendarElement;

@interface APLStaggeringEvent : NSObject {

	APLStaggeringEvent* _parentEvent;
	NSMutableArray* childrenEvents;
	EKEvent* ekEvent;
	APLPDayCalendarElement* element;
	double xPos;

}
-(id)descriptionWithTabs:(long long)arg1 ;
-(id)initWithEKEvent:(id)arg1 ;
-(id)deepestEventAtDate:(id)arg1 ;
-(void)addChildEvent:(id)arg1 ;
-(char)isEventAtSameLevel:(id)arg1 ;
-(id)parentEvent;
-(void)removeChildEvent:(id)arg1 ;
-(id)nearestEventFromEvent:(id)arg1 ;
-(double)xPos;
-(id)soonestChildEvent;
-(double)positionForDate:(id)arg1 ;
-(id)ekEvent;
-(id)childrenAtPosition:(unsigned long long)arg1 ;
-(void)setXPos:(double)arg1 ;
-(void)setParentEvent:(id)arg1 ;
-(long long)compareLength:(id)arg1 ;
-(char)isRootEvent;
-(id)endDateIgnoringEvent:(id)arg1 ;
-(char)canTakeFullWidth;
-(unsigned long long)numberOfChildren;
-(id)startDate;
-(double)lineHeight;
-(id)init;
-(id)description;
-(unsigned long long)level;
-(id)endDate;
-(char)isGroup;
-(id)initWithElement:(id)arg1 ;
@end

