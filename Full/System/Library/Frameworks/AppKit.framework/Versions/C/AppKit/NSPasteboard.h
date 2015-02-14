/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSMutableDictionary, NSString, NSArray;

@interface NSPasteboard : NSObject {

	id _pboard;
	int _gen;
	id _owners;
	long long _cachedTypeNameChangeCount;
	id _cachedTypeNames;
	NSMutableDictionary* _promiseTypeNamesByIdentifier;
	id _support;
	id _pasteboardItems;
	void** _reserved[3];

}

@property (copy,readonly) NSString * name; 
@property (readonly) long long changeCount; 
@property (copy,readonly) NSArray * pasteboardItems; 
@property (copy,readonly) NSArray * types; 
+(id)pasteboardTypeFromCarbonDragFlavor:(unsigned)arg1 ;
+(id)safari_bookmarkPasteboardTypes;
+(id)safari_writableBookmarkUTIs;
+(id)_web_dragTypesForURL;
+(int)_web_setFindPasteboardString:(id)arg1 withOwner:(id)arg2 ;
+(id)_web_writableTypesForURL;
+(id)_web_writableTypesForImageIncludingArchive:(char)arg1 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)pasteboardWithName:(id)arg1 ;
+(id)generalPasteboard;
+(id)typesFilterableTo:(id)arg1 ;
+(id)pasteboardByFilteringData:(id)arg1 ofType:(id)arg2 ;
+(id)pasteboardByFilteringFile:(id)arg1 ;
+(id)pasteboardByFilteringTypesInPasteboard:(id)arg1 ;
+(id)_pasteboardWithName:(id)arg1 ;
+(void)_provideAllPromisedData:(id)arg1 ;
+(char)_isValidPasteboardUTI:(id)arg1 logStringMessage:(id)arg2 ;
+(CFStringRef)_typeIdentifierForName:(id)arg1 ;
+(void)_setConversionFromData:(id)arg1 typeIdentifier:(id)arg2 inPasteboard:(CFPasteboardRef)arg3 generation:(long long)arg4 item:(void*)arg5 ;
+(char)_usesUTIsOnly;
+(id)_typeIdentifiersIncludingConversionsFromTypeIdentifiers:(id)arg1 usesPboardTypes:(char)arg2 ;
+(id)_oldStyleTypeNameForIdentifier:(CFStringRef)arg1 ;
+(id)_convertStringToData:(id)arg1 ;
+(id)_convertPropertyListToData:(id)arg1 ;
+(id)_convertDataToString:(id)arg1 ;
+(id)_convertDataToPropertyList:(id)arg1 ;
+(void)_resetUsesUTIsOnly;
+(id)_tmpPasteboardWithCFPasteboard:(CFPasteboardRef)arg1 ;
+(id)pasteboardWithUniqueName;
+(id)_typesIncludingConversionsFromTypes:(id)arg1 ;
+(id)_typeIdentifiersIncludingConversionsFromTypeIdentifiers:(id)arg1 ;
-(id)imageURL;
-(char)hasFilenames;
-(id)fileURLs;
-(char)hasWebloc;
-(char)hasTextClipping;
-(id)_URLsFromiTunesDrag:(id)arg1 ;
-(id)filePaths;
-(char)hasFilePathsOrImage;
-(char)hasRichText;
-(char)hasPlainText;
-(char)hasURL;
-(char)containsAnyURLs;
-(void)replaceContentsWithURL:(id)arg1 ;
-(void)writeURLs:(id)arg1 andTitles:(id)arg2 ;
-(id)URLsFromString;
-(char)containsAnyURLsViableForTopSites;
-(id)URLs;
-(void)_safari_writeBookmarks:(id)arg1 withOwner:(id)arg2 forInternalUseOnly:(char)arg3 ;
-(char)safari_isDraggingFavoriteButton;
-(id)_safari_bookmarksTopLevelOnly:(char)arg1 ;
-(id)safari_bookmarksOnPasteboard;
-(void)safari_writeBookmarks:(id)arg1 withOwner:(id)arg2 ;
-(void)safari_writeBookmarksForInternalUseOnly:(id)arg1 withOwner:(id)arg2 ;
-(char)safari_hasAnyBookmarks;
-(unsigned long long)safari_numberOfBookmarksOnPasteboard;
-(unsigned long long)safari_numberOfBookmarkFoldersOnPasteboard;
-(id)safari_topLevelBookmarksOnPasteboard;
-(void)safari_getExistingBookmarksFromPasteboard:(id*)arg1 newBookmarks:(id*)arg2 ;
-(void)_web_writeURL:(id)arg1 andTitle:(id)arg2 types:(id)arg3 ;
-(id)_web_bestURL;
-(id)_web_declareAndWriteDragImageForElement:(id)arg1 URL:(id)arg2 title:(id)arg3 archive:(id)arg4 source:(id)arg5 ;
-(void)_web_writePromisedRTFDFromArchive:(id)arg1 containsImage:(char)arg2 ;
-(void)_web_writeFileWrapperAsRTFDAttachment:(id)arg1 ;
-(void)_web_writeImage:(id)arg1 element:(id)arg2 URL:(id)arg3 title:(id)arg4 archive:(id)arg5 types:(id)arg6 source:(id)arg7 ;
-(void)dealloc;
-(NSString *)name;
-(long long)declareTypes:(id)arg1 owner:(id)arg2 ;
-(NSArray *)types;
-(id)dataForType:(id)arg1 ;
-(char)setData:(id)arg1 forType:(id)arg2 ;
-(id)propertyListForType:(id)arg1 ;
-(long long)clearContents;
-(char)writeObjects:(id)arg1 ;
-(id)readObjectsForClasses:(id)arg1 options:(id)arg2 ;
-(CFPasteboardRef)_cfPasteboard;
-(void)_removeFromGlobalTable;
-(long long)changeCount;
-(id)stringForType:(id)arg1 ;
-(char)setPropertyList:(id)arg1 forType:(id)arg2 ;
-(char)setString:(id)arg1 forType:(id)arg2 ;
-(id)availableTypeFromArray:(id)arg1 ;
-(id)_cachedTypeNameUnion;
-(id)_conformingTypeIdentifiers;
-(void)_clearOutstandingPromises;
-(void)_addConversionsFromTypeIdentifiers:(id)arg1 atIndex:(unsigned long long)arg2 usesPboardTypes:(char)arg3 ;
-(void)_updateTypeCacheIfNeeded;
-(id)_typesAtIndex:(unsigned long long)arg1 combinesItems:(char)arg2 ;
-(char)_canRequestDataForType:(id)arg1 index:(unsigned long long)arg2 usesPboardTypes:(char)arg3 combinesItems:(char)arg4 ;
-(id)_combinedPasteboardDataForTypeIdentifier:(id)arg1 ;
-(id)_dataWithoutConversionForTypeIdentifier:(id)arg1 ;
-(id)_dataWithConversionForType:(id)arg1 ;
-(id)_dataWithoutConversionForTypeIdentifier:(id)arg1 index:(unsigned long long)arg2 ;
-(id)_dataWithConversionForTypeIdentifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)_setOwner:(id)arg1 forTypes:(id)arg2 atIndex:(unsigned long long)arg3 selector:(SEL)arg4 usesPboardTypes:(char)arg5 ;
-(char)_setData:(id)arg1 forType:(id)arg2 index:(unsigned long long)arg3 usesPboardTypes:(char)arg4 ;
-(id)_pasteboardItems;
-(id)_availableTypeFromArray:(id)arg1 inExistingTypes:(id)arg2 ;
-(NSArray *)pasteboardItems;
-(id)_dataForType:(id)arg1 index:(unsigned long long)arg2 usesPboardTypes:(char)arg3 combinesItems:(char)arg4 ;
-(char)_contentsOfURL:(id)arg1 conformToTypeIdentifiers:(id)arg2 ;
-(id)_conformingTypes;
-(long long)addTypes:(id)arg1 owner:(id)arg2 ;
-(oneway void)releaseGlobally;
-(long long)_currentGeneration;
-(id)_promiseTypeNameForIdentifier:(CFStringRef)arg1 ;
-(id)_dataWithoutConversionForType:(id)arg1 ;
-(unsigned long long)indexOfPasteboardItem:(id)arg1 ;
-(char)canReadItemWithDataConformingToTypes:(id)arg1 ;
-(char)canReadObjectForClasses:(id)arg1 options:(id)arg2 ;
-(char)setDataProvider:(id)arg1 forTypes:(id)arg2 ;
-(char)writeFileContents:(id)arg1 ;
-(char)writeFileWrapper:(id)arg1 ;
-(char)attemptOverwrite:(id)arg1 ;
-(id)readFileContentsType:(id)arg1 toFile:(id)arg2 ;
-(id)readFileWrapper;
@end

