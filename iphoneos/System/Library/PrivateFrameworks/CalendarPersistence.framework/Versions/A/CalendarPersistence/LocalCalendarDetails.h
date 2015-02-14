/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalManagedCalendar;

@interface LocalCalendarDetails : NSObject {

	CalManagedCalendar* _localCalendar;
	char _targetsVTODO;

}

@property (retain) CalManagedCalendar * localCalendar;              //@synthesize localCalendar=_localCalendar - In the implementation block
@property (assign) char targetsVTODO;                               //@synthesize targetsVTODO=_targetsVTODO - In the implementation block
-(void)dealloc;
-(void)setLocalCalendar:(CalManagedCalendar *)arg1 ;
-(CalManagedCalendar *)localCalendar;
-(void)setTargetsVTODO:(char)arg1 ;
-(char)targetsVTODO;
@end

