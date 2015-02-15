/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>

@class NSArray;

@interface VPPReceiptRenewalOperation : ISOperation {

	NSArray* _bundlePaths;
	unsigned long long _receiptFlags;

}

@property (readonly) NSArray * bundlePaths;                        //@synthesize bundlePaths=_bundlePaths - In the implementation block
@property (readonly) unsigned long long receiptFlags;              //@synthesize receiptFlags=_receiptFlags - In the implementation block
-(id)initWithBundlePaths:(id)arg1 storeClient:(id)arg2 ;
-(unsigned long long)receiptFlags;
-(NSArray *)bundlePaths;
-(id)initWithBundlePath:(id)arg1 sandboxOptions:(id)arg2 storeClient:(id)arg3 ;
-(id)initWithStoreClient:(id)arg1 ;
-(void)run;
@end
