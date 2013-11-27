/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SBKRequest, NSMutableDictionary;

@interface SBKTransaction : NSObject {

	SBKRequest* _activeRequest;
	NSMutableDictionary* _userInfo;

}

@property (retain) SBKRequest * activeRequest;                  //@synthesize activeRequest=_activeRequest - In the implementation block
@property (retain) NSMutableDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(id)init;
-(id)domain;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)requestURL;
-(id)clampsKey;
-(void)setTransactionContext:(id)arg1 forKey:(id)arg2 ;
-(void)setActiveRequest:(id)arg1 ;
-(id)newRequest;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(id)activeRequest;
-(id)transactionContextForKey:(id)arg1 ;
-(void).cxx_destruct;
@end
