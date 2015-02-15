/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>
#import <CalendarPersistence/EKProtocolAlarm.h>
#import <CalendarPersistence/StoresUnrecognizedICS.h>

@class NSString, NSDate, NSNumber, NSURL, NSData, CalManagedLocation, CalManagedCalendarItem, NSDictionary, NSManagedObjectID, CalManagedICSElementProperties;

@interface CalManagedAlarm : CalManagedObject <EKProtocolAlarm, StoresUnrecognizedICS>

@property (retain) NSDate * acknowledged; 
@property (retain) NSDate * absoluteTrigger; 
@property (retain) NSString * action; 
@property (retain) NSString * emailAddress; 
@property (retain) NSString * message; 
@property (retain) NSNumber * relativeTrigger; 
@property (retain) NSString * sound; 
@property (retain) NSString * subject; 
@property (retain) NSString * uid; 
@property (retain) NSString * relatedTo; 
@property (retain) NSURL * url; 
@property (retain) NSString * proximity; 
@property (retain) NSData * bookmark; 
@property (retain) CalManagedLocation * location; 
@property (assign) int order; 
@property (assign) char omitSyncRecord; 
@property (assign) char deleteSyncRecord; 
@property (assign) char isDefaultAlarm; 
@property (assign) char notRelativeToTravel; 
@property (retain) CalManagedCalendarItem * itemCustomAlarm; 
@property (retain) CalManagedCalendarItem * itemLocalDefaultAlarm; 
@property (retain) CalManagedCalendarItem * itemServerDefaultAlarm; 
@property (retain) CalManagedAlarm * defaultAlarmByReference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,readonly) NSString * sharedUID; 
@property (nonatomic,copy,readonly) NSDate * absoluteDate; 
@property (nonatomic,readonly) double relativeOffset; 
@property (nonatomic,copy,readonly) NSDate * acknowledgedDate; 
@property (nonatomic,copy,readonly) NSString * actionString; 
@property (nonatomic,copy,readonly) NSString * soundName; 
@property (nonatomic,copy,readonly) NSString * proximityString; 
@property (nonatomic,copy,readonly) id<EKProtocolStructuredLocation> structuredLocation; 
@property (nonatomic,readonly) char isSnoozed; 
@property (nonatomic,readonly) char isDefault; 
@property (nonatomic,readonly) char notRelativeToTravelTime; 
@property (retain) CalManagedICSElementProperties * unrecognizedICSProperties; 
+(id)entityName;
+(id)recognizedICSProperties;
+(id)recognizedICSPropertyParameterMap;
+(int)proximityTypeFromString:(id)arg1 ;
+(id)resolveBookmark:(id)arg1 error:(id*)arg2 isSecurityScoped:(char*)arg3 ;
+(void)addAlarmPrefetchToCalendarItemFetch:(id)arg1 ;
+(id)iCalendarDocumentWithAlarms:(id)arg1 ;
+(id)insertNoneAlarmInManagedObjectContext:(id)arg1 ;
+(id)proximityStringFromType:(int)arg1 ;
+(id)generateSnoozeAlarmFromAlarm:(id)arg1 onDate:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(NSURL *)url;
-(NSString *)action;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)sound;
-(NSString *)message;
-(NSString *)subject;
-(id)humanReadableDescription;
-(NSString *)sharedUID;
-(char)isExchangeCompatible;
-(id<EKProtocolStructuredLocation>)structuredLocation;
-(void)setStructuredLocation:(id<EKProtocolStructuredLocation>)arg1 ;
-(void)makeExchangeCompatible;
-(char)notRelativeToTravelTime;
-(void)setIsDefaultAlarm:(char)arg1 ;
-(char)isSnoozed;
-(char)isNoneAlarm;
-(void)setNotRelativeToTravelTime:(char)arg1 ;
-(NSNumber *)relativeTrigger;
-(NSDate *)absoluteTrigger;
-(NSString *)emailAddress;
-(char)validateForInsert:(id*)arg1 ;
-(char)validateForUpdate:(id*)arg1 ;
-(long long)compareAlarmOrder:(id)arg1 ;
-(char)isSimilarToAlarmWithAction:(id)arg1 sound:(id)arg2 emailAddress:(id)arg3 url:(id)arg4 absoluteTrigger:(id)arg5 relativeTrigger:(id)arg6 ;
-(id)_iCalendarElementWithOptions:(unsigned long long)arg1 ;
-(id)associatedItem;
-(void)importAlarm:(id)arg1 inItemWithTravel:(char)arg2 ;
-(double)relativeOffset;
-(void)importiCalendarComponent:(id)arg1 fromDocument:(id)arg2 inCalendar:(id)arg3 ;
-(id)iCalendarElementWithOptions:(unsigned long long)arg1 inCalendar:(id)arg2 ;
-(char)isSimilarToAlarm:(id)arg1 ;
-(void)willSave;
-(char)validateForWrite:(id*)arg1 ;
-(void)willRefresh:(char)arg1 ;
-(id)uniqueKeyForObject;
-(id)enclosingSource;
-(id)contextForValidationError;
-(void)updateWithEntity:(id)arg1 omitSyncRecord:(char)arg2 ;
-(void)_updateAlarmDerivedPropertiesForSave;
-(id)earliestTriggerDateBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(char)shouldBeScheduled;
-(char)hasTriggerDateBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)updateWithManagedObject:(id)arg1 omitSyncRecord:(char)arg2 ;
-(id)defaultAlarmPropertiesHelperForKey:(id)arg1 ;
-(id)triggersBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)absoluteDate;
-(NSDate *)acknowledgedDate;
-(NSString *)actionString;
-(NSString *)soundName;
-(NSString *)proximityString;
-(char)isDefault;
-(char)hasTriggerOnDate:(id)arg1 ;
-(id)occurrenceDateForTrigger:(id)arg1 ;
-(id)snoozeParent;
-(id)resolveBookmarkWithError:(id*)arg1 isSecurityScoped:(char*)arg2 ;
-(void)setActionString:(NSString *)arg1 ;
-(void)setSoundName:(NSString *)arg1 ;
@end

