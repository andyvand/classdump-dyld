/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject {

	char _isMaster;
	ICSDate* _recurrenceID;
	NSMutableDictionary* _changes;

}

@property (assign) char isMaster;                             //@synthesize isMaster=_isMaster - In the implementation block
@property (retain) ICSDate * recurrenceID;                    //@synthesize recurrenceID=_recurrenceID - In the implementation block
@property (readonly) char dateTimeChanged; 
@property (readonly) char startTimeChanged; 
@property (readonly) char endTimeChanged; 
@property (readonly) char timeZoneChanged; 
@property (readonly) char locationChanged; 
@property (readonly) char summaryChanged; 
@property (readonly) char urlChanged; 
@property (readonly) char descriptionChanged; 
@property (readonly) char statusChanged; 
@property (readonly) char attendeesChanged; 
@property (readonly) char attachmentsChanged; 
@property (readonly) char recurrenceChanged; 
@property (readonly) char participationChanged; 
@property (readonly) char privateCommentChanged; 
@property (readonly) char allDayChanged; 
+(id)changeWithOccurrenceID:(id)arg1 ;
+(id)changeWithItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)attendeesChanged;
-(char)participationChanged;
-(char)attachmentsChanged;
-(char)locationChanged;
-(char)summaryChanged;
-(char)descriptionChanged;
-(char)urlChanged;
-(char)privateCommentChanged;
-(char)startTimeChanged;
-(char)endTimeChanged;
-(char)allDayChanged;
-(char)timeZoneChanged;
-(char)recurrenceChanged;
-(id)changeTypeOnProperty:(id)arg1 ;
-(void)setIsMaster:(char)arg1 ;
-(void)setRecurrenceID:(ICSDate *)arg1 ;
-(id)initWithOccurrenceID:(id)arg1 ;
-(char)isMaster;
-(ICSDate *)recurrenceID;
-(void)addChangedProperty:(id)arg1 ;
-(void)addChanged:(id)arg1 named:(id)arg2 ofProperty:(id)arg3 ;
-(char)didPropertyChange:(id)arg1 ;
-(char)didParameterChange:(id)arg1 onProperty:(id)arg2 ;
-(id)allChanges;
-(char)dateTimeChanged;
-(char)statusChanged;
@end

