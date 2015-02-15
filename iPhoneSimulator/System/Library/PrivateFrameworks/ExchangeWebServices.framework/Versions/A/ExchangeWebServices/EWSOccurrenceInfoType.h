/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSItemIdType, NSDateComponents;

@interface EWSOccurrenceInfoType : NSObject {

	EWSItemIdType* _ItemId;
	NSDateComponents* _Start;
	NSDateComponents* _End;
	NSDateComponents* _OriginalStart;

}

@property (nonatomic,retain) EWSItemIdType * ItemId;                            //@synthesize ItemId=_ItemId - In the implementation block
@property (setter=tart,nonatomic,retain) NSDateComponents * Start;              //@synthesize Start=_Start - In the implementation block
@property (nonatomic,retain) NSDateComponents * End;                            //@synthesize End=_End - In the implementation block
@property (nonatomic,retain) NSDateComponents * OriginalStart;                  //@synthesize OriginalStart=_OriginalStart - In the implementation block
+(id)definition;
-(void)setOriginalStart:(NSDateComponents *)arg1 ;
-(void)setStart:(NSDateComponents *)arg1 ;
-(void)dealloc;
-(id)description;
-(EWSItemIdType *)ItemId;
-(void)setEnd:(NSDateComponents *)arg1 ;
-(void)setItemId:(EWSItemIdType *)arg1 ;
-(NSDateComponents *)Start;
-(NSDateComponents *)End;
-(NSDateComponents *)OriginalStart;
@end

