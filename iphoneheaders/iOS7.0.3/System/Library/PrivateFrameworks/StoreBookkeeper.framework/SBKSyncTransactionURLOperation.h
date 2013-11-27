/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISStoreURLOperation.h>

@class SBKRequest;

@interface SBKSyncTransactionURLOperation : ISStoreURLOperation {

	BOOL _shouldAuthenticate;
	SBKRequest* _SBKRequest;

}

@property (setter=BKRequest,nonatomic,retain) SBKRequest * SBKRequest;              //@synthesize SBKRequest=_SBKRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldAuthenticate;                               //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
+(id)operationWithRequest:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(id)description;
-(id)_init;
-(BOOL)shouldAuthenticate;
-(void)setShouldAuthenticate:(BOOL)arg1 ;
-(void)setSBKRequest:(id)arg1 ;
-(id)SBKRequest;
-(void).cxx_destruct;
@end
