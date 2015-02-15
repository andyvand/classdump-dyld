/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSSearchExpressionType.h>

@class EWSBasePathToElementType, EWSExcludesValueType;

@interface EWSExcludesType : EWSSearchExpressionType {

	EWSBasePathToElementType* _Path;
	EWSExcludesValueType* _Bitmask;

}

@property (nonatomic,retain) EWSBasePathToElementType * Path;              //@synthesize Path=_Path - In the implementation block
@property (nonatomic,retain) EWSExcludesValueType * Bitmask;               //@synthesize Bitmask=_Bitmask - In the implementation block
+(id)definition;
-(EWSExcludesValueType *)Bitmask;
-(void)setBitmask:(EWSExcludesValueType *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setPath:(EWSBasePathToElementType *)arg1 ;
-(EWSBasePathToElementType *)Path;
@end

