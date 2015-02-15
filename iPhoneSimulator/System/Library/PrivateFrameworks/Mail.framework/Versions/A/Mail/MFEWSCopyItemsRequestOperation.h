/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSRequestOperation.h>
#import <Mail/NSCoding.h>

@class NSString, NSArray;

@interface MFEWSCopyItemsRequestOperation : MFEWSRequestOperation <NSCoding> {

	NSString* _sourceEWSFolderIdString;
	NSString* _destinationEWSFolderIdString;
	NSArray* _EWSItemIds;
	NSArray* _offlineCreatedEWSItemIdStrings;

}

@property (nonatomic,copy,readonly) NSString * sourceEWSFolderIdString;                   //@synthesize sourceEWSFolderIdString=_sourceEWSFolderIdString - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationEWSFolderIdString;              //@synthesize destinationEWSFolderIdString=_destinationEWSFolderIdString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * EWSItemIds;                                 //@synthesize EWSItemIds=_EWSItemIds - In the implementation block
@property (copy) NSArray * offlineCreatedEWSItemIdStrings;                                //@synthesize offlineCreatedEWSItemIdStrings=_offlineCreatedEWSItemIdStrings - In the implementation block
+(Class)classForResponse;
-(id)initWithGateway:(id)arg1 errorHandler:(id)arg2 ;
-(void)_ewsCopyItemsRequestOperationCommonInitWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3 ;
-(NSString *)sourceEWSFolderIdString;
-(NSArray *)EWSItemIds;
-(NSString *)destinationEWSFolderIdString;
-(void)setupOfflineResponse;
-(void)setOfflineCreatedEWSItemIdStrings:(NSArray *)arg1 ;
-(NSArray *)offlineCreatedEWSItemIdStrings;
-(id)initWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3 gateway:(id)arg4 errorHandler:(id)arg5 ;
-(id)activityString;
-(id)prepareRequest;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

