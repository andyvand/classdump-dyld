/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSRequestOperation.h>
#import <Mail/NSCoding.h>

@class NSString;

@interface MFEWSCreateFolderRequestOperation : MFEWSRequestOperation <NSCoding> {

	int _mailboxType;
	NSString* _parentEWSFolderIdString;
	NSString* _offlineCreatedEWSFolderIdString;
	NSString* _folderName;

}

@property (copy) NSString * offlineCreatedEWSFolderIdString;                         //@synthesize offlineCreatedEWSFolderIdString=_offlineCreatedEWSFolderIdString - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentEWSFolderIdString;              //@synthesize parentEWSFolderIdString=_parentEWSFolderIdString - In the implementation block
@property (nonatomic,copy,readonly) NSString * folderName;                           //@synthesize folderName=_folderName - In the implementation block
@property (nonatomic,readonly) int mailboxType;                                      //@synthesize mailboxType=_mailboxType - In the implementation block
+(Class)classForResponse;
-(id)initWithGateway:(id)arg1 errorHandler:(id)arg2 ;
-(void)setupOfflineResponse;
-(id)activityString;
-(id)prepareRequest;
-(void)_ewsCreateFolderRequestOperationCommonInitWithParentFolderIdString:(id)arg1 name:(id)arg2 mailboxType:(int)arg3 ;
-(NSString *)folderName;
-(NSString *)parentEWSFolderIdString;
-(int)mailboxType;
-(id)initWithParentEWSFolderIdString:(id)arg1 name:(id)arg2 mailboxType:(int)arg3 gateway:(id)arg4 ;
-(NSString *)offlineCreatedEWSFolderIdString;
-(void)setOfflineCreatedEWSFolderIdString:(NSString *)arg1 ;
-(id)copyWithUpdatedNameCount:(unsigned long long)arg1 ;
-(char)isFolderRequest;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

