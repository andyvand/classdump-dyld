/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface EWSFolderResponseShapeType : NSObject {

	int _BaseShape;
	NSArray* _AdditionalProperties;

}

@property (assign,nonatomic) int BaseShape;                             //@synthesize BaseShape=_BaseShape - In the implementation block
@property (nonatomic,copy) NSArray * AdditionalProperties;              //@synthesize AdditionalProperties=_AdditionalProperties - In the implementation block
+(id)definition;
-(NSArray *)AdditionalProperties;
-(int)BaseShape;
-(void)dealloc;
-(id)description;
-(void)setBaseShape:(int)arg1 ;
-(void)setAdditionalProperties:(NSArray *)arg1 ;
@end
