/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSBaseFolderIdType, NSArray;

@interface EWSFolderChangeType : NSObject {

	EWSBaseFolderIdType* _FolderId;
	NSArray* _Updates;

}

@property (nonatomic,retain) EWSBaseFolderIdType * FolderId;              //@synthesize FolderId=_FolderId - In the implementation block
@property (nonatomic,copy) NSArray * Updates;                             //@synthesize Updates=_Updates - In the implementation block
+(id)definition;
-(NSArray *)Updates;
-(void)dealloc;
-(id)description;
-(EWSBaseFolderIdType *)FolderId;
-(void)setUpdates:(NSArray *)arg1 ;
-(void)setFolderId:(EWSBaseFolderIdType *)arg1 ;
@end

