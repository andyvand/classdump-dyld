/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSRequestOperation.h>

@class MFEWSGetItemsResponseOperation;

@interface MFEWSSuppressReadReceiptsRequestOperation : MFEWSRequestOperation {

	MFEWSGetItemsResponseOperation* _getItemsResponse;

}

@property (nonatomic,readonly) MFEWSGetItemsResponseOperation * getItemsResponse;              //@synthesize getItemsResponse=_getItemsResponse - In the implementation block
+(Class)classForResponse;
-(id)initWithGateway:(id)arg1 errorHandler:(id)arg2 ;
-(id)prepareRequest;
-(MFEWSGetItemsResponseOperation *)getItemsResponse;
-(id)initWithGetItemsResponse:(id)arg1 gateway:(id)arg2 ;
@end

