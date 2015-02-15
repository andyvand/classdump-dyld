/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _master;
	CoreDAVLeafItem* _recurrenceID;
	CalDAVCalendarServerChangesItem* _changes;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * master;                     //@synthesize master=_master - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * recurrenceID;                         //@synthesize recurrenceID=_recurrenceID - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerChangesItem * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) char isMaster; 
-(CoreDAVItemWithNoChildren *)master;
-(void)setMaster:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setChanges:(CalDAVCalendarServerChangesItem *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setRecurrenceID:(CoreDAVLeafItem *)arg1 ;
-(char)isMaster;
-(CoreDAVLeafItem *)recurrenceID;
-(CalDAVCalendarServerChangesItem *)changes;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
@end

