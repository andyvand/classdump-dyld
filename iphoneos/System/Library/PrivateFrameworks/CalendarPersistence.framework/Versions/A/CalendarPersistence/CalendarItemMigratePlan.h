/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalManagedCalendarItem, CalManagedCalDAVCalendar, NSString;

@interface CalendarItemMigratePlan : NSObject {

	int _type;
	CalManagedCalendarItem* _localItem;
	CalManagedCalendarItem* _remoteItem;
	CalManagedCalDAVCalendar* _remoteCalendar;
	NSString* _updatedETag;
	NSString* _updatedFilename;

}

@property (assign) int type;                                               //@synthesize type=_type - In the implementation block
@property (retain) CalManagedCalendarItem * localItem;                     //@synthesize localItem=_localItem - In the implementation block
@property (retain) CalManagedCalendarItem * remoteItem;                    //@synthesize remoteItem=_remoteItem - In the implementation block
@property (retain) CalManagedCalDAVCalendar * remoteCalendar;              //@synthesize remoteCalendar=_remoteCalendar - In the implementation block
@property (retain) NSString * updatedETag;                                 //@synthesize updatedETag=_updatedETag - In the implementation block
@property (retain) NSString * updatedFilename;                             //@synthesize updatedFilename=_updatedFilename - In the implementation block
-(void)dealloc;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)updatedETag;
-(void)setLocalItem:(CalManagedCalendarItem *)arg1 ;
-(void)setRemoteItem:(CalManagedCalendarItem *)arg1 ;
-(CalManagedCalendarItem *)remoteItem;
-(CalManagedCalendarItem *)localItem;
-(void)faultOutItemsInContext:(id)arg1 ;
-(void)setRemoteCalendar:(CalManagedCalDAVCalendar *)arg1 ;
-(void)setUpdatedETag:(NSString *)arg1 ;
-(void)setUpdatedFilename:(NSString *)arg1 ;
-(CalManagedCalDAVCalendar *)remoteCalendar;
-(NSString *)updatedFilename;
@end

