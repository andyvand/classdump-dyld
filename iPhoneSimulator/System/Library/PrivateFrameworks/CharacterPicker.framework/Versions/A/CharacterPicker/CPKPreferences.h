/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPKDefaultDataSource;

@interface CPKPreferences : NSObject {

	CPKDefaultDataSource* _defaultSource;

}
+(id)sharedPreferences;
-(id)defaultDataSource;
-(void)addRecent:(id)arg1 ofDataSource:(id)arg2 ;
-(void)loadRecentsAndFavoritesForDataSource:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)loadCategoryData:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)recentsOfDataSourceSync:(id)arg1 ;
-(void)setRecentsSync:(id)arg1 ofDataSource:(id)arg2 ;
-(id)favoritesOfDataSourceSync:(id)arg1 ;
-(void)setFavoritesSync:(id)arg1 ofDataSource:(id)arg2 ;
-(void)_characterViewerPrefsChanged:(id)arg1 ;
-(id)_identifierOfDataSource:(id)arg1 ;
-(id)_convertXPCCategoryDataDict:(void*)arg1 ;
-(void)clearRecentsOfDataSource:(id)arg1 ;
-(void)addRecentSync:(id)arg1 ofDataSource:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

