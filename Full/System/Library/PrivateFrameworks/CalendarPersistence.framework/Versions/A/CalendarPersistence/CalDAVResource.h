/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData, CalDAVScheduleChangesProperty;

@interface CalDAVResource : NSObject {

	NSString* _filename;
	NSString* _etag;
	NSString* _scheduleTag;
	NSData* _data;
	CalDAVScheduleChangesProperty* _scheduleChanges;

}

@property (retain) NSString * filename;                                          //@synthesize filename=_filename - In the implementation block
@property (retain) NSString * etag;                                              //@synthesize etag=_etag - In the implementation block
@property (retain) NSString * scheduleTag;                                       //@synthesize scheduleTag=_scheduleTag - In the implementation block
@property (retain) NSData * data;                                                //@synthesize data=_data - In the implementation block
@property (retain) CalDAVScheduleChangesProperty * scheduleChanges;              //@synthesize scheduleChanges=_scheduleChanges - In the implementation block
+(id)resourceWithCalDAVCalendarItemData:(id)arg1 ;
-(void)dealloc;
-(NSData *)data;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(CalDAVScheduleChangesProperty *)scheduleChanges;
-(NSString *)scheduleTag;
-(void)setScheduleTag:(NSString *)arg1 ;
-(void)setScheduleChanges:(CalDAVScheduleChangesProperty *)arg1 ;
-(NSString *)etag;
@end

