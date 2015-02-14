/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSRequestOperation.h>
#import <Mail/NSCoding.h>

@class NSArray, NSString;

@interface MFEWSDeleteItemsRequestOperation : MFEWSRequestOperation <NSCoding> {

	NSArray* _EWSItemIds;
	NSString* _folderIdString;

}

@property (nonatomic,copy,readonly) NSArray * EWSItemIds;                   //@synthesize EWSItemIds=_EWSItemIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * folderIdString;              //@synthesize folderIdString=_folderIdString - In the implementation block
+(Class)classForResponse;
-(NSString *)folderIdString;
-(id)initWithGateway:(id)arg1 errorHandler:(id)arg2 ;
-(NSArray *)EWSItemIds;
-(void)setupOfflineResponse;
-(id)activityString;
-(id)prepareRequest;
-(id)initWithEWSItemIds:(id)arg1 folderIdString:(id)arg2 gateway:(id)arg3 ;
-(void)_ewsDeleteItemsRequestOperationCommonInitWithEWSItemIds:(id)arg1 folderIdString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

