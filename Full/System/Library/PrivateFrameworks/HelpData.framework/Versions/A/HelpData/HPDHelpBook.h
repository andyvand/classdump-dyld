/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpData/NSCoding.h>

@class NSURL, NSArray, NSString;

@interface HPDHelpBook : NSObject <NSCoding> {

	NSURL* _iconURL;
	NSURL* _remoteURL;
	NSArray* _indexPaths;
	NSString* _kbProductString;
	NSString* _kbURLString;
	NSString* _bookID;
	NSString* _path;
	NSString* _title;
	NSString* _accessPagePath;
	NSString* _exactMatchPath;
	NSString* _suggestionsPath;
	NSString* _topiclistTemplatePath;
	NSString* _topiclistCSSPath;
	NSString* _pathToLoadFrom;
	NSString* _localization;
	NSString* _bundleVersion;
	char _usesExternalViewer;
	unsigned long long _stringEncoding;
	int _type;
	unsigned short _alreadyCheckedMask;

}

@property (assign) int type;                                            //@synthesize type=_type - In the implementation block
@property (retain) NSArray * indexPaths;                                //@synthesize indexPaths=_indexPaths - In the implementation block
@property (retain) NSURL * iconURL; 
@property (retain) NSURL * remoteURL;                                   //@synthesize remoteURL=_remoteURL - In the implementation block
@property (readonly) NSString * path;                                   //@synthesize path=_path - In the implementation block
@property (readonly) NSString * localization;                           //@synthesize localization=_localization - In the implementation block
@property (readonly) NSString * bundleVersion;                          //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSString * bookID;                                   //@synthesize bookID=_bookID - In the implementation block
@property (retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (retain) NSString * kbURLString;                              //@synthesize kbURLString=_kbURLString - In the implementation block
@property (retain) NSString * kbProductString;                          //@synthesize kbProductString=_kbProductString - In the implementation block
@property (retain) NSString * exactMatchPath; 
@property (retain) NSString * suggestionsPath; 
@property (retain) NSString * accessPagePath;                           //@synthesize accessPagePath=_accessPagePath - In the implementation block
@property (retain) NSString * topiclistTemplatePath;                    //@synthesize topiclistTemplatePath=_topiclistTemplatePath - In the implementation block
@property (retain) NSString * topiclistCSSPath;                         //@synthesize topiclistCSSPath=_topiclistCSSPath - In the implementation block
@property (retain) NSString * pathToLoadFrom; 
@property (readonly) NSString * localizedDocumentRootPath; 
@property (readonly) NSString * resourcesRootPath; 
@property (readonly) char usesExternalViewer;                           //@synthesize usesExternalViewer=_usesExternalViewer - In the implementation block
@property (assign) unsigned long long stringEncoding;                   //@synthesize stringEncoding=_stringEncoding - In the implementation block
+(id)_fullURLFromBasePath:(id)arg1 toPartialPath:(id)arg2 ;
+(id)_URLFromBundleAtPath:(id)arg1 toPartialPath:(id)arg2 forLocalization:(id)arg3 ;
+(id)_findAccessPageInDirectoryAtPath:(id)arg1 ;
+(id)_findIndicesInDirectoryWithURL:(id)arg1 ;
+(id)_xmlDocumentForFileAtPath:(id)arg1 ;
+(id)_parseMetasForXMLDocument:(id)arg1 ;
+(id)_determinePotentialAccessPages:(id)arg1 forDirectory:(id)arg2 ;
+(char)_appleTitleExistsInDoc:(id)arg1 ;
+(unsigned long long)_encodingOfXMLDocument:(id)arg1 ;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(unsigned long long)stringEncoding;
-(NSURL *)iconURL;
-(long long)titleCompare:(id)arg1 ;
-(NSString *)bookID;
-(id)_dictionaryForPath:(id)arg1 withLocalization:(id)arg2 ;
-(void)_populateFromKnownGoodDictionary:(id)arg1 ;
-(void)setBookID:(NSString *)arg1 ;
-(id)_determineExactMatchPlistPath;
-(id)_determineSuggestionsPlistPath;
-(id)_determineDefaultIconURL;
-(NSString *)pathToLoadFrom;
-(void)setPathToLoadFrom:(NSString *)arg1 ;
-(int)_determineType;
-(id)_determineAccessPagePathForBookType:(int)arg1 ;
-(id)_dictionaryFromAccessPage:(id)arg1 forBookType:(int)arg2 ;
-(id)_dictionaryFromBundlePlistWithLocalization:(id)arg1 ;
-(char)_setPath:(id)arg1 withLocalization:(id)arg2 ;
-(void)_verifyBundleDictionary:(id)arg1 containsAbsolutePathForKey:(id)arg2 ;
-(char)_verifyString:(id)arg1 existsInDictionary:(id)arg2 ;
-(NSString *)kbURLString;
-(NSString *)kbProductString;
-(NSString *)accessPagePath;
-(NSArray *)indexPaths;
-(char)usesExternalViewer;
-(NSString *)localization;
-(NSString *)exactMatchPath;
-(NSString *)suggestionsPath;
-(NSString *)topiclistCSSPath;
-(NSString *)topiclistTemplatePath;
-(void)setIconURL:(NSURL *)arg1 ;
-(void)setKbProductString:(NSString *)arg1 ;
-(void)setKbURLString:(NSString *)arg1 ;
-(void)setIndexPaths:(NSArray *)arg1 ;
-(void)setAccessPagePath:(NSString *)arg1 ;
-(void)setExactMatchPath:(NSString *)arg1 ;
-(void)setSuggestionsPath:(NSString *)arg1 ;
-(void)setTopiclistCSSPath:(NSString *)arg1 ;
-(void)setTopiclistTemplatePath:(NSString *)arg1 ;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(id)initWithID:(id)arg1 andCacheDictionary:(id)arg2 ;
-(NSString *)localizedDocumentRootPath;
-(NSString *)resourcesRootPath;
-(id)pathToResourceAtRelativePath:(id)arg1 ;
-(char)setPreferredLocalization:(id)arg1 ;
-(char)isEqualToHelpBook:(id)arg1 ;
-(id)_dictionaryForBook;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(NSURL *)remoteURL;
-(NSString *)bundleVersion;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)type;
-(id)initWithPath:(id)arg1 ;
-(void)setType:(int)arg1 ;
@end

