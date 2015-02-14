/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNVCardParsedParameter : NSObject {

	NSString* _name;
	NSArray* _values;

}

@property (readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
+(id)parameterWithName:(id)arg1 values:(id)arg2 ;
-(id)initWithName:(id)arg1 values:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSArray *)values;
-(NSString *)name;
@end

