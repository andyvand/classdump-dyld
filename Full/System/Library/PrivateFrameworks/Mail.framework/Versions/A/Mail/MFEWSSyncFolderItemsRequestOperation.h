/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSRequestOperation.h>

@class NSString, EWSTargetFolderIdType, EWSFolderIdType, MFEWSSyncFolderItemsResponseOperation;

@interface MFEWSSyncFolderItemsRequestOperation : MFEWSRequestOperation {

	NSString* _syncState;
	EWSTargetFolderIdType* _targetFolder;

}

@property (nonatomic,copy,readonly) NSString * syncState;                                              //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) EWSFolderIdType * targetFolderId; 
@property (nonatomic,readonly) MFEWSSyncFolderItemsResponseOperation * responseOperation; 
@property (nonatomic,retain) EWSTargetFolderIdType * targetFolder;                                     //@synthesize targetFolder=_targetFolder - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetFolderName; 
+(long long)maxChangesReturned;
+(Class)classForResponse;
+(id)keyPathsForValuesAffectingTargetFolderId;
+(id)keyPathsForValuesAffectingTargetFolderName;
-(id)initWithGateway:(id)arg1 errorHandler:(id)arg2 ;
-(id)activityString;
-(id)prepareRequest;
-(id)initWithTargetFolder:(id)arg1 syncState:(id)arg2 gateway:(id)arg3 ;
-(NSString *)targetFolderName;
-(EWSTargetFolderIdType *)targetFolder;
-(EWSFolderIdType *)targetFolderId;
-(void)setTargetFolder:(EWSTargetFolderIdType *)arg1 ;
-(NSString *)syncState;
@end

