/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhotoPlugin2012.ilmbplugin/Contents/MacOS/iLMBiPhotoPlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, ILMB_IPHOTO_2012_HgBlockQueue;

@interface ILMB_IPHOTO_2012_HgIncrementalUpgrader : NSObject {

	NSString* m_databasePath;
	NSMutableDictionary* m_usedDatabaseMgrsByName;
	long long m_upgradingFromMajorVersion;
	long long m_upgradingFromMinorVersion;
	ILMB_IPHOTO_2012_HgBlockQueue* m_backgroundWritingQueue;

}
-(void)readVersionNumbers;
-(id)databaseDirectoryPath;
-(id)dbMgrForDatabaseName:(id)arg1 ;
-(void)incrementalAddField:(id)arg1 toDatabase:(id)arg2 forEntity:(id)arg3 defaultValue:(id)arg4 createIndex:(char)arg5 ;
-(id)initWithDatabaseDirPath:(id)arg1 ;
-(long long)upgradingFromMinorVersion;
-(char)incrementalSchemaUpgrade;
-(void)incrementalDataUpgradeForDatabase:(id)arg1 ;
-(void)incrementalAddField:(id)arg1 toDatabase:(id)arg2 forEntity:(id)arg3 defaultValue:(id)arg4 ;
-(void)incrementalAddIndexForField:(id)arg1 toDatabase:(id)arg2 forEntity:(id)arg3 ;
-(long long)upgradingFromMajorVersion;
-(void)setUpgradingFromMajorVersion:(long long)arg1 minorVersion:(long long)arg2 ;
-(void)dealloc;
-(void)close;
@end

