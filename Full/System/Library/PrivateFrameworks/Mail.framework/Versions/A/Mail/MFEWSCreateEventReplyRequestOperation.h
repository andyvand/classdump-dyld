/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSCreateItemRequestOperation.h>

@class NSString, MFEWSGetItemsResponseOperation;

@interface MFEWSCreateEventReplyRequestOperation : MFEWSCreateItemRequestOperation {

	char _messageResponseType;
	NSString* _messageMeetingItemIdString;
	MFEWSGetItemsResponseOperation* _getItemsResponse;

}

@property (nonatomic,copy,readonly) NSString * messageMeetingItemIdString;                     //@synthesize messageMeetingItemIdString=_messageMeetingItemIdString - In the implementation block
@property (nonatomic,readonly) MFEWSGetItemsResponseOperation * getItemsResponse;              //@synthesize getItemsResponse=_getItemsResponse - In the implementation block
@property (nonatomic,readonly) char messageResponseType;                                       //@synthesize messageResponseType=_messageResponseType - In the implementation block
+(Class)classForResponse;
-(id)prepareRequest;
-(id)initWithFolderIdString:(id)arg1 messageType:(char)arg2 disposition:(long long)arg3 gateway:(id)arg4 errorHandler:(id)arg5 ;
-(void)_ewsCreateEventReplyRequestOperationCommonInitWithItemIdString:(id)arg1 responseType:(char)arg2 ;
-(char)messageResponseType;
-(NSString *)messageMeetingItemIdString;
-(id)initWithItemIdString:(id)arg1 folderIdString:(id)arg2 messageType:(char)arg3 responseType:(char)arg4 disposition:(long long)arg5 gateway:(id)arg6 errorHandler:(id)arg7 ;
-(MFEWSGetItemsResponseOperation *)getItemsResponse;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

