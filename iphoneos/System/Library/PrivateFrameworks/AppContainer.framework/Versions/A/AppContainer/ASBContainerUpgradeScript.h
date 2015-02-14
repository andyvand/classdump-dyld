/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ASBContainerUpgradeScript : NSObject {

	NSArray* _actions;

}
+(id)scriptWithActions:(id)arg1 ;
+(id)scriptWithContentsOfMigrationManifestAtURL:(id)arg1 error:(id*)arg2 ;
+(id)scriptToMigratePreferencesOfApplicationWithBundleId:(id)arg1 error:(id*)arg2 ;
+(id)scriptToMigrateAutosaveDocumentsForApplicationWithBundleId:(id)arg1 error:(id*)arg2 ;
+(id)scriptToSymlinkPreferenceDomains:(id)arg1 includeByHostPreferences:(char)arg2 error:(id*)arg3 ;
+(id)scriptToUnsymlinkPreferenceDomains:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithActions:(id)arg1 ;
-(id)scriptByAppendingScript:(id)arg1 ;
-(void)enumerateActionsUsingBlock:(/*^block*/id)arg1 ;
-(char)runScriptWithContainer:(id)arg1 ignoringActionFailures:(char)arg2 usingFileManager:(id)arg3 error:(id*)arg4 ;
@end

