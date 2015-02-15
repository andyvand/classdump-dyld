/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vCard/ABvCardLineSerializationStrategyImpl.h>

@class NSArray;

@interface ABvCardLine21SerializationStrategy : ABvCardLineSerializationStrategyImpl {

	NSArray* _encodings;

}
+(id)serializerWithStorage:(id)arg1 encodings:(id)arg2 ;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2 ;
-(void)serializeVersionPlaceholder;
-(id)initWithStorage:(id)arg1 ;
-(void)serializeParameters:(id)arg1 ;
-(void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2 ;
-(void)_addAutomagicParametersForData:(id)arg1 ;
-(id)detectedTypeOfData:(id)arg1 ;
-(id)initWithStorage:(id)arg1 encodings:(id)arg2 ;
-(id)necessaryEncodingForValue:(id)arg1 ;
-(void)serializeData:(id)arg1 ;
-(void)serializeString:(id)arg1 ;
@end
