/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ISStoreClient;

@interface MDMController : NSObject {

	ISStoreClient* _storeClient;

}

@property (readonly) ISStoreClient * storeClient;              //@synthesize storeClient=_storeClient - In the implementation block
+(id)mdmControllerForStoreClient:(id)arg1 ;
-(void)processMDMManifestURL:(id)arg1 options:(id)arg2 completionHander:(/*^block*/id)arg3 ;
-(id)initWithStoreClient:(id)arg1 ;
-(ISStoreClient *)storeClient;
@end
