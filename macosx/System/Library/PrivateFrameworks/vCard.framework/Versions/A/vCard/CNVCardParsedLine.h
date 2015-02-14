/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNVCardParsedLine : NSObject {

	NSString* _name;
	id _value;
	NSArray* _parameters;
	NSString* _grouping;
	char _isPrimary;

}

@property (readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (retain) id value;                        //@synthesize value=_value - In the implementation block
@property (copy) NSArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign) char isPrimary;                  //@synthesize isPrimary=_isPrimary - In the implementation block
@property (copy) NSString * grouping;               //@synthesize grouping=_grouping - In the implementation block
-(NSString *)grouping;
-(void)setGrouping:(NSString *)arg1 ;
-(void)setIsPrimary:(char)arg1 ;
-(char)isPrimary;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)value;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
@end

