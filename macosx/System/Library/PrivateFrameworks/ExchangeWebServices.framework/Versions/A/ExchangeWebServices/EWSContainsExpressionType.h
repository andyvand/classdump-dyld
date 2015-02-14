/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSSearchExpressionType.h>

@class EWSConstantValueType, EWSBasePathToElementType;

@interface EWSContainsExpressionType : EWSSearchExpressionType {

	EWSConstantValueType* _Constant;
	int _ContainmentComparison;
	int _ContainmentMode;
	EWSBasePathToElementType* _Path;

}

@property (nonatomic,retain) EWSConstantValueType * Constant;              //@synthesize Constant=_Constant - In the implementation block
@property (assign,nonatomic) int ContainmentComparison;                    //@synthesize ContainmentComparison=_ContainmentComparison - In the implementation block
@property (assign,nonatomic) int ContainmentMode;                          //@synthesize ContainmentMode=_ContainmentMode - In the implementation block
@property (nonatomic,retain) EWSBasePathToElementType * Path;              //@synthesize Path=_Path - In the implementation block
+(id)definition;
-(EWSConstantValueType *)Constant;
-(int)ContainmentComparison;
-(int)ContainmentMode;
-(void)dealloc;
-(id)description;
-(void)setPath:(EWSBasePathToElementType *)arg1 ;
-(void)setConstant:(EWSConstantValueType *)arg1 ;
-(void)setContainmentComparison:(int)arg1 ;
-(void)setContainmentMode:(int)arg1 ;
-(EWSBasePathToElementType *)Path;
@end

