/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DDTypeCheckerDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSMutableString, NSMutableSet, NSArray, NSString;

@interface DDRegexpManager : NSObject <DDTypeCheckerDelegate> {

	NSMutableDictionary* _regExpesByName;
	NSMutableArray* _topRegexes;
	int _maxTokenId;
	CFDictionaryRef _regexpToIdent;
	NSMutableString* _icuPrelude;
	NSMutableSet* _icuVariables;
	NSMutableArray* _level1Regexs;
	DDLookupTableRef _lookupTable;
	NSMutableArray* _errors;
	int _typeCheckingMethod;
	NSMutableDictionary* _typeByName;
	NSMutableArray* _ruleAcceptancePredicates;
	NSMutableSet* _alreadyLoadedFiles;
	NSMutableArray* _seenXMLFiles;
	NSMutableArray* _fileNamesStack;
	NSArray* _searchPaths;
	NSArray* _loadPaths;
	const CFDateRef _lastMod;
	NSMutableString* _signature;
	char _allowsRedefinition;
	char _defaultSentinelsEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char defaultSentinelsEnabled;                             //@synthesize defaultSentinelsEnabled=_defaultSentinelsEnabled - In the implementation block
@property (readonly) NSMutableArray * ruleAcceptancePredicates;              //@synthesize ruleAcceptancePredicates=_ruleAcceptancePredicates - In the implementation block
+(id)_frameworkBundle;
+(id)additionalPluginSearchPaths;
+(id)_defaultLanguages;
+(id)_standardManager;
+(void)initialize;
-(id)errors;
-(id)addElementaryPattern:(id)arg1 ;
-(id)patternWithName:(id)arg1 ;
-(void)_loadKernelFallbackPath:(id)arg1 ;
-(void)_setPathsForBundle:(id)arg1 locale:(id)arg2 ;
-(void)_addToSearchPath:(id)arg1 ;
-(id)_signatureWithProvider:(id)arg1 andLanguage:(id)arg2 andKind:(id)arg3 ;
-(char)loadString:(id)arg1 filename:(id)arg2 forLocale:(id)arg3 error:(id*)arg4 ;
-(char)_tryLoadFileWithName:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(void)_setLoadPaths:(id)arg1 ;
-(void)_setSearchPaths:(id)arg1 ;
-(char)_loadAllPatternsInLoadPaths:(id*)arg1 ;
-(void)_setPathsForBundle:(id)arg1 forLanguages:(id)arg2 ;
-(char)loadAllPatternsInBundle:(id)arg1 forLanguages:(id)arg2 error:(id*)arg3 ;
-(char)loadAllPatternsForLanguages:(id)arg1 error:(id*)arg2 ;
-(char)loadString:(id)arg1 withSignature:(id)arg2 filename:(id)arg3 forLocale:(id)arg4 error:(id*)arg5 ;
-(char)loadFileWithName:(id)arg1 fromBundle:(id)arg2 forLocale:(id)arg3 error:(id*)arg4 ;
-(char)loadAllFilesInDirectory:(id)arg1 error:(id*)arg2 ;
-(char)loadAllPatternsInBundle:(id)arg1 forLanguage:(id)arg2 error:(id*)arg3 ;
-(char)loadEverything:(id*)arg1 ;
-(void)_pushFileName:(id)arg1 ;
-(void)_popFileName;
-(id)loadedXMLFiles;
-(char)defaultSentinelsEnabled;
-(void)setDefaultSentinelsEnabled:(char)arg1 ;
-(NSMutableArray *)ruleAcceptancePredicates;
-(char)_reallyLoadFileAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_signatureFromXMLDocument:(id)arg1 ;
-(id)_pathsForBundle:(id)arg1 forLanguages:(id)arg2 ;
-(char)_loadFromSearchPathFileWithName:(id)arg1 error:(id*)arg2 ;
-(void)setTypeCheckingMode:(int)arg1 ;
-(DDScannerRef)createScanner;
-(char)importFileWithName:(id)arg1 error:(id*)arg2 ;
-(id)includedFileURLForName:(id)arg1 ;
-(void)dumpAll;
-(id)allPatterns;
-(char)hasPatternWithName:(id)arg1 ;
-(id)expressionWithName:(id)arg1 ;
-(char)allowsRedefinition;
-(void)setAllowsRedefinition:(char)arg1 ;
-(id)definePatternWithName:(id)arg1 value:(id)arg2 info:(id)arg3 ;
-(void)defineTypeWithName:(id)arg1 value:(id)arg2 location:(id)arg3 ;
-(void)addPattern:(id)arg1 ;
-(void)setRegExpesByName:(id)arg1 ;
-(id)regExpesByName;
-(id)newPatternWithString:(id)arg1 stringType:(int)arg2 ;
-(id)newDictionaryPatternWithFileName:(id)arg1 position:(_DDExpressionPosition)arg2 ;
-(id)newDictionaryPatternWithTableName:(id)arg1 ;
-(id)newNERRequest:(id)arg1 ;
-(char)isValidSpotlightAttribute:(id)arg1 ;
-(id)newDictionaryPatternWithAttribute:(id)arg1 ;
-(void)addTypingError:(id)arg1 ;
-(CFDataRef)copyLexerTableData;
-(SCD_Struct_DD9)ICULexemRanges;
-(CFDictionaryRef)copyRulesForIdentifier;
-(CFDataRef)copyLookupTableData;
-(DDCacheRef)createCacheWithSignature:(id)arg1 ;
-(DDLookupTableRef)lookupTable;
-(void)_split;
-(DDScannerRef)createScannerWithSignature:(id)arg1 ;
-(id)ICURulesWithMaxIdentifierRef:(long long*)arg1 ;
-(char)isICUVariableDefined:(id)arg1 ;
-(void)defineICUVariableWithName:(id)arg1 icuExpression:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
