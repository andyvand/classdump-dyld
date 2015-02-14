/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NSDocumentTypeDescription : NSObject {

	NSString* _className;
	int _role;
	NSString* _oldStyleName;
	NSString* _oldStyleAlias;
	id _identifierOrIdentifiers;
	NSArray* _exportableTypeIdentifiersOrOldStyleNames;
	NSArray* _fileNameExtensionsAndHFSFileTypes;
	NSString* _persistentStoreType;
	NSString* _userActivityType;

}
+(id)aliasesByName;
+(char)parsesLSItemContentTypes;
+(id)descriptionsWithDeclarations:(id)arg1 ;
+(id)namesByAlias;
+(char)_validateDeclarationString:(id)arg1 forKey:(id)arg2 ;
+(char)_validateDeclarationStrings:(id)arg1 forKey:(id)arg2 ;
+(void)_addUniqueNameOrNames:(id)arg1 toNames:(id)arg2 ;
+(id)_noneOrQuotingOfText:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)className;
-(char)isIdentifiedByUTIs;
-(id)fileNameExtensionsAndHFSFileTypes;
-(char)isEditableByThisApp;
-(char)isViewableByThisApp;
-(id)firstName;
-(id)appSpecificPresentableNameForName:(id)arg1 ;
-(void)getReadableNotWritable:(char)arg1 names:(id)arg2 ;
-(char)isNativeName:(id)arg1 ;
-(char)isIdentifiedByName:(id)arg1 ;
-(char)exactlyMatchesFileNameExtensionOrHFSFileType:(id)arg1 ;
-(char)matchesAnyFile;
-(id)persistentStoreType;
-(id)_initWithDeclaration:(id)arg1 cachedNamesByAlias:(id)arg2 ;
-(id)userActivityType;
@end

