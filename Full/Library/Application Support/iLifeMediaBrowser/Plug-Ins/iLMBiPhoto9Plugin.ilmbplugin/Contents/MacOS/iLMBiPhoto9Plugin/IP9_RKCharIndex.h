/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhoto9Plugin.ilmbplugin/Contents/MacOS/iLMBiPhoto9Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBiPhoto9Plugin/IP9_RKModel.h>

@class ILMB_IPHOTO_HgRidList;

@interface IP9_RKCharIndex : IP9_RKModel {

	unsigned long long _character;
	ILMB_IPHOTO_HgRidList* _stringIds;
	char _isDirty;

}
+(id)charIndexesForString:(id)arg1 forDatabase:(id)arg2 ;
-(id)initWithCharacter:(unsigned long long)arg1 inDatabase:(id)arg2 ;
-(void)removeStringIds:(id)arg1 ;
-(void)saveStringIds;
-(char)addStringId:(unsigned long long)arg1 ;
-(void)cacheStringIds:(id)arg1 ;
-(unsigned long long)character;
-(void)cacheCharacter:(unsigned long long)arg1 ;
-(id)stringIds;
-(void)setIsDirty:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isDirty;
@end

