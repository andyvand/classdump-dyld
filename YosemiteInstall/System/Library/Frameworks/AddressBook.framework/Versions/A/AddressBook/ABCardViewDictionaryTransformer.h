/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSString, NSDictionary;

@interface ABCardViewDictionaryTransformer : NSValueTransformer {

	NSString* _valueKey;
	NSDictionary* _currentDictionary;

}

@property (nonatomic,copy) NSString * valueKey;                             //@synthesize valueKey=_valueKey - In the implementation block
@property (nonatomic,retain) NSDictionary * currentDictionary;              //@synthesize currentDictionary=_currentDictionary - In the implementation block
+(char)allowsReverseTransformation;
-(void)setCurrentDictionary:(NSDictionary *)arg1 ;
-(id)initWithValueKey:(id)arg1 ;
-(NSDictionary *)currentDictionary;
-(NSString *)valueKey;
-(void)setValueKey:(NSString *)arg1 ;
-(void)dealloc;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
@end

