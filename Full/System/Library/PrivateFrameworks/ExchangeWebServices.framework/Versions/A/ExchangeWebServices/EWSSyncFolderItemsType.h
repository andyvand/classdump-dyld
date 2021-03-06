/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSItemResponseShapeType, EWSTargetFolderIdType, NSString, NSArray;

@interface EWSSyncFolderItemsType : EWSBaseRequestType {

	EWSItemResponseShapeType* _ItemShape;
	EWSTargetFolderIdType* _SyncFolderId;
	NSString* _SyncState;
	NSArray* _Ignore;
	long long _MaxChangesReturned;

}

@property (nonatomic,retain) EWSItemResponseShapeType * ItemShape;                                 //@synthesize ItemShape=_ItemShape - In the implementation block
@property (setter=yncFolderId,nonatomic,retain) EWSTargetFolderIdType * SyncFolderId;              //@synthesize SyncFolderId=_SyncFolderId - In the implementation block
@property (nonatomic,copy) NSArray * Ignore;                                                       //@synthesize Ignore=_Ignore - In the implementation block
@property (setter=yncState,nonatomic,copy) NSString * SyncState;                                   //@synthesize SyncState=_SyncState - In the implementation block
@property (assign,nonatomic) long long MaxChangesReturned;                                         //@synthesize MaxChangesReturned=_MaxChangesReturned - In the implementation block
+(id)definition;
-(NSArray *)Ignore;
-(void)setIgnore:(NSArray *)arg1 ;
-(long long)MaxChangesReturned;
-(void)dealloc;
-(void)setItemShape:(EWSItemResponseShapeType *)arg1 ;
-(EWSItemResponseShapeType *)ItemShape;
-(void)setSyncFolderId:(EWSTargetFolderIdType *)arg1 ;
-(EWSTargetFolderIdType *)SyncFolderId;
-(void)setMaxChangesReturned:(long long)arg1 ;
-(void)setSyncState:(NSString *)arg1 ;
-(NSString *)SyncState;
@end

