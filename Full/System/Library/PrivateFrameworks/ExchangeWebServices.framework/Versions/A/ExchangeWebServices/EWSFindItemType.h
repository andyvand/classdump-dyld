/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSItemResponseShapeType, EWSBasePagingType, EWSRestrictionType, NSArray;

@interface EWSFindItemType : EWSBaseRequestType {

	EWSItemResponseShapeType* _ItemShape;
	EWSBasePagingType* _Paging;
	EWSRestrictionType* _Restriction;
	NSArray* _SortOrder;
	NSArray* _ParentFolderIds;
	int _Traversal;

}

@property (nonatomic,retain) EWSItemResponseShapeType * ItemShape;              //@synthesize ItemShape=_ItemShape - In the implementation block
@property (nonatomic,retain) EWSBasePagingType * Paging;                        //@synthesize Paging=_Paging - In the implementation block
@property (nonatomic,retain) EWSRestrictionType * Restriction;                  //@synthesize Restriction=_Restriction - In the implementation block
@property (setter=ortOrder,nonatomic,copy) NSArray * SortOrder;                 //@synthesize SortOrder=_SortOrder - In the implementation block
@property (nonatomic,copy) NSArray * ParentFolderIds;                           //@synthesize ParentFolderIds=_ParentFolderIds - In the implementation block
@property (assign,nonatomic) int Traversal;                                     //@synthesize Traversal=_Traversal - In the implementation block
+(id)definition;
-(EWSBasePagingType *)Paging;
-(void)setPaging:(EWSBasePagingType *)arg1 ;
-(EWSRestrictionType *)Restriction;
-(NSArray *)ParentFolderIds;
-(int)Traversal;
-(NSArray *)SortOrder;
-(void)setSortOrder:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setItemShape:(EWSItemResponseShapeType *)arg1 ;
-(EWSItemResponseShapeType *)ItemShape;
-(void)setRestriction:(EWSRestrictionType *)arg1 ;
-(void)setTraversal:(int)arg1 ;
-(void)setParentFolderIds:(NSArray *)arg1 ;
@end

