/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVResourceTypeItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem {

	CoreDAVItemWithNoChildren* _calendar;
	CoreDAVItemWithNoChildren* _scheduleInbox;
	CoreDAVItemWithNoChildren* _scheduleOutbox;
	CoreDAVItemWithNoChildren* _notification;
	CoreDAVItemWithNoChildren* _subscribed;
	CoreDAVItemWithNoChildren* _sharedOwner;
	CoreDAVItemWithNoChildren* _isFamilyCalendar;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * calendar;                      //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * scheduleInbox;                 //@synthesize scheduleInbox=_scheduleInbox - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * scheduleOutbox;                //@synthesize scheduleOutbox=_scheduleOutbox - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * notification;                  //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * subscribed;                    //@synthesize subscribed=_subscribed - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * sharedOwner;                   //@synthesize sharedOwner=_sharedOwner - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isFamilyCalendar;              //@synthesize isFamilyCalendar=_isFamilyCalendar - In the implementation block
-(void)setNotification:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)scheduleInbox;
-(CoreDAVItemWithNoChildren *)scheduleOutbox;
-(CoreDAVItemWithNoChildren *)sharedOwner;
-(void)setScheduleInbox:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setScheduleOutbox:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSharedOwner:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)write:(id)arg1 ;
-(CoreDAVItemWithNoChildren *)subscribed;
-(void)setSubscribed:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)dealloc;
-(id)description;
-(CoreDAVItemWithNoChildren *)calendar;
-(void)setCalendar:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)isFamilyCalendar;
-(void)setIsFamilyCalendar:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(CoreDAVItemWithNoChildren *)notification;
-(id)copyParseRules;
@end

