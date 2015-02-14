/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSRequestOperation.h>
#import <Mail/NSCoding.h>

@class NSArray, NSDictionary, MFEWSGetItemsResponseOperation, MFEWSSuppressReadReceiptsRequestOperation;

@interface MFEWSUpdateItemRequestOperation : MFEWSRequestOperation <NSCoding> {

	char _messageType;
	NSArray* _EWSItemIds;
	NSDictionary* _flags;
	MFEWSGetItemsResponseOperation* _getItemsResponse;
	MFEWSSuppressReadReceiptsRequestOperation* _suppressReadReceiptsRequest;

}

@property (nonatomic,copy,readonly) NSArray * EWSItemIds;                                                            //@synthesize EWSItemIds=_EWSItemIds - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * flags;                                                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) MFEWSGetItemsResponseOperation * getItemsResponse;                                    //@synthesize getItemsResponse=_getItemsResponse - In the implementation block
@property (nonatomic,readonly) MFEWSSuppressReadReceiptsRequestOperation * suppressReadReceiptsRequest;              //@synthesize suppressReadReceiptsRequest=_suppressReadReceiptsRequest - In the implementation block
@property (nonatomic,readonly) char messageType;                                                                     //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemsPriorToUpdate; 
+(Class)classForResponse;
-(char)messageType;
-(id)initWithGateway:(id)arg1 errorHandler:(id)arg2 ;
-(NSArray *)EWSItemIds;
-(void)setupOfflineResponse;
-(id)activityString;
-(id)prepareRequest;
-(MFEWSGetItemsResponseOperation *)getItemsResponse;
-(id)initWithEWSItemIds:(id)arg1 messageType:(char)arg2 flags:(id)arg3 gateway:(id)arg4 errorHandler:(id)arg5 ;
-(void)_ewsUpdateItemRequestOperationCommonInitWithEWSItemIds:(id)arg1 messageType:(char)arg2 flags:(id)arg3 errorHandler:(id)arg4 ;
-(MFEWSSuppressReadReceiptsRequestOperation *)suppressReadReceiptsRequest;
-(NSArray *)itemsPriorToUpdate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)flags;
@end

