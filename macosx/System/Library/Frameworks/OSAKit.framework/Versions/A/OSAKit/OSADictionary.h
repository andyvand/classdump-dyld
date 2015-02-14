/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, OSADictionaryPrivate, NSData;

@interface OSADictionary : NSObject {

	NSString* _name;
	OSADictionaryPrivate* _private;

}

@property (copy) NSString * language; 
@property (copy) NSString * name; 
@property (copy) NSData * data; 
@property (copy) NSString * html; 
+(id)chooseDictionaries;
+(char)chooseDictionary;
+(id)anchorFromName:(id)arg1 ;
+(id)anchorFromName:(id)arg1 _2:(id)arg2 ;
+(id)anchorFromName:(id)arg1 _2:(id)arg2 _3:(id)arg3 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(id)definitions;
-(id)suiteDefinitions;
-(id)classDefinitions;
-(id)classDefinitionWithName:(id)arg1 ;
-(id)classDefinitionsWithName:(id)arg1 ;
-(void)setDefinitions:(id)arg1 ;
-(void)setSuiteDefinitions:(id)arg1 ;
-(void)setClassDefinitions:(id)arg1 ;
-(char)parsed;
-(void)setParsed:(char)arg1 ;
-(id)definitionForUniqueIdentifier:(id)arg1 ;
-(id)_objectValueForName:(id)arg1 fromElement:(id)arg2 ;
-(id)displayNameForTypeName:(id)arg1 ;
-(void)addDefinition:(id)arg1 ;
-(void)addSuiteDefinition:(id)arg1 ;
-(char)parseData:(id)arg1 error:(id*)arg2 ;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(void)parse;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)data;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(NSString *)language;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
@end

