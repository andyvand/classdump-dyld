/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSItemInfoResponseMessageType.h>

@class EWSConflictResultsType;

@interface EWSUpdateItemResponseMessageType : EWSItemInfoResponseMessageType {

	EWSConflictResultsType* _ConflictResults;

}

@property (nonatomic,retain) EWSConflictResultsType * ConflictResults;              //@synthesize ConflictResults=_ConflictResults - In the implementation block
+(id)definition;
-(EWSConflictResultsType *)ConflictResults;
-(void)setConflictResults:(EWSConflictResultsType *)arg1 ;
-(void)dealloc;
@end

