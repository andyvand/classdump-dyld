/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenSaver/ScreenSaver-Structs.h>
@class NSMutableDictionary, ILMediaManager, NSMutableArray;

@interface ScreenSaverModules : NSObject {

	NSMutableDictionary* _modules;
	NSMutableDictionary* _times;
	unsigned long long _searchDomains;
	ILMediaManager* _apertureManager;
	ILMediaManager* _iPhotoManager;
	NSMutableArray* _userSelectedPictureFolderModules;
	NSMutableArray* _mobileMeGalleryModules;
	NSMutableArray* _rssFeedModules;
	char _iPhotoManagerFinished;
	char _apertureManagerFinished;

}
+(id)sharedInstance;
-(char)modulePathIsUserSelectedPicturesFolderPath:(id)arg1 ;
-(void)loadUserSelectedFolderModules;
-(void)findModulesWithOrder:(id)arg1 forceRebuild:(char)arg2 ;
-(id)basicModuleName;
-(id)moduleWithName:(id)arg1 ;
-(void)addUserSelectedPicturesFolderModule:(id)arg1 ;
-(void)addMobileMeGalleryModule:(id)arg1 ;
-(void)addRSSFeedModule:(id)arg1 ;
-(id)_directoriesInSearchDomain;
-(char)modulePathIsAppleModule:(id)arg1 ;
-(char)modulePathIsPictureModule:(id)arg1 ;
-(void)_dropCrashReporterBreadCrumbForModule:(id)arg1 ;
-(void)enableShuffleItemsForRSS;
-(id)userSelectedPictureFolderModulesForPrefs;
-(void)loadMobileMeGalleryModules;
-(void)loadRSSFeedModules;
-(void)_rebuildIPhotoAlbums;
-(void)_rebuildApertureAlbums;
-(id)moduleNames;
-(void)_checkIPhotoLoading;
-(void)_finishIPhotoLoading;
-(void)_checkApertureLoading;
-(void)_finishApertureLoading;
-(unsigned long long)moduleSearchDomains;
-(void)setModuleSearchDomains:(unsigned long long)arg1 ;
-(void)refreshRelocatableModules;
-(char)modulePathIsIPhotoAlbum:(id)arg1 ;
-(char)modulePathIsApertureProject:(id)arg1 ;
-(char)modulePathIsApertureLibrary:(id)arg1 ;
-(char)modulePathIsDotMacSlides:(id)arg1 ;
-(char)modulePathIsRSSPictures:(id)arg1 ;
-(id)basicModule;
-(id)slideShowModuleName;
-(id)findModuleWithName:(id)arg1 ;
-(id)findAllModules;
-(id)pathForModuleName:(id)arg1 ;
-(void)addModule:(id)arg1 ;
-(id)sortedModulesForType:(id)arg1 ;
-(id)loadModule:(id)arg1 frame:(CGRect)arg2 isPreview:(char)arg3 ;
-(void)removeUserSelectedPicturesFolderModule:(id)arg1 ;
-(void)removeMobileMeGalleryModule:(id)arg1 ;
-(void)enableMobileMeGalleryModule:(id)arg1 exclusive:(char)arg2 ;
-(id)mobileMeGalleryModuleForMemberName:(id)arg1 ;
-(void)removeRSSFeedModule:(id)arg1 ;
-(void)enableRSSFeedModule:(id)arg1 exclusive:(char)arg2 ;
-(Class)classForModule:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)browser:(id)arg1 selectRow:(long long)arg2 inColumn:(long long)arg3 ;
-(void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 ;
-(long long)browser:(id)arg1 numberOfRowsInColumn:(long long)arg2 ;
@end

