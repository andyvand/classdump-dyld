/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>
#import <CalendarPersistence/EKProtocolNotificationBoxMessage.h>
#import <CalendarPersistence/ETagObject.h>

@class NSNumber, NSString, CalManagedMessageContents, NSData, CalManagedEvent, NSDate, CalManagedPrincipal, CalManagedDiff, NSMutableSet, NSDictionary, NSManagedObjectID;

@interface CalManagedMessage : CalManagedObject <EKProtocolNotificationBoxMessage, ETagObject> {

	NSString* _path;
	NSString* _cachedClosestOccurrenceID;
	CalManagedMessage* _cachedBestMessageForDisplayAsInvitation;
	NSString* _eventServerFilename;
	char _isIntentionallyDetached;
	char _isIntentionallyReplyToAll;
	char _notify;

}

@property (assign) int sharedCalendarAccess; 
@property (retain) NSString * sharedCalendarComponentType; 
@property (readonly) char isVTODOOnlySharedCalendar; 
@property (assign) char responseInProgress; 
@property (retain) NSString * sharedCalendarPath; 
@property (retain) CalManagedMessageContents * messageContents; 
@property (retain,readonly) NSData * contents; 
@property (retain) CalManagedEvent * event; 
@property (retain) NSNumber * sequence; 
@property (retain) NSNumber * count; 
@property (retain) NSString * eTag; 
@property (retain) NSString * filename; 
@property (retain) NSDate * dateStamp; 
@property (retain) NSString * sender; 
@property (retain) NSString * error; 
@property (retain) NSString * attendeeComment; 
@property (retain) NSString * senderHREF; 
@property (retain) NSString * calendarName; 
@property (retain) NSString * eventTitle; 
@property (retain) CalManagedPrincipal * principal; 
@property (retain) CalManagedDiff * diff; 
@property (retain) NSString * cachedClosestOccurrenceID;                                 //@synthesize cachedClosestOccurrenceID=_cachedClosestOccurrenceID - In the implementation block
@property (retain) NSString * senderFirstName; 
@property (retain) NSString * senderLastName; 
@property (retain) NSNumber * createdCount; 
@property (retain) NSNumber * updatedCount; 
@property (retain) NSNumber * deletedCount; 
@property (retain) NSString * eventServerFilename;                                       //@synthesize eventServerFilename=_eventServerFilename - In the implementation block
@property (retain) NSMutableSet * childMessages; 
@property (retain) CalManagedMessage * masterMessage; 
@property (assign) char isVisible; 
@property (assign) int type; 
@property (readonly) NSString * path; 
@property (assign) char isIntentionallyDetached;                                         //@synthesize isIntentionallyDetached=_isIntentionallyDetached - In the implementation block
@property (assign) char isIntentionallyReplyToAll;                                       //@synthesize isIntentionallyReplyToAll=_isIntentionallyReplyToAll - In the implementation block
@property (assign) char notify;                                                          //@synthesize notify=_notify - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,readonly) NSNumber * messageTypeNumber; 
+(id)entityName;
+(id)fetchRequestWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)coalesceAndSetVisibiltyForMessageOnEvent:(id)arg1 ;
+(id)fetchRequestInboxMessagesInPrincipal:(id)arg1 ;
+(id)fetchRequestNotificationMessagesInPrincipal:(id)arg1 ;
+(Class)classForEvent;
+(Class)classForTask;
+(id)_stringForClass:(Class)arg1 ;
+(id)_formatString:(id)arg1 forClass:(Class)arg2 ;
+(id)notificationTypes;
+(char)shouldDisplayNotificationForCalendar:(id)arg1 ;
+(char)shouldDisplayNotificationForPrincipal:(id)arg1 ;
+(id)nonEventNotificationTypes;
+(id)fetchRequestWithCalendars:(id)arg1 forClass:(Class)arg2 inManagedObjectContext:(id)arg3 ;
+(id)_messagesForCalendars:(id)arg1 forClass:(Class)arg2 context:(id)arg3 ;
+(id)_messagesForPrincipals:(id)arg1 forClass:(Class)arg2 context:(id)arg3 ;
+(void)_filterMessages:(id)arg1 ;
+(char)_calendarShouldNotShowNOBOsNeedingReplies:(id)arg1 ;
+(id)_futureEventsNeedingNOBOsNeedingRepliesForPrincipal:(id)arg1 ;
+(void)_createMessagesForFutureEvents:(id)arg1 forPrincipal:(id)arg2 ;
+(id)fetchRequestWithCalendar:(id)arg1 forClass:(Class)arg2 inManagedObjectContext:(id)arg3 ;
+(id)newMessagesArrayForCalendars:(id)arg1 andPrincipals:(id)arg2 forClass:(Class)arg3 fromManagedObjectContext:(id)arg4 ;
+(id)messagesArrayForCalendarMainWindowWithManagedObjectContext:(id)arg1 ;
+(unsigned long long)countMessagesForClass:(Class)arg1 WithManagedObjectContext:(id)arg2 ;
+(void)createMessagesForEventsInTheFutureMissingMessagesForPrincipal:(id)arg1 ;
+(id)sharedCalendarInvitesForClass:(Class)arg1 principals:(id)arg2 context:(id)arg3 ;
-(void)dealloc;
-(NSData *)contents;
-(NSString *)path;
-(long long)compare:(id)arg1 ;
-(id)titleString;
-(id)serverFilename;
-(void)setEventServerFilename:(NSString *)arg1 ;
-(void)setETag:(NSString *)arg1 ;
-(void)updateContentsWithData:(id)arg1 ;
-(char)isInvitation;
-(id)closestOccurrenceID;
-(char)isIntentionallyDetached;
-(char)isIntentionallyReplyToAll;
-(void)awakeFromSnapshotEvents:(unsigned long long)arg1 ;
-(void)awakeFromFetch;
-(char)shouldDisplayNotification;
-(char)associatedWithNotificationCollection;
-(void)setCachedClosestOccurrenceID:(NSString *)arg1 ;
-(NSString *)cachedClosestOccurrenceID;
-(id)bestChildMessageForDisplayAsInvitation;
-(char)isInvitationIgnoringChildren;
-(id)invitationChildren;
-(void)_updateCachedBestMessageWithMessage:(id)arg1 ;
-(char)_hasInvitationChildButNotInvitation;
-(id)pathForMessageWithFilename:(id)arg1 principal:(id)arg2 ;
-(void)_resetCachedValues;
-(char)_representsCancelledEvent;
-(unsigned long long)actionTypes;
-(id)closestOccurrenceDate;
-(id)_senderNameStringForceAB:(char)arg1 ;
-(id)_nextOoccuranceDate;
-(char)_didTimeChange;
-(char)_didRecurrenceChange;
-(id)descriptionStringForNotificationCenter:(char)arg1 withToFieldIfNeeded:(char)arg2 ;
-(id)_fromSenderNameString;
-(id)_toDelegateNameString;
-(id)_senderNameString;
-(id)_commentString;
-(id)_dateString;
-(char)hasOneSender;
-(id)senderThatIsNotMe;
-(NSNumber *)messageTypeNumber;
-(char)isOccurrenceIDInMessage:(id)arg1 ;
-(char)hasError;
-(char)respondsToOK;
-(char)respondsToActionType:(int)arg1 ;
-(unsigned long long)numberAttendeesNotMe;
-(char)isSharedCalendarNotification;
-(id)senderNameFromAddressBook;
-(id)descriptionString;
-(id)descriptionStringForNotificationCenter:(char)arg1 ;
-(char)isInvitationType;
-(char)isSharedCalendarType;
-(void)fetchSenderImageWithDiameter:(double)arg1 andCompletionBlock:(/*^block*/id)arg2 ;
-(NSString *)eventServerFilename;
-(void)setIsIntentionallyDetached:(char)arg1 ;
-(void)setIsIntentionallyReplyToAll:(char)arg1 ;
-(char)notify;
-(void)setNotify:(char)arg1 ;
-(char)isVTODOOnlySharedCalendar;
-(id)calendarForSharedInvite;
-(char)acceptSharingInvite;
-(void)processForType:(int)arg1 inManagedObjectContext:(id)arg2 ;
@end

