/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SOCompletionIMHandleCache : NSObject {

	NSMutableDictionary* _accountUIDToIMHandleMap;
	NSMutableDictionary* _accountUIDToHandleIDMap;

}

@property (nonatomic,retain) NSMutableDictionary * accountUIDToHandleIDMap;              //@synthesize accountUIDToHandleIDMap=_accountUIDToHandleIDMap - In the implementation block
+(id)sharedCache;
-(id)handleIDsForAccountUniqueID:(id)arg1 ;
-(id)imHandlesForAccountUniqueID:(id)arg1 ;
-(void)saveBuddyListForAccount:(id)arg1 ;
-(void)removeBuddyListForAccount:(id)arg1 ;
-(NSMutableDictionary *)accountUIDToHandleIDMap;
-(void)setAccountUIDToHandleIDMap:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
