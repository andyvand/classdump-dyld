/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ABDataSourcePluginIndex : NSObject {

	NSMutableDictionary* _bundlesByClass;
	NSMutableDictionary* _infoByClasses;
	char _didIndexPlugins;

}
+(void)initialize;
+(id)sharedInstance;
-(id)infoForClassName:(id)arg1 ;
-(id)availablePluginClasses;
-(char)loadBundleForClassName:(id)arg1 error:(id*)arg2 ;
-(void)indexPlugins;
-(id)bundleForClassName:(id)arg1 ;
-(id)sourceBundlePaths;
-(id)debugPluginPaths;
-(id)systemPluginPaths;
-(void)log:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

