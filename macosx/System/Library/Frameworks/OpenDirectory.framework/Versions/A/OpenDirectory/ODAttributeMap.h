/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface ODAttributeMap : NSObject {

	NSString* customQueryFunction;
	NSString* customTranslationFunction;
	NSArray* customAttributes;
	NSString* value;

}

@property (copy) NSString * customQueryFunction; 
@property (copy) NSString * customTranslationFunction; 
@property (copy) NSArray * customAttributes; 
@property (copy) NSString * value; 
@property (copy,readonly) NSDictionary * dictionary; 
+(id)attributeMapFromDictionary:(id)arg1 ;
+(id)attributeMapWithValue:(id)arg1 ;
+(id)attributeMapWithStaticValue:(id)arg1 ;
-(NSArray *)customAttributes;
-(NSDictionary *)dictionary;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(void)setCustomAttributes:(NSArray *)arg1 ;
-(void)setCustomQueryFunction:(NSString *)arg1 ;
-(void)setCustomTranslationFunction:(NSString *)arg1 ;
-(void)setStaticValue:(id)arg1 ;
-(void)setVariableSubstitution:(id)arg1 ;
-(NSString *)customQueryFunction;
-(NSString *)customTranslationFunction;
@end

