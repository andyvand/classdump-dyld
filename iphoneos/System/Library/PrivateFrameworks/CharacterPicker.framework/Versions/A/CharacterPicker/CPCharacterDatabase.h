/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CharacterPicker/CharacterPicker-Structs.h>
@class NSDictionary;

@interface CPCharacterDatabase : NSObject {

	sqlite3Ref _charDatabase;
	sqlite3Ref _relatedCharDatabase;
	NSDictionary* _languageInfo;

}
+(id)sharedDatabase;
-(void*)createXPCDictionaryForCharacterInfo:(id)arg1 ;
-(sqlite3Ref)_openDatabase:(id)arg1 ;
-(id)searchCharacterInfo:(id)arg1 ;
-(id)_hanLanguageInfo;
-(void*)createXPCArrayForSearchString:(id)arg1 maxCount:(long long)arg2 ;
-(void*)createXPCArrayForRelatedCharacters:(id)arg1 maxCount:(long long)arg2 ;
-(id)languageForFieldTag:(id)arg1 ;
-(id)tagsForLanguage:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

