/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/ISSingleton.h>

@class ISStoreClient, NSString;

@interface CKStoreClient : NSObject <ISSingleton> {

	ISStoreClient* _storeClient;

}

@property (readonly) ISStoreClient * storeClient;                   //@synthesize storeClient=_storeClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientAsType:(long long)arg1 ;
+(id)_serviceProxy;
+(char)isAppStoreClient;
+(char)isBookStoreClient;
+(id)storeFrontID;
+(id)sharedInstance;
+(void)setStoreFrontID:(id)arg1 ;
-(id)primaryAccount;
-(ISStoreClient *)storeClient;
@end

