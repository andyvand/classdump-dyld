/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSNotificationCenter, NSArray, NSRunningApplication;

@interface NSWorkspace : NSObject {

	NSNotificationCenter* notificationCenter;

}

@property (readonly) char accessibilityDisplayShouldIncreaseContrast; 
@property (readonly) char accessibilityDisplayShouldDifferentiateWithoutColor; 
@property (readonly) char accessibilityDisplayShouldReduceTransparency; 
@property (readonly) NSNotificationCenter * notificationCenter; 
@property (copy,readonly) NSArray * fileLabels; 
@property (copy,readonly) NSArray * fileLabelColors; 
@property (readonly) NSRunningApplication * frontmostApplication; 
@property (readonly) NSRunningApplication * menuBarOwningApplication; 
+(id)safari_userDesktopDirectory;
+(id)sharedWorkspace;
-(id)internetLocationFileExtensionForURL:(id)arg1 ;
-(char)fileHasQuarantineAttributesAtPath:(id)arg1 ;
-(char)isFilePackageOrAliasToFilePackageAtPath:(id)arg1 ;
-(id)createZipArchive:(id)arg1 ;
-(char)safari_revealFile:(id)arg1 ;
-(char)removeFileFromQuarantineAtPath:(id)arg1 ;
-(id)URLForInternetLocationFileAtPath:(id)arg1 ;
-(char)safari_haveiTunes;
-(char)safari_haveQuicktimePlayer;
-(char)safari_haveiPhoto;
-(char)openURL:(id)arg1 withApplicationWithBundleIdentifier:(id)arg2 ;
-(void)sendNotificationsForFinishedDownloadAtPath:(id)arg1 ;
-(char)launchApplicationWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)pathForApplicationForURL:(id)arg1 ;
-(char)URL:(id*)arg1 title:(id*)arg2 forInternetLocationFileAtPath:(id)arg3 ;
-(id)createInternetLocationFileInDirectory:(id)arg1 withURL:(id)arg2 title:(id)arg3 ;
-(char)openWebClipWidgetWithURL:(id)arg1 positionWidgetAtPoint:(CGPoint)arg2 ;
-(char)openURL:(id)arg1 withApplicationAtPath:(id)arg2 ;
-(id)downloadAssessmentForPath:(id)arg1 ;
-(char)moveFileToTrash:(id)arg1 ;
-(id)pathForApplicationWithBundleIdentifier:(id)arg1 ;
-(id)infoForLaunchedApplicationWithBundleID:(id)arg1 preferringPath:(id)arg2 ;
-(id)_internetLocationFileExtensions;
-(id)_internetLocationFileExtensionsArray;
-(char)isInternetLocationFileAtPath:(id)arg1 ;
-(id)launchApplicationAtURL:(id)arg1 event:(id)arg2 ;
-(id)infoForLaunchedApplicationAtPath:(id)arg1 ;
-(id)iconPathForBundleID:(id)arg1 ;
-(id)_currentApplication;
-(void)dealloc;
-(char)accessibilityDisplayShouldIncreaseContrast;
-(char)accessibilityDisplayShouldDifferentiateWithoutColor;
-(char)accessibilityDisplayShouldReduceTransparency;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(NSRunningApplication *)frontmostApplication;
-(void)_postSessionNotificationIfNeeded;
-(NSNotificationCenter *)notificationCenter;
-(void)_applicationStatusChange:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)typeOfFile:(id)arg1 error:(id*)arg2 ;
-(char)filenameExtension:(id)arg1 isValidForType:(id)arg2 ;
-(id)preferredFilenameExtensionForType:(id)arg1 ;
-(char)openFile:(id)arg1 ;
-(char)type:(id)arg1 conformsToType:(id)arg2 ;
-(id)localizedDescriptionForType:(id)arg1 ;
-(void)slideImage:(id)arg1 from:(CGPoint)arg2 to:(CGPoint)arg3 ;
-(char)launchAppWithBundleIdentifier:(id)arg1 options:(unsigned long long)arg2 additionalEventParamDescriptor:(id)arg3 launchIdentifier:(id*)arg4 ;
-(id)iconForFile:(id)arg1 ;
-(id)iconForFileType:(id)arg1 ;
-(void)noteFileSystemChanged:(id)arg1 ;
-(void)_sendFileSystemChangedNotificationForSavePanelInfo:(id)arg1 ;
-(void)activateFileViewerSelectingURLs:(id)arg1 ;
-(char)_volumeSupportsLongFilenamesAtPath:(id)arg1 ;
-(id)launchApplicationAtURL:(id)arg1 options:(unsigned long long)arg2 configuration:(id)arg3 error:(id*)arg4 ;
-(char)openURLs:(id)arg1 withAppBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 additionalEventParamDescriptor:(id)arg4 launchIdentifiers:(id*)arg5 ;
-(char)openURL:(id)arg1 ;
-(char)selectFile:(id)arg1 inFileViewerRootedAtPath:(id)arg2 ;
-(char)isFilePackageAtPath:(id)arg1 ;
-(id)_iconForOSType:(unsigned)arg1 ;
-(id)_defaultDocIcon;
-(id)URLForApplicationWithBundleIdentifier:(id)arg1 ;
-(CFStringRef)_launchServicesArchictureStringFromNSBundleExecutableArchitecture:(long long)arg1 ;
-(id)_openURLs:(id)arg1 withApplicationAtURL:(id)arg2 options:(unsigned long long)arg3 configuration:(id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)absolutePathForAppBundleWithIdentifier:(id)arg1 ;
-(char)_openURLs:(id)arg1 withAppPath:(id)arg2 options:(unsigned long long)arg3 additionalEventParamDescriptor:(id)arg4 launchIdentifiers:(id*)arg5 ;
-(char)openFile:(id)arg1 withApplication:(id)arg2 andDeactivate:(char)arg3 ;
-(char)openFile:(id)arg1 withApplication:(id)arg2 ;
-(id)_notificationCenterWithoutTriggeringCreation;
-(id)_fullPathForService:(id)arg1 ;
-(id)fullPathForApplication:(id)arg1 ;
-(char)_openFile:(id)arg1 withApplication:(id)arg2 asService:(char)arg3 andWait:(char)arg4 andDeactivate:(char)arg5 ;
-(char)launchApplication:(id)arg1 ;
-(id)_iconForOSType:(unsigned)arg1 creator:(unsigned)arg2 ;
-(char)_sendFinderAppleEvent:(unsigned)arg1 class:(unsigned)arg2 file:(id)arg3 ;
-(char)_sendFinderAppleEvent:(unsigned)arg1 class:(unsigned)arg2 URLs:(id)arg3 followSymlinks:(char)arg4 ;
-(id)launchedApplications;
-(id)_locationsForApplications;
-(void)_fileOperationCompleted:(long long)arg1 ;
-(char)_fileOperation:(long long)arg1 source:(id)arg2 destination:(id)arg3 files:(id)arg4 ;
-(char)_workspaceSessionIsActive;
-(id)_copyApplicationDictionaryFromLSDictionary:(CFDictionaryRef)arg1 constructingAppFromCorpse:(char)arg2 ;
-(char)_volumeSupportsLongFilenamesForRefNum:(short)arg1 ;
-(id)mountedRemovableMedia;
-(char)_volumeIsEjectableForRefNum:(short)arg1 ;
-(id)_getKVOHelperForKeyPath:(id)arg1 creating:(char)arg2 ;
-(id)URLForApplicationToOpenURL:(id)arg1 ;
-(id)openURL:(id)arg1 options:(unsigned long long)arg2 configuration:(id)arg3 error:(id*)arg4 ;
-(id)openURLs:(id)arg1 withApplicationAtURL:(id)arg2 options:(unsigned long long)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(id)iconForFiles:(id)arg1 ;
-(char)openTempFile:(id)arg1 ;
-(char)openFile:(id)arg1 fromImage:(id)arg2 at:(CGPoint)arg3 inView:(id)arg4 ;
-(char)_launchService:(id)arg1 andWait:(char)arg2 ;
-(char)launchApplication:(id)arg1 showIcon:(char)arg2 autolaunch:(char)arg3 ;
-(char)setIcon:(id)arg1 forFile:(id)arg2 options:(unsigned long long)arg3 ;
-(char)getInfoForFile:(id)arg1 application:(id*)arg2 type:(id*)arg3 ;
-(long long)extendPowerOffBy:(long long)arg1 ;
-(char)setDesktopImageURL:(id)arg1 forScreen:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)desktopImageURLForScreen:(id)arg1 ;
-(id)desktopImageOptionsForScreen:(id)arg1 ;
-(char)showSearchResultsForQueryString:(id)arg1 ;
-(void)duplicateURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)recycleURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)performFileOperation:(id)arg1 source:(id)arg2 destination:(id)arg3 files:(id)arg4 tag:(long long*)arg5 ;
-(void)noteFileSystemChanged;
-(char)fileSystemChanged;
-(void)noteUserDefaultsChanged;
-(char)userDefaultsChanged;
-(void)findApplications;
-(void)hideOtherApplications;
-(id)activeApplication;
-(char)getFileSystemInfoForPath:(id)arg1 isRemovable:(char*)arg2 isWritable:(char*)arg3 isUnmountable:(char*)arg4 description:(id*)arg5 type:(id*)arg6 ;
-(id)mountedLocalVolumePaths;
-(id)mountNewRemovableMedia;
-(void)checkForRemovableMedia;
-(char)unmountAndEjectDeviceAtPath:(id)arg1 ;
-(char)unmountAndEjectDeviceAtURL:(id)arg1 error:(id*)arg2 ;
-(char)openFile:(id)arg1 operation:(int)arg2 ;
-(void)unhideApplication;
-(oneway void)startProfiling;
-(oneway void)stopProfiling;
-(oneway void)writeProfilingDataToPath:(id)arg1 ;
-(oneway void)resetProfiling;
-(NSArray *)fileLabelColors;
-(NSArray *)fileLabels;
-(id)preferredFileNameExtensionForType:(id)arg1 ;
-(char)fileNameExtension:(id)arg1 isValidForType:(id)arg2 ;
-(id)_URLForDuplicatingFileAtURL:(id)arg1 ;
-(id)runningApplications;
-(id)unterminatedApplications;
-(id)automaticallyTerminatedApplications;
-(NSRunningApplication *)menuBarOwningApplication;
@end

