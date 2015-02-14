/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>
#import <CalendarPersistence/EKProtocolParticipant.h>

@class NSString, NSURL, CalManagedEvent, NSDictionary, NSManagedObjectID;

@interface CalManagedAttendee : CalManagedObject <EKProtocolParticipant>

@property (retain) NSURL * address; 
@property (retain) NSString * commonName; 
@property (retain) NSString * role; 
@property (retain) NSString * status; 
@property (retain) NSString * scheduleStatus; 
@property (retain) NSString * scheduleAgent; 
@property (retain) NSString * email; 
@property (assign) int type; 
@property (assign) char omitSyncRecord; 
@property (assign) char deleteSyncRecord; 
@property (assign) char rsvp; 
@property (assign) char includedInAllResponded; 
@property (assign) char scheduleForceSend; 
@property (assign) char isSelfInvited; 
@property (readonly) char hasMail; 
@property (retain,readonly) NSString * justEmailAddress; 
@property (retain,readonly) NSString * addressForCommonName; 
@property (retain) CalManagedEvent * event; 
@property (getter=isOrganizer,readonly) char organizer; 
@property (retain) CalManagedEvent * myAttendeeForEvent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,readonly) NSString * comment; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) char isCurrentUserForSharing; 
@property (nonatomic,readonly) char isCurrentUserForScheduling; 
@property (nonatomic,readonly) NSString * scheduleStatusString; 
+(id)entityName;
+(void)addAttendeePrefetchToCalendarItemFetch:(id)arg1 ;
+(void)addAttendeeCommentPrefetchToCalendarItemFetch:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)name;
-(NSString *)comment;
-(NSString *)justEmailAddress;
-(NSString *)addressForCommonName;
-(char)hasMail;
-(char)validateForInsert:(id*)arg1 ;
-(char)validateForUpdate:(id*)arg1 ;
-(char)isOrganizer;
-(void)importiCalendarProperty:(id)arg1 inComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 ;
-(id)_iCalendarElementWithOptions:(unsigned long long)arg1 ;
-(char)validateForWrite:(id*)arg1 ;
-(void)willRefresh:(char)arg1 ;
-(id)uniqueKeyForObject;
-(id)enclosingSource;
-(id)contextForValidationError;
-(id)attributesToCompareForMerge;
-(char)isCurrentUser;
-(id)_attendeesComment;
-(char)replyRequested;
-(char)isCurrentUserForSharing;
-(char)isCurrentUserForScheduling;
-(NSString *)scheduleStatusString;
-(id)attributesToApplyForMerge;
-(char)needsReplyIgnoringIsOrganizerMe;
-(void)updateWithEntity:(id)arg1 omitSyncRecord:(char)arg2 ;
-(NSURL *)address;
-(void)setAddress:(NSURL *)arg1 ;
@end

