/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKFrozenObject.h>
#import <EventKit/EKProtocolStructuredLocation.h>

@class NSNumber, NSString, NSDictionary, NSManagedObjectID;

@interface EKFrozenStructuredLocation : EKFrozenObject <EKProtocolStructuredLocation> {

	NSString* address;
	NSString* abURLString;
	NSString* geoURLString;
	NSString* title;
	NSNumber* radiusNumber;
	NSString* routeType;
	NSString* uuid;

}

@property (nonatomic,copy,readonly) NSString * address; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * abURLString; 
@property (nonatomic,copy,readonly) NSString * geoURLString; 
@property (nonatomic,copy,readonly) NSString * routeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,copy,readonly) NSNumber * radiusNumber; 
@property (retain,readonly) NSString * uuid; 
+(Class)meltedClass;
-(NSString *)uuid;
-(id)initWithObject:(id)arg1 createPartialObject:(char)arg2 preFrozenRelationshipObjects:(id)arg3 ;
-(NSString *)title;
-(NSString *)abURLString;
-(NSString *)geoURLString;
-(NSString *)routeType;
-(NSNumber *)radiusNumber;
-(NSString *)address;
@end

