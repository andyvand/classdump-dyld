/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ADConnectionType : NSObject {

	char _WWAN;
	long long _technology;

}

@property (assign,nonatomic) long long technology;                 //@synthesize technology=_technology - In the implementation block
@property (assign,getter=isWWAN,nonatomic) char WWAN;              //@synthesize WWAN=_WWAN - In the implementation block
-(char)isWWAN;
-(long long)technology;
-(long long)diagnosticConnectionType;
-(id)initWithTechnology:(long long)arg1 ;
-(void)setTechnology:(long long)arg1 ;
-(void)setWWAN:(char)arg1 ;
@end

