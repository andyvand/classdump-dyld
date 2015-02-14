/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseObjectChangedEventType.h>

@class EWSFolderIdType;

@interface EWSMovedCopiedEventType : EWSBaseObjectChangedEventType {

	id _OldItemOrFolderId;
	EWSFolderIdType* _OldParentFolderId;

}

@property (nonatomic,retain) id OldItemOrFolderId;                             //@synthesize OldItemOrFolderId=_OldItemOrFolderId - In the implementation block
@property (nonatomic,retain) EWSFolderIdType * OldParentFolderId;              //@synthesize OldParentFolderId=_OldParentFolderId - In the implementation block
+(id)definition;
-(id)OldItemOrFolderId;
-(void)setOldItemOrFolderId:(id)arg1 ;
-(EWSFolderIdType *)OldParentFolderId;
-(void)setOldParentFolderId:(EWSFolderIdType *)arg1 ;
-(void)dealloc;
@end

