/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPKDataSource;
@class NSString, NSArray, NSMutableArray;

@interface CPKDataProvider : NSObject {

	id<CPKDataSource> _dataSource;
	NSString* _dataSourceIdentifier;
	NSArray* _favorites;
	NSMutableArray* _recents;
	NSArray* _searchResults;
	long long _searchCategoryIndex;

}

@property (readonly) id<CPKDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * searchResults;              //@synthesize searchResults=_searchResults - In the implementation block
@property (readonly) NSArray * favorites;                          //@synthesize favorites=_favorites - In the implementation block
@property (readonly) NSArray * recents;                            //@synthesize recents=_recents - In the implementation block
+(long long)numberOfCharacterColumns;
+(long long)numberOfCharacterRows;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(void)loadRecentsAndFavoritesUsingBlock:(/*^block*/id)arg1 ;
-(long long)numberOfCategories;
-(id)titleForCategory:(long long)arg1 ;
-(id)rawTitleForCategory:(long long)arg1 ;
-(id)descriptionForCategory:(long long)arg1 ;
-(long long)initialSelectedCategoryIndex;
-(id)storageIdentifier;
-(void)didSelectedEntity:(id)arg1 ;
-(id)allCharactersDictionary;
-(long long)numberOfCharactersInCategory:(long long)arg1 ;
-(id)characterAtIndex:(long long)arg1 inCategory:(long long)arg2 ;
-(void)_displayCountOfRecents:(long long*)arg1 favorites:(long long*)arg2 ;
-(char)_isSystemCategory:(long long)arg1 ;
-(NSArray *)favorites;
-(NSArray *)recents;
-(void)dealloc;
-(id<CPKDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
@end

