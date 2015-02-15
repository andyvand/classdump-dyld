/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperture31Plugin.ilmbplugin/Contents/MacOS/iLMBAperture31Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperture31Plugin/AP31_RKModel.h>

@class NSString, NSNumber;

@interface AP31_RKKeyword : AP31_RKModel {

	NSString* m_name;
	NSNumber* m_parentId;
	NSString* m_shortcut;

}
+(id)displayNameFromString:(id)arg1 ;
+(id)makeUniqueName:(id)arg1 forParent:(id)arg2 ;
+(id)keywordsDictionaryForDatabase:(id)arg1 ;
+(id)findKeywordWithString:(id)arg1 ;
+(id)findKeyword:(id)arg1 withParent:(id)arg2 ;
+(id)topLevelKeywords;
+(id)importedKeywordFromDatabase:(id)arg1 ;
+(id)iPhotoHiddenKeywordString;
+(id)iPhotoOriginalKeywordString;
+(id)archiveStringsForKeywords:(id)arg1 ;
+(id)iPhotoEditedKeywordString;
+(id)parentArchiveStringFromString:(id)arg1 ;
+(id)iPhotoFlaggedKeywordString;
+(id)iPhotoConvertedKeywordString;
+(id)convertFromKeypath:(id)arg1 ;
+(id)iPhotoFavoriteKeywordString;
+(id)nameFromArchiveString:(id)arg1 ;
+(void)expandSetToIncludeAllParentIds:(id)arg1 fromDatabase:(id)arg2 ;
+(id)archiveStringsForKeywordIds:(id)arg1 fromDatabase:(id)arg2 ;
+(id)archiveDelimiter;
+(id)importedKeywordString;
+(id)appendString:(id)arg1 aboveArchiveString:(id)arg2 ;
+(id)localeDictionary;
+(long long)compareKeywordName:(id)arg1 toName:(id)arg2 options:(long long)arg3 ;
+(id)cleanKeywordString:(id)arg1 ;
+(id)keywordIdsForParentIds:(id)arg1 fromDatabase:(id)arg2 ;
+(void)expandSetToIncludeAllChildrenIds:(id)arg1 fromDatabase:(id)arg2 ;
+(id)iPhotoKeywordString;
+(id)findKeywordWithString:(id)arg1 fromDatabase:(id)arg2 ;
+(id)iPhotoKeywordFromDatabase:(id)arg1 ;
+(id)findKeyword:(id)arg1 withParent:(id)arg2 fromDatabase:(id)arg3 ;
+(id)rootLevelKeywordsFromDatabase:(id)arg1 ;
+(id)topLevelKeywordsFromDatabase:(id)arg1 ;
+(id)highestKeywordFromCollection:(id)arg1 ;
+(id)findKeyword:(id)arg1 fromDatabase:(id)arg2 ;
+(id)addImportedLabelToArchiveString:(id)arg1 ;
+(id)splitUpMultipleKeywords:(id)arg1 ;
+(id)keywordToAddViaImport:(id)arg1 isIPhotoImport:(char)arg2 fromDatabase:(id)arg3 ;
+(char)isUniqueKeyword:(id)arg1 ;
+(id)directChildrenOfKeywordId:(id)arg1 forDatabase:(id)arg2 ;
+(void)expandSetToIncludeAllChildren:(id)arg1 ;
+(id)keywordsMatchingString:(id)arg1 partial:(char)arg2 ;
+(id)parentNameFromString:(id)arg1 ;
+(id)favoriteKeywordFromDatabase:(id)arg1 ;
+(id)findKeyword:(id)arg1 ;
+(id)pathExtensions;
+(id)appendString:(id)arg1 belowArchiveString:(id)arg2 ;
+(unsigned long long)countOfUniqueVersionsUsingKeywords:(id)arg1 keywordNamesUsed:(id)arg2 ;
+(id)keywordsToAddViaImport:(id)arg1 isIPhotoImport:(char)arg2 fromDatabase:(id)arg3 ;
+(id)newKeywordsFromFlatList:(id)arg1 existingKeywords:(id)arg2 obeyKeywordLock:(char)arg3 fromDatabase:(id)arg4 ;
+(id)keywordUuidToArchiveStringForKeywordUuids:(id)arg1 fromDatabase:(id)arg2 ;
+(id)_directChildrenDictionary:(id)arg1 fromDatabase:(id)arg2 ;
+(id)localizableRepresentationForDatabase:(id)arg1 ;
+(void)createDefaultKeywordsForDatabase:(id)arg1 ;
+(id)nameFromString:(id)arg1 ;
+(id)allKeywordsFromDatabase:(id)arg1 ;
-(long long)hierarchyLevelCompare:(id)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 inDatabase:(id)arg3 ;
-(void)updateHasChildren;
-(void)cacheHasChildren:(char)arg1 ;
-(id)countOfVersionsAsNumber;
-(id)invertedArchiveString;
-(id)displayableAncestorString;
-(id)displayablePathString;
-(id)initWithUuid:(id)arg1 name:(id)arg2 parent:(id)arg3 inDatabase:(id)arg4 ;
-(id)shortcut;
-(unsigned long long)countOfVersions;
-(id)directChildren;
-(id)archiveString;
-(long long)hierarchyLevel;
-(void)cacheParentId:(id)arg1 ;
-(void)cacheShortcut:(id)arg1 ;
-(void)cacheName:(id)arg1 ;
-(id)parentId;
-(id)allChildren;
-(char)isFavorite;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)caseInsensitiveCompare:(id)arg1 ;
-(id)name;
-(id)stringValue;
-(id)keyPath;
-(id)infoDictionary;
-(long long)compare:(id)arg1 ;
-(id)displayName;
-(id)parent;
-(char)hasAncestor:(id)arg1 ;
-(char)hasChildren;
-(id)versions;
-(id)parentName;
@end
