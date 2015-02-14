/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSTargetFolderIdType, NSArray;

@interface EWSBaseMoveCopyFolderType : EWSBaseRequestType {

	EWSTargetFolderIdType* _ToFolderId;
	NSArray* _FolderIds;

}

@property (nonatomic,retain) EWSTargetFolderIdType * ToFolderId;              //@synthesize ToFolderId=_ToFolderId - In the implementation block
@property (nonatomic,copy) NSArray * FolderIds;                               //@synthesize FolderIds=_FolderIds - In the implementation block
+(id)definition;
-(EWSTargetFolderIdType *)ToFolderId;
-(NSArray *)FolderIds;
-(void)dealloc;
-(void)setFolderIds:(NSArray *)arg1 ;
-(void)setToFolderId:(EWSTargetFolderIdType *)arg1 ;
@end

