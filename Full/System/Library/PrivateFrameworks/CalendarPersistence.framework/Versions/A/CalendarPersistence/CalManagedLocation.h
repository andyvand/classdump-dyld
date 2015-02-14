/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>
#import <CalendarPersistence/EKProtocolStructuredLocation.h>

@class NSNumber, NSString, CalManagedAlarm, CalManagedEvent, NSDictionary, NSManagedObjectID;

@interface CalManagedLocation : CalManagedObject <EKProtocolStructuredLocation>

@property (retain) NSString * abURLString; 
@property (retain) NSString * geoURLString; 
@property (assign) double radius; 
@property (retain) NSString * title; 
@property (retain) NSString * address; 
@property (retain) NSString * displayName; 
@property (retain) NSString * routeType; 
@property (retain) NSString * uuid; 
@property (retain) CalManagedAlarm * alarm; 
@property (retain) CalManagedEvent * eventForStartLocation; 
@property (retain) CalManagedEvent * eventForLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,copy,readonly) NSNumber * radiusNumber; 
+(id)entityName;
+(void)adjustStructuredLocation:(id)arg1 withNewLocation:(id)arg2 createdLocationHandler:(/*^block*/id)arg3 managedObjectContext:(id)arg4 ;
-(id)dataString;
-(void)setValuesFromDataString:(id)arg1 ;
-(void)_importiCalendarStructuredLocation:(id)arg1 ;
-(id)_ICSStructuredLocation;
-(void)importiCalendarProperty:(id)arg1 inComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 ;
-(id)_iCalendarElementWithOptions:(unsigned long long)arg1 ;
-(void)awakeFromInsert;
-(id)enclosingSource;
-(void)updateWithLocation:(id)arg1 ;
-(void)updateWithProtocolStructuredLocation:(id)arg1 ;
-(NSNumber *)radiusNumber;
-(id)_calLocation;
@end

