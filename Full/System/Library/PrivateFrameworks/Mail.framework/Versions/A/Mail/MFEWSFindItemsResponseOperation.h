/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSResponseOperation.h>

@class NSArray, NSDictionary;

@interface MFEWSFindItemsResponseOperation : MFEWSResponseOperation {

	NSArray* _EWSFolderIds;
	NSDictionary* _rootFoldersByEWSFolderId;

}

@property (nonatomic,copy) NSArray * EWSFolderIds;                               //@synthesize EWSFolderIds=_EWSFolderIds - In the implementation block
@property (nonatomic,copy) NSDictionary * rootFoldersByEWSFolderId;              //@synthesize rootFoldersByEWSFolderId=_rootFoldersByEWSFolderId - In the implementation block
-(void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2 ;
-(void)executeOperation;
-(void)setEWSFolderIds:(NSArray *)arg1 ;
-(NSArray *)EWSFolderIds;
-(void)setRootFoldersByEWSFolderId:(NSDictionary *)arg1 ;
-(NSDictionary *)rootFoldersByEWSFolderId;
-(id)rootFolderForEWSFolderId:(id)arg1 ;
@end

