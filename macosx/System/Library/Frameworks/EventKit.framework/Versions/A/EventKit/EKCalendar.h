/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObject.h>
#import <EventKit/EKProtocolMutableCalendar.h>

@class NSString, NSURL, NSSet, EKSource, NSColor, NSError, NSDictionary, NSManagedObjectID;

@interface EKCalendar : EKObject <EKProtocolMutableCalendar> {

	char allowsScheduling;
	char allowEvents;
	char allowReminders;
	char allowsContentModifications;
	char cachedHasSharees;
	char defaultOrganizerIsMeForNewItems;
	char isDefaultSchedulingCalendar;
	char isDistinguishedExchangeCalendar;
	char isFamilyCalendar;
	char isMarkedUndeletable;
	char isMarkedImmutableSharees;
	char isFacebookBirthdayCalendar;
	char isRenameable;
	char isColorEditable;
	char isShareable;
	char isSubscribed;
	char isSubscribedHolidayCalendar;
	char _subscribed;
	NSString* calendarIdentifier;
	NSURL* defaultOrganizerAddressForNewItems;
	NSString* defaultOrganizerNameForNewItems;
	NSString* defaultOrganizerEmailForNewItems;
	NSString* path;
	NSURL* prePublishURL;
	NSString* sharedOwnerAddress;
	NSSet* sharedOwnerAddresses;
	NSString* sharedOwnerName;
	NSString* sharingStatusString;
	NSString* serverPath;

}

@property (nonatomic,retain) EKSource * source; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) char allowsContentModifications; 
@property (getter=isSubscribed,nonatomic,readonly) char subscribed;                                          //@synthesize subscribed=_subscribed - In the implementation block
@property (getter=isImmutable,nonatomic,readonly) char immutable; 
@property (nonatomic,copy) NSColor * color; 
@property (nonatomic,readonly) unsigned long long supportedEventAvailabilities; 
@property (nonatomic,readonly) unsigned long long allowedEntityTypes; 
@property (assign,nonatomic) char allowReminders; 
@property (assign,nonatomic) char allowEvents; 
@property (assign,nonatomic) char allowsScheduling; 
@property (nonatomic,readonly) char isEditable; 
@property (assign,nonatomic) char isDefaultSchedulingCalendar; 
@property (assign,nonatomic) char isDistinguishedExchangeCalendar; 
@property (nonatomic,readonly) id<EKProtocolCalendar> backingCalendar; 
@property (nonatomic,readonly) char eligibleForDefaultSchedulingCalendar; 
@property (nonatomic,readonly) NSURL * externalURI; 
@property (nonatomic,readonly) NSError * calendarError; 
@property (getter=isCurrentUserCalendarOwner,nonatomic,readonly) char currentUserCalendarOwner; 
@property (nonatomic,readonly) long long notificationBoxMessageCount; 
@property (nonatomic,copy) NSString * symbolicColor; 
@property (nonatomic,readonly) char _allowsPrivateModifications; 
@property (nonatomic,readonly) char _allowsAttachments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,copy,readonly) NSString * colorString; 
@property (nonatomic,copy,readonly) NSString * symbolicColorName; 
@property (nonatomic,copy,readonly) id<EKProtocolCalendarSource> containerSource; 
@property (nonatomic,readonly) char ignoreAlarms; 
@property (nonatomic,readonly) char isFamilyCalendar; 
@property (readonly) char isMarkedUndeletable; 
@property (readonly) char isMarkedImmutableSharees; 
@property (nonatomic,readonly) char cachedHasSharees; 
@property (nonatomic,readonly) char isFacebookBirthdayCalendar; 
@property (nonatomic,readonly) char isSubscribed; 
@property (nonatomic,readonly) char isRenameable; 
@property (nonatomic,readonly) char isColorEditable; 
@property (nonatomic,readonly) char isShareable; 
@property (nonatomic,readonly) char isSubscribedHolidayCalendar; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * serverPath; 
@property (nonatomic,copy,readonly) NSString * notes; 
@property (nonatomic,readonly) NSString * sharingStatusString; 
@property (nonatomic,readonly) NSString * sharedOwnerName; 
@property (nonatomic,readonly) NSString * sharedOwnerAddress; 
@property (nonatomic,readonly) NSSet * sharedOwnerAddresses; 
@property (nonatomic,readonly) NSString * defaultOrganizerNameForNewItems; 
@property (nonatomic,readonly) NSURL * defaultOrganizerAddressForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerEmailForNewItems; 
@property (nonatomic,readonly) char defaultOrganizerIsMeForNewItems; 
@property (nonatomic,readonly) NSURL * prePublishURL; 
@property (nonatomic,copy,readonly) NSURL * publishURL; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForTimedEvents; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForAllDayEvents; 
@property (assign,nonatomic) int displayOrder; 
+(id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2 ;
+(Class)frozenClass;
+(id)knownIdentityKeys;
+(id)knownImmutableKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)knownSingleValueKeys;
+(id)batchChangeNotificationName;
+(id)_calendarIdentifiersForCalendars:(id)arg1 ;
+(id)calendarWithCalendar:(id)arg1 eventStore:(id)arg2 ;
+(id)typeStringForCalendar:(id)arg1 ;
+(int)typeFromDescription:(id)arg1 ;
+(char)isWeakRelationship;
+(int)typeForCalendar:(id)arg1 ;
+(id)typeDescription:(int)arg1 ;
+(char)_calendarsContainsSharedToMeCalendar:(id)arg1 ;
+(char)_calendarsAllowSharedSchedulingIfNeeded:(id)arg1 ;
+(char)_calendarsAreInSameSource:(id)arg1 ;
+(char)_calendarsAreSharedToMeInSameSourceAndHaveSameOwner:(id)arg1 ;
+(id)orderSortDescriptors;
+(id)uniqueIdentifierForObject:(id)arg1 ;
-(char)commit:(id*)arg1 ;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 preFrozenRelationshipObjects:(id)arg4 ;
-(char)isCurrentUserCalendarOwner;
-(char)_validateDeletable:(id*)arg1 ;
-(char)validate:(id*)arg1 ;
-(char)_validateAccessConsent:(id*)arg1 ;
-(char)_validateEntityTypeIsSupported:(id*)arg1 ;
-(char)_validateEditable:(id*)arg1 ;
-(NSURL *)externalURI;
-(char)resetWithLatestInBackingStore:(id)arg1 ;
-(void)updateManagedObjectID;
-(void)reorderBetweenEarlier:(id)arg1 later:(id)arg2 ;
-(unsigned long long)allowedEntityTypes;
-(void)setSuppressEventSchedulingNotifications:(char)arg1 ;
-(id)sourceIdentifierForCalendar;
-(void)removeSharee:(id)arg1 ;
-(void)addSharee:(id)arg1 ;
-(id)initWithAllowEvents:(char)arg1 allowReminders:(char)arg2 ;
-(void)_updateToMaxDisplayOrder;
-(void)setDisplayOrder:(int)arg1 ;
-(void)reorderCalendars:(id)arg1 betweenEarlier:(id)arg2 later:(id)arg3 ;
-(void)setContainerSource:(id<EKProtocolCalendarSource>)arg1 ;
-(char)_validateSource:(id*)arg1 ;
-(char)_validateDeletableHelper:(id*)arg1 ;
-(id)_calendarsInEventStoreMatchingOurEntityType;
-(id)_allCalendarsInSameSource;
-(id)_otherCalendarsInSameSource;
-(char)_otherCalendarsAllowUsToBeDeleted;
-(NSError *)calendarError;
-(id<EKProtocolCalendar>)backingCalendar;
-(long long)notificationBoxMessageCount;
-(id)shareesAndOwner;
-(void)setDefaultAlarmsForAllDayEvents:(NSSet *)arg1 ;
-(void)setDefaultAlarmsForTimedEvents:(NSSet *)arg1 ;
-(char)_allowsPrivateModifications;
-(char)_allowsAttachments;
-(void)setTypeString:(id)arg1 ;
-(char)_isReadOnlyDelegate;
-(char)isImmutable;
-(void)reinviteSharees:(id)arg1 ;
-(char)_hasChangesForKeyAndKeyIsOnlyChangedKey:(id)arg1 ;
-(void)importData:(id)arg1 synchronous:(char)arg2 processEvents:(char)arg3 processReminders:(char)arg4 progressBlock:(/*^block*/id)arg5 finishBlock:(/*^block*/id)arg6 ;
-(long long)deletionWarningsMask;
-(char)_useExistingObjectWhenDecoding;
-(id)_existingObjectForDecodedIdentifier:(id)arg1 ;
-(void)setAllowsScheduling:(char)arg1 ;
-(void)setAllowEvents:(char)arg1 ;
-(void)setAllowReminders:(char)arg1 ;
-(void)setIsDefaultSchedulingCalendar:(char)arg1 ;
-(void)setIsDistinguishedExchangeCalendar:(char)arg1 ;
-(char)saveWithSpan:(int)arg1 error:(id*)arg2 ;
-(char)removeWithSpan:(int)arg1 error:(id*)arg2 ;
-(id)defaultOrganizerForNewItems;
-(unsigned long long)supportedEventAvailabilities;
-(NSString *)symbolicColor;
-(void)setSymbolicColor:(NSString *)arg1 ;
-(NSString *)path;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)type;
-(char)isEditable;
-(char)remove:(id*)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(NSString *)calendarIdentifier;
-(EKSource *)source;
-(void)setSource:(EKSource *)arg1 ;
-(NSString *)sharingStatusString;
-(NSSet *)sharedOwnerAddresses;
-(id<EKProtocolCalendarSource>)containerSource;
-(NSString *)symbolicColorName;
-(NSString *)colorString;
-(id)freeBusyCache;
-(void)setColorString:(NSString *)arg1 ;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(NSURL *)defaultOrganizerAddressForNewItems;
-(NSString *)defaultOrganizerNameForNewItems;
-(char)isSubscribed;
-(char)isSubscribed;
-(char)isDefaultSchedulingCalendar;
-(NSString *)notes;
-(long long)sharingStatus;
-(void)setNotes:(NSString *)arg1 ;
-(char)suppressEventSchedulingNotifications;
-(char)isMarkedImmutableSharees;
-(char)isRenameable;
-(char)isColorEditable;
-(char)isFacebookBirthdayCalendar;
-(id)sharees;
-(void)setSharees:(id)arg1 ;
-(char)allowsScheduling;
-(NSURL *)publishURL;
-(NSURL *)prePublishURL;
-(NSString *)defaultOrganizerEmailForNewItems;
-(char)isFamilyCalendar;
-(char)eligibleForDefaultSchedulingCalendar;
-(NSString *)sharedOwnerName;
-(NSString *)sharedOwnerAddress;
-(char)isShareable;
-(char)defaultOrganizerIsMeForNewItems;
-(NSString *)serverPath;
-(id)typeString;
-(char)isSubscribedHolidayCalendar;
-(char)hasSharees;
-(char)allowEvents;
-(char)allowReminders;
-(int)displayOrder;
-(char)allowsContentModifications;
-(char)ignoreAlarms;
-(char)isMarkedUndeletable;
-(char)cachedHasSharees;
-(char)isDistinguishedExchangeCalendar;
-(NSSet *)defaultAlarmsForTimedEvents;
-(NSSet *)defaultAlarmsForAllDayEvents;
-(void)setPublishURL:(NSURL *)arg1 ;
-(void)setIgnoreAlarms:(char)arg1 ;
-(char)isDeletable;
@end

