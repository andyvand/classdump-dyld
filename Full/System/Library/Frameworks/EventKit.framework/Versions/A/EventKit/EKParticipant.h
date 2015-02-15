/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObject.h>
#import <EventKit/EKProtocolMutableParticipant.h>
#import <EventKit/EKIdentityProtocol.h>
#import <EventKit/NSCopying.h>

@class NSString, NSURL, NSDictionary, NSManagedObjectID;

@interface EKParticipant : EKObject <EKProtocolMutableParticipant, EKIdentityProtocol, NSCopying> {

	NSString* comment;
	NSString* name;
	NSString* scheduleStatusString;
	NSURL* URL;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int participantStatus; 
@property (nonatomic,readonly) int participantRole; 
@property (nonatomic,readonly) int participantType; 
@property (assign,nonatomic) char isCurrentUser; 
@property (nonatomic,readonly) char hasParticipantStatusChange; 
@property (nonatomic,copy) NSString * email; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) long long participantScheduleStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,readonly) NSString * comment; 
@property (nonatomic,readonly) char isCurrentUserForSharing; 
@property (nonatomic,readonly) char isCurrentUserForScheduling; 
@property (nonatomic,readonly) NSString * scheduleStatusString; 
+(id)participantWithParticipant:(id)arg1 ;
+(Class)frozenClass;
+(char)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5 ;
+(unsigned long long)hashForObject:(id)arg1 ;
+(id)knownIdentityKeys;
+(id)knownImmutableKeys;
+(id)knownSingleValueKeys;
+(void)_ensureSubclass;
+(id)protocolParticipantRoleFromEKParticipantRole:(int)arg1 ;
+(int)coreCalendarUserTypeFromEKParticipantType:(int)arg1 ;
+(int)participantStatusFromProtocolParticipantStatus:(id)arg1 ;
+(int)participantRoleFromProtocolParticipantRole:(id)arg1 ;
+(id)participantWithParticipant:(id)arg1 newURL:(id)arg2 ;
+(int)participantTypeFromCoreCalendarUserType:(int)arg1 ;
+(id)protocolParticipantStatusFromEKParticipantStatus:(int)arg1 ;
+(id)uniqueIdentifierForObject:(id)arg1 ;
-(id)role;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 preFrozenRelationshipObjects:(id)arg4 ;
-(void)setReplyRequested:(char)arg1 ;
-(id)initWithParticipant:(id)arg1 newURL:(id)arg2 ;
-(char)hasParticipantStatusChange;
-(char)isInviteUndeliverable;
-(void)setIsCurrentUser:(char)arg1 ;
-(int)participantStatus;
-(int)participantType;
-(id)nameUsingEmailAsBackup;
-(id)ABPersonInAddressBook:(id)arg1 ;
-(void)setParticipantRole:(int)arg1 ;
-(void)setParticipantStatus:(int)arg1 ;
-(int)participantRole;
-(void)setParticipantType:(int)arg1 ;
-(id)initWithName:(id)arg1 url:(id)arg2 ;
-(char)isEqualToParticipant:(id)arg1 ;
-(long long)participantScheduleStatus;
-(NSString *)description;
-(NSURL *)URL;
-(NSString *)name;
-(int)type;
-(id)status;
-(void)setType:(int)arg1 ;
-(NSString *)comment;
-(NSString *)email;
-(void)setStatus:(id)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(char)scheduleForceSend;
-(void)setScheduleForceSend:(char)arg1 ;
-(void)setRole:(id)arg1 ;
-(id)emailAddress;
-(char)isCurrentUser;
-(char)replyRequested;
-(char)isCurrentUserForSharing;
-(char)isCurrentUserForScheduling;
-(NSString *)scheduleStatusString;
@end

