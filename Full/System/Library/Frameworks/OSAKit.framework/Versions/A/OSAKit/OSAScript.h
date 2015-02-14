/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAKit-Structs.h>
#import <OSAKit/NSCopying.h>

@class OSAScriptPrivate, NSString, NSURL, OSALanguage, OSALanguageInstance, NSAttributedString;

@interface OSAScript : NSObject <NSCopying> {

	OSAScriptPrivate* _private;
	void* _reserved1;
	void* _reserved2;
	void* _reserved3;
	void* _reserved4;
	void* _reserved5;
	void* _reserved6;

}

@property (copy,readonly) NSString * source; 
@property (copy,readonly) NSURL * url; 
@property (retain) OSALanguage * language; 
@property (retain) OSALanguageInstance * languageInstance; 
@property (getter=isCompiled,readonly) char compiled; 
@property (copy,readonly) NSAttributedString * richTextSource; 
+(void)sourceStylesChanged;
+(id)defaultTextAttributes;
+(unsigned)languageSubTypeForScriptDataDescriptor:(id)arg1 ;
+(id)scriptDataDescriptorWithContentsOfURL:(id)arg1 ;
+(id)scriptWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)scriptWithContentsOfURL:(id)arg1 language:(id)arg2 error:(id*)arg3 ;
+(id)scriptWithContentsOfURL:(id)arg1 languageInstance:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)scriptWithSource:(id)arg1 ;
+(id)scriptWithSource:(id)arg1 language:(id)arg2 ;
+(id)scriptWithSource:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 ;
+(id)scriptWithCompiledData:(id)arg1 error:(id*)arg2 ;
+(id)scriptWithDataDescriptor:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id*)arg5 ;
+(void)initialize;
-(char)_am_compileOnMainThreadAndReturnError:(id*)arg1 ;
-(void)_am_compileOnMainThreadAndReturnErrorWithDictionary:(id)arg1 ;
-(void)_am_executeAppleEventOnMainThreadWithDictionary:(id)arg1 ;
-(void)_am_executeOnMainThreadAndReturnErrorWithDictionary:(id)arg1 ;
-(id)_am_executeAppleEventOnMainThread:(id)arg1 error:(id*)arg2 ;
-(id)_am_executeOnMainThreadAndReturnError:(id*)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(id)richTextFromDescriptor:(id)arg1 ;
-(char)isExecuting;
-(unsigned)compiledScriptID;
-(id)initWithSource:(id)arg1 language:(id)arg2 ;
-(id)initWithSource:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 ;
-(id)initWithContentsOfURL:(id)arg1 language:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 languageInstance:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_initWithContentsOfURL:(id)arg1 languageInstance:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithScriptDataDescriptor:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)_initWithData:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)_initWithDataDescriptor:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(ComponentInstanceRecord*)_componentInstance;
-(id)sourceAndReturnError:(id*)arg1 ;
-(void)setLanguageInstance:(OSALanguageInstance *)arg1 ;
-(void)setScriptLocation;
-(id)defaultTarget;
-(void)setDefaultTarget:(id)arg1 ;
-(char)writeToURL:(id)arg1 ofType:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithCompiledData:(id)arg1 error:(id*)arg2 ;
-(id)initWithCompiledData:(id)arg1 fromURL:(id)arg2 usingStorageOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(OSALanguageInstance *)languageInstance;
-(id)executeAndReturnDisplayValue:(id*)arg1 error:(id*)arg2 ;
-(id)executeHandlerWithName:(id)arg1 arguments:(id)arg2 error:(id*)arg3 ;
-(id)compiledDataForType:(id)arg1 usingStorageOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_initWithScriptIDNoCopy:(unsigned)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 ;
-(id)_initWithContentsOfFile:(id)arg1 fromURL:(id)arg2 languageInstance:(id)arg3 usingStorageOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(ComponentInstanceRecord*)_defaultComponentInstance;
-(id)_initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(long long)lineNumberForRange:(NSRange)arg1 ;
-(char)hasOpenHandler;
-(ComponentInstanceRecord*)_sharedComponentInstance;
-(id)_initWithScriptIDNoCopy:(unsigned)arg1 ;
-(id)_infoForOSAError:(int)arg1 ;
-(id)_initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(id)_initWithData:(id)arg1 error:(id*)arg2 ;
-(id)executeAppleEvent:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(NSURL *)url;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isCompiled;
-(unsigned)_compiledScriptID;
-(NSAttributedString *)richTextSource;
-(id)date;
-(void)setDate:(id)arg1 ;
-(char)writeToURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)setURL:(id)arg1 ;
-(NSString *)source;
-(OSALanguage *)language;
-(void)setLanguage:(OSALanguage *)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(char)compileAndReturnError:(id*)arg1 ;
-(id)executeAndReturnError:(id*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
@end

