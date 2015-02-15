/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CalDelegateFoldersPermissions : NSObject {

	int _calendarPermission;
	int _taskPermission;

}

@property (assign,nonatomic) int calendarPermission;              //@synthesize calendarPermission=_calendarPermission - In the implementation block
@property (assign,nonatomic) int taskPermission;                  //@synthesize taskPermission=_taskPermission - In the implementation block
-(void)setCalendarPermission:(int)arg1 ;
-(void)setTaskPermission:(int)arg1 ;
-(id)initWithCalendarPermission:(int)arg1 taskPermission:(int)arg2 ;
-(int)calendarPermission;
-(int)taskPermission;
@end

