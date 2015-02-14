/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSItemResponseShapeType, NSArray;

@interface EWSGetItemType : EWSBaseRequestType {

	EWSItemResponseShapeType* _ItemShape;
	NSArray* _ItemIds;

}

@property (nonatomic,retain) EWSItemResponseShapeType * ItemShape;              //@synthesize ItemShape=_ItemShape - In the implementation block
@property (nonatomic,copy) NSArray * ItemIds;                                   //@synthesize ItemIds=_ItemIds - In the implementation block
+(id)definition;
-(void)dealloc;
-(void)setItemShape:(EWSItemResponseShapeType *)arg1 ;
-(EWSItemResponseShapeType *)ItemShape;
-(void)setItemIds:(NSArray *)arg1 ;
-(NSArray *)ItemIds;
@end

