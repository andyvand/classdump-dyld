/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKFrozenObject.h>
#import <EventKit/EKProtocolAlarm.h>

@protocol EKProtocolStructuredLocation;
@class NSString, NSDate, NSURL, NSDictionary, NSManagedObjectID;

@interface EKFrozenAlarm : EKFrozenObject <EKProtocolAlarm> {

	char isDefault;
	char isSnoozed;
	char notRelativeToTravelTime;
	NSDate* absoluteDate;
	NSDate* acknowledgedDate;
	NSString* actionString;
	NSURL* bookmark;
	NSString* emailAddress;
	NSString* proximityString;
	double relativeOffset;
	NSString* soundName;
	NSString* sharedUID;
	id<EKProtocolStructuredLocation> structuredLocation;
	NSURL* url;

}

@property (nonatomic,copy,readonly) NSString * emailAddress; 
@property (nonatomic,copy,readonly) NSString * soundName; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * bookmark; 
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
@property (nonatomic,copy,readonly) NSString * proximityString; 
@property (nonatomic,copy,readonly) id<EKProtocolStructuredLocation> structuredLocation; 
@property (nonatomic,readonly) char isSnoozed; 
@property (nonatomic,readonly) char isDefault; 
@property (nonatomic,readonly) char notRelativeToTravelTime; 
+(Class)meltedClass;
-(NSURL *)bookmark;
-(id)initWithObject:(id)arg1 createPartialObject:(char)arg2 preFrozenRelationshipObjects:(id)arg3 ;
-(NSURL *)url;
-(NSString *)sharedUID;
-(id<EKProtocolStructuredLocation>)structuredLocation;
-(char)notRelativeToTravelTime;
-(char)isSnoozed;
-(NSString *)emailAddress;
-(double)relativeOffset;
-(NSDate *)absoluteDate;
-(NSDate *)acknowledgedDate;
-(NSString *)actionString;
-(NSString *)soundName;
-(NSString *)proximityString;
-(char)isDefault;
@end

