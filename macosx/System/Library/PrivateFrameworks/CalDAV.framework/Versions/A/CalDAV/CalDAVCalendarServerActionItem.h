/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CalDAVCalendarServerUpdateItem, CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _create;
	CalDAVCalendarServerUpdateItem* _update;
	CalDAVCalendarServerCancelItem* _cancel;
	CalDAVCalendarServerReplyItem* _reply;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * create;                   //@synthesize create=_create - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerUpdateItem * update;              //@synthesize update=_update - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerCancelItem * cancel;              //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerReplyItem * reply;                //@synthesize reply=_reply - In the implementation block
-(void)setCreate:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setUpdate:(CalDAVCalendarServerUpdateItem *)arg1 ;
-(void)setCancel:(CalDAVCalendarServerCancelItem *)arg1 ;
-(void)setReply:(CalDAVCalendarServerReplyItem *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(CalDAVCalendarServerCancelItem *)cancel;
-(CalDAVCalendarServerUpdateItem *)update;
-(CoreDAVItemWithNoChildren *)create;
-(CalDAVCalendarServerReplyItem *)reply;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
@end

