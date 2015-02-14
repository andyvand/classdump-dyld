/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKFrozenObject.h>
#import <EventKit/EKProtocolSharee.h>

@class NSURL, NSString, NSDictionary, NSManagedObjectID;

@interface EKFrozenSharee : EKFrozenObject <EKProtocolSharee> {

	char isCurrentUserForSharing;
	NSString* accessLevel;
	NSString* name;
	NSString* status;
	NSURL* URL;

}

@property (nonatomic,copy,readonly) NSString * status; 
@property (nonatomic,copy,readonly) NSString * accessLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) char isCurrentUserForSharing; 
@property (nonatomic,readonly) char isCurrentUserForScheduling; 
+(Class)meltedClass;
-(id)initWithObject:(id)arg1 createPartialObject:(char)arg2 preFrozenRelationshipObjects:(id)arg3 ;
-(NSURL *)URL;
-(NSString *)name;
-(NSString *)status;
-(NSString *)accessLevel;
-(char)isCurrentUserForSharing;
-(char)isCurrentUserForScheduling;
@end

