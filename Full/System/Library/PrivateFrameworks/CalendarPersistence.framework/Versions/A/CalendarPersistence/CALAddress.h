/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALPropertyValue.h>

@class NSManagedObjectID;

@interface CALAddress : CALPropertyValue {

	id _container;
	char _isCalendarUserAddress;
	char _isMe;
	NSManagedObjectID* _managedObjectID;

}
+(id)private_localEmailMe;
+(id)addressWithMailString:(id)arg1 ;
+(id)addressFromABPerson:(id)arg1 distributionIdentifier:(id)arg2 ;
+(id)addressWithURL:(id)arg1 ;
+(id)addressWithNoMail;
+(id)addressWithAddressServicesUID:(id)arg1 ;
+(id)addressFromABPerson:(id)arg1 ;
+(char)private_hasMe;
-(int)role;
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(id)managedObjectID;
-(id)email;
-(id)commonName;
-(id)justEmailAddress;
-(void)setManagedObjectID:(id)arg1 ;
-(char)isSimilarTo:(id)arg1 ;
-(id)addressForCommonName;
-(char)rsvp;
-(void)setRSVP:(char)arg1 ;
-(int)participationStatus;
-(void)setParticipationStatus:(int)arg1 ;
-(id)initWithMailString:(id)arg1 ;
-(id)initWithAddressServicesUID:(id)arg1 ;
-(void)setEmail:(id)arg1 ;
-(void)setCommonName:(id)arg1 ;
-(void)setDirectoryEntry:(id)arg1 ;
-(id)addressURIAsString;
-(char)isSameAddressAs:(id)arg1 ;
-(char)hasMail;
-(char)scheduleForceSend;
-(void)setScheduleForceSend:(char)arg1 ;
-(id)directoryEntry;
-(void)removeUserType;
-(void)setUserType:(int)arg1 ;
-(int)userType;
-(void)setScheduleStatus:(int)arg1 ;
-(int)scheduleStatus;
-(void)setScheduleAgent:(int)arg1 ;
-(int)scheduleAgent;
-(void)removeRole;
-(void)setRole:(int)arg1 ;
-(void)setIsSelfInvited:(char)arg1 ;
-(char)isSelfInvited;
-(void)setSentBy:(id)arg1 ;
-(id)sentBy;
-(void)setDelegatedFrom:(id)arg1 ;
-(id)delegatedFrom;
-(void)setDelegatedTo:(id)arg1 ;
-(id)delegatedTo;
-(void)setMember:(id)arg1 ;
-(id)member;
-(id)addressForMail;
-(char)private_isOneOfMyEmails;
-(id)address;
@end

