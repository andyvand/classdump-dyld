/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <Dock/DOCKFolder.h>
#import <Dock/DOCKStackCollapsedDataSource.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface DOCKDynamicFolder : DOCKFolder <DOCKStackCollapsedDataSource> {

	NSMutableDictionary* _collapsedCache;
	char _needsToInvalidateDataSource;
	NSMutableArray* _menuListCleanup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stackDidClose;
-(void)showStackAsMenu:(char)arg1 ;
-(unsigned long long)numberOfCollapsedStackItems;
-(id)collapsedStackValueForKey:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)arrangementChanged;
-(void)invalidateCollapseCache;
-(id)initWithDirectory:(id)arg1 folderTile:(id)arg2 ;
-(void)_updateFile:(id)arg1 ;
-(id)_folderTile;
-(void)_directoryNameChanged:(id)arg1 ;
-(void)_directoryDeleted:(id)arg1 ;
-(void)_iconChanged:(id)arg1 ;
-(void)_filesChanged:(id)arg1 ;
-(void)_filesAdded:(id)arg1 ;
-(void)_filesRemoved:(id)arg1 ;
-(void)_removeDirectoryObservers;
-(void)_sortFilesAndInvalidateDataSource;
-(void)_setNeedsToInvalidateDataSource;
-(void)_addFiles:(id)arg1 toMenu:(OpaqueMenuRefRef)arg2 withArrangement:(int)arg3 ;
-(void)_setCollapsedPreviewImage:(id)arg1 atIndex:(unsigned long long)arg2 withIconSize:(unsigned long long)arg3 forFile:(id)arg4 cache:(char)arg5 ;
-(void)_fetchIconForFile:(id)arg1 atIndex:(unsigned long long)arg2 withSize:(unsigned long long)arg3 andScaleFactor:(float)arg4 ;
-(void)_addsubmenu:(OpaqueMenuRefRef)arg1 forFile:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
@end

