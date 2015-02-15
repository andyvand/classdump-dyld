/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface MFSeenMessagesManager : NSObject {

	id _account;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) id account;                                                 //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
-(id)seenMessages;
-(id)initWithAccountID:(id)arg1 createAccount:(char)arg2 ;
-(id)addMessageID:(id)arg1 dateSeen:(id)arg2 ;
-(id)seenMessageForMessageID:(id)arg1 ;
-(void)removeMessageIDs:(id)arg1 ;
-(void)removeMessagesNotOnServer:(id)arg1 ;
-(unsigned long long)countOfSeenMessages;
-(id)messagesToBeDeletedFromServer;
-(void)_configureManagedObjectContext;
-(id)_accountForAccountID:(id)arg1 ;
-(id)_addAccountWithID:(id)arg1 ;
-(void)removeServerDeletedMessages;
-(id)init;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)saveChanges;
-(id)account;
-(void)setAccount:(id)arg1 ;
@end

