/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/FBDomain.h>
#import <Font Book/FBScriptableObject.h>

@class NSString, NSMutableSet, NSArray;

@interface FBLibrary : FBDomain <FBScriptableObject> {

	unsigned long long fRef;
	NSString* fLibPath;
	char fDisabled;
	NSMutableSet* _files;
	NSArray* _cachedFaces;

}
+(id)unfilteredLibraryFiles;
+(void)addLibrary:(id)arg1 ;
+(char)validProposedName:(id)arg1 ;
+(id)fontLibraries;
+(id)libraryWithName:(id)arg1 ;
+(id)fontDomains;
+(id)_newLibraryPathForName:(id)arg1 ;
+(void)_readLibrariesFromDiskIfNecessary;
+(void)removeLibrary:(id)arg1 ;
+(int)libraryForContainer:(id)arg1 ;
+(id)fontLibraryDirectory;
+(id)newName;
+(void)initialize;
-(id)installFiles:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)_installFiles:(id)arg1 ;
-(long long)domainRef;
-(id)renameWithName:(id)arg1 ;
-(void)_modelDidInitialize:(id)arg1 ;
-(id)fontFiles;
-(id)unsortedFiles;
-(void)_internalFontsDidChange:(id)arg1 ;
-(void)_setPersistentFilePath:(id)arg1 ;
-(id)_persistentFilePath;
-(char)_savePersistentFile:(id)arg1 ;
-(char)_deletePersistentFile:(id)arg1 ;
-(long long)_libRef;
-(id)_initWithContentsOfFile:(id)arg1 ;
-(void)_addFileSet:(id)arg1 ;
-(void)_setFileSet:(id)arg1 ;
-(void)_setFiles:(id)arg1 ;
-(void)_removeFiles:(id)arg1 ;
-(id)appleScriptID;
-(id)appleScriptName;
-(id)appleScriptLocalizedName;
-(id)appleScriptContainers;
-(id)applescriptDescription;
-(void)setAppleScriptEnabled:(id)arg1 ;
-(void)setAppleScriptName:(id)arg1 ;
-(id)removeFiles:(id)arg1 ;
-(unsigned)scope;
-(void)_setName:(id)arg1 ;
-(id)faces;
-(void)takeValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)image;
-(char)isEnabled;
-(id)key;
-(id)objectSpecifier;
-(long long)compare:(id)arg1 ;
-(id)alternateImage;
-(id)initWithName:(id)arg1 ;
-(id)remove;
-(long long)order;
-(id)folder;
-(unsigned)flags;
-(void)_enable;
-(void)_disable;
-(id)add;
@end
