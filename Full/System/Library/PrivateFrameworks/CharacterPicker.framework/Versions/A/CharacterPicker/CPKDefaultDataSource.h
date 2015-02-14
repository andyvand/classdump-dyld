/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <CharacterPicker/CPKDataSource.h>

@class NSString;

@interface CPKDefaultDataSource : NSObject <CPKDataSource> {

	id _contents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)favorites;
+(id)recents;
+(void*)_classGlobalBufferPtr;
+(SCD_Struct_CP6*)_classGlobalPtr;
+(id)_dataCategories;
+(void)_prepareCategories;
+(id)_expandNestedDataArray:(id)arg1 ;
+(void)_cachedDefaultDataArrayOrClear:(char)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)_prefixCategories;
+(void)changeActiveCategories;
+(void)setRecents:(id)arg1 ;
+(void)setFavorites:(id)arg1 ;
+(id)standardItemArrayFromArray:(id)arg1 ;
+(long long)indexInArray:(id)arg1 fromStandardItemIndex:(long long)arg2 ;
-(char)_hasCachedData;
-(void)prepareDataUsingBlock:(/*^block*/id)arg1 ;
-(long long)numberOfCategories;
-(id)titleForCategory:(long long)arg1 ;
-(id)descriptionForCategory:(long long)arg1 ;
-(long long)initialSelectedCategoryIndex;
-(id)storageIdentifier;
-(long long)numberOfCharactersInCategory:(long long)arg1 ;
-(id)characterAtIndex:(long long)arg1 inCategory:(long long)arg2 ;
-(id)characterFromIdentifier:(id)arg1 ;
-(id)_entityArrayInCategory:(long long)arg1 ;
-(char)_shouldOmitCharacter:(id)arg1 ;
-(void)dealloc;
@end

