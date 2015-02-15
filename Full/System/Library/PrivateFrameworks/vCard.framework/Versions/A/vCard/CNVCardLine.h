/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vCard/CNVCardParameterLine.h>

@class NSString, NSMutableArray, NSArray;

@interface CNVCardLine : NSObject <CNVCardParameterLine> {

	NSString* _name;
	id _value;
	NSMutableArray* _parameters;
	NSString* _grouping;
	NSString* _customLabel;
	NSMutableArray* _groupedLines;
	NSString* _itemSeparator;

}

@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) id value;                                      //@synthesize value=_value - In the implementation block
@property (readonly) NSArray * parameters;                          //@synthesize parameters=_parameters - In the implementation block
@property (readonly) NSString * groupingName;                       //@synthesize grouping=_grouping - In the implementation block
@property (readonly) NSArray * groupedLines;                        //@synthesize groupedLines=_groupedLines - In the implementation block
@property (readonly) NSString * itemSeparator;                      //@synthesize itemSeparator=_itemSeparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lineWithName:(id)arg1 value:(id)arg2 ;
+(id)lineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3 ;
+(id)lineWithLiteralValue:(id)arg1 ;
+(id)versionPlaceholderLine;
-(void)serializeWithStrategy:(id)arg1 ;
-(void)addParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)initWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3 ;
-(id)makeGroupingNameWithCounter:(long long*)arg1 ;
-(NSString *)itemSeparator;
-(void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)addGroupedLine:(id)arg1 withCounter:(long long*)arg2 ;
-(char)canSerializeWithStrategy:(id)arg1 ;
-(void)serializeValueWithStrategy:(id)arg1 ;
-(NSString *)groupingName;
-(NSArray *)groupedLines;
-(NSString *)name;
-(id)value;
-(NSArray *)parameters;
@end

