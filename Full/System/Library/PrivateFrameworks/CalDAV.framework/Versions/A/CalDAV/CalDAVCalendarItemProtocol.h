/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem;


@protocol CalDAVCalendarItemProtocol
@property (nonatomic,retain) NSString * scheduleTag; 
@property (nonatomic,retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * createdBy; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * updatedBy; 
@required
-(void)setCreatedBy:(id)arg1;
-(void)setUpdatedBy:(id)arg1;
-(CalDAVUpdateOwnerItem *)createdBy;
-(CalDAVUpdateOwnerItem *)updatedBy;
-(CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
-(NSString *)scheduleTag;
-(void)setScheduleTag:(id)arg1;
-(void)setScheduleChanges:(id)arg1;

@end

