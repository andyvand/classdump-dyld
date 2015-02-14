/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSResponseOperation.h>

@class NSArray;

@interface MFEWSGetFolderResponseOperation : MFEWSResponseOperation {

	NSArray* _EWSFolders;
	NSArray* _EWSFolderIdsRequested;

}

@property (copy) NSArray * EWSFolders;                         //@synthesize EWSFolders=_EWSFolders - In the implementation block
@property (copy) NSArray * EWSFolderIdsRequested;              //@synthesize EWSFolderIdsRequested=_EWSFolderIdsRequested - In the implementation block
-(void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2 ;
-(void)executeOperation;
-(NSArray *)EWSFolders;
-(void)setEWSFolderIdsRequested:(NSArray *)arg1 ;
-(NSArray *)EWSFolderIdsRequested;
-(void)setEWSFolders:(NSArray *)arg1 ;
@end

