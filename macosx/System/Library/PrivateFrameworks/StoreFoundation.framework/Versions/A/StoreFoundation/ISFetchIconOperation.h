/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>

@class NSURL, NSNumber;

@interface ISFetchIconOperation : ISOperation {

	NSURL* _remoteURL;
	NSURL* _localURL;
	NSURL* _localIconURL;
	NSNumber* _productID;

}

@property (readonly) NSNumber * productID;              //@synthesize productID=_productID - In the implementation block
@property (readonly) NSURL * iconURL;                   //@synthesize localIconURL=_localIconURL - In the implementation block
-(NSNumber *)productID;
-(NSURL *)iconURL;
-(void)run;
-(id)initWithProductID:(id)arg1 url:(id)arg2 storeClient:(id)arg3 ;
@end

