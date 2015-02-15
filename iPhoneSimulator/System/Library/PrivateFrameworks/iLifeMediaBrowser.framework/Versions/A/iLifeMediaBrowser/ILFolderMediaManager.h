/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/ILMediaManager.h>

@class NSMutableArray, NSLock, NSString;

@interface ILFolderMediaManager : ILMediaManager {

	NSMutableArray* _folderPaths;
	NSLock* _folderPathsLock;
	NSString* _currentLoadPath;
	char _shouldAbortCurrentLoad;
	id _reserved4;
	id _reserved5;
	id _reserved6;

}
+(id)sharedMediaManager;
-(void)addFolderPaths:(id)arg1 ;
-(void)removeFolderPath:(id)arg1 ;
-(void)addFolderPath:(id)arg1 ;
-(void)removeFolderPaths:(id)arg1 ;
-(void)removeAllFolderPaths;
-(id)init;
-(void)dealloc;
-(id)_init;
@end

