/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@class NSPersistentStoreCoordinator, NSString, NSEntityDescription;

@interface _MFSeenMessagesStore : NSObject {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSString* _persistentStorePath;
	NSEntityDescription* _accountEntity;
	NSEntityDescription* _seenMessageEntity;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistentStorePath;                                    //@synthesize persistentStorePath=_persistentStorePath - In the implementation block
@property (nonatomic,retain) NSEntityDescription * accountEntity;                                      //@synthesize accountEntity=_accountEntity - In the implementation block
@property (nonatomic,retain) NSEntityDescription * seenMessageEntity;                                  //@synthesize seenMessageEntity=_seenMessageEntity - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(NSEntityDescription *)accountEntity;
-(NSEntityDescription *)seenMessageEntity;
-(id)_managedObjectModel;
-(void)setAccountEntity:(NSEntityDescription *)arg1 ;
-(void)setSeenMessageEntity:(NSEntityDescription *)arg1 ;
-(NSString *)persistentStorePath;
-(id)init;
-(void)dealloc;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
@end

