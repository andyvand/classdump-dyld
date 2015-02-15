/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSArray, CALAddress, NSString, NSCache, CalMeCard, NSObject;

@interface CALIdentityManager : NSObject {

	NSArray* myMails;
	char _myCardExists;
	CALAddress* me;
	NSString* myCardID;
	NSCache* _urlIsMeMapping;
	CalMeCard* _calMeCard;
	NSObject*<OS_dispatch_semaphore> _agentMeCardSemaphore;
	NSArray* _myEmailsForUnitTests;

}

@property (retain) NSArray * myEmailsForUnitTests;              //@synthesize myEmailsForUnitTests=_myEmailsForUnitTests - In the implementation block
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)private_localEmailMe;
-(void)resetCache:(id)arg1 ;
-(void)meCardChanged;
-(void)setMyEmailsForUnitTests:(NSArray *)arg1 ;
-(NSArray *)myEmailsForUnitTests;
-(id)myEmails;
-(char)private_isOneOfMyEmailURLs:(id)arg1 ;
-(char)private_hasMe;
-(char)private_isOneOfMyEmails:(id)arg1 ;
-(id)defaultEmail;
-(void)setMyEmail:(id)arg1 ;
-(void)_clearCachedEmails;
@end

