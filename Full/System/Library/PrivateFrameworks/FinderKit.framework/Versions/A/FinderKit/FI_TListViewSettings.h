/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@class NSMutableDictionary, NSString;

@interface FI_TListViewSettings : NSObject {

	NSMutableDictionary* _settings;
	NSMutableDictionary* _columnSettings;

}

@property (nonatomic,retain) NSMutableDictionary * settings;                    //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) double iconSize; 
@property (assign,nonatomic) double textSize; 
@property (assign,nonatomic) BOOL useRelativeDates; 
@property (assign,nonatomic) BOOL calculateAllSizes; 
@property (assign,nonatomic) BOOL showIconPreview; 
@property (assign,nonatomic) NSString * sortColumn; 
@property (assign,nonatomic) BOOL userDidChangeSort; 
@property (nonatomic,retain) NSMutableDictionary * columnSettings;              //@synthesize columnSettings=_columnSettings - In the implementation block
@property (assign,nonatomic) CGPoint scrollPosition; 
+(id)settingsFromViewOptions:(id)arg1 ;
+(id)settingsFromPList:(id)arg1 ;
+(BOOL)columnIsSpotlightAttribute:(id)arg1 ;
+(id)defaultSettingsForNewUser;
+(id)settingsFromExtendedSettings:(id)arg1 ;
+(id)backwardCompatibleSettings:(id)arg1 ;
+(id)extendedSettings:(id)arg1 ;
+(id)settingsForNode:(TFENode*)arg1 ;
+(BOOL)useExtendedSettings:(id)arg1 ;
+(id)columnDictionaryFromColumnArray:(vector<Browser::ColumnDesc, std::__1::allocator<Browser::ColumnDesc> >*)arg1 ;
+(id)columnDictionaryForWidth:(long long)arg1 index:(long long)arg2 sortOrder:(BOOL)arg3 visibility:(BOOL)arg4 ;
+(BOOL)isSnowLeopardColumn:(id)arg1 ;
+(id)settingsFromBrowserSettings:(TListBrowserSettings*)arg1 ;
+(BOOL)columnIsBuiltInColumn:(id)arg1 ;
-(void)setSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)settings;
-(NSString *)sortColumn;
-(void)setSortColumn:(NSString *)arg1 ;
-(double)textSize;
-(void)setVisibleForColumn:(id)arg1 visible:(BOOL)arg2 ;
-(void)setSortOrderAscendingForColumn:(id)arg1 ascending:(BOOL)arg2 ;
-(BOOL)showIconPreview;
-(void)setShowIconPreview:(BOOL)arg1 ;
-(NSMutableDictionary *)columnSettings;
-(unsigned long long)widthForColumn:(id)arg1 ;
-(unsigned long long)indexForColumn:(id)arg1 ;
-(BOOL)calculateAllSizes;
-(void)setColumnsOrder:(id)arg1 ;
-(void)addSpotlightListViewColumn:(id)arg1 ;
-(id)columnNamesInOrder;
-(void)setCalculateAllSizes:(BOOL)arg1 ;
-(void)setColumnSettings:(NSMutableDictionary *)arg1 ;
-(BOOL)visibleForColumn:(id)arg1 ;
-(BOOL)userDidChangeSort;
-(void)addDateAddedSettingsIfNeeded:(TFENode*)arg1 ;
-(void)setWidthForColumn:(id)arg1 width:(unsigned long long)arg2 ;
-(id)columnIDStringAtIndex:(unsigned long long)arg1 ;
-(BOOL)sortOrderAscendingForColumn:(id)arg1 ;
-(void)setUserDidChangeSort:(BOOL)arg1 ;
-(id)initWithListBrowserSettings:(TListBrowserSettings*)arg1 ;
-(id)initWithPList:(id)arg1 ;
-(unsigned long long)checkIntegrity:(const TFENode*)arg1 ;
-(BOOL)checkNumberSettingForKey:(id)arg1 lowValue:(double)arg2 highValue:(double)arg3 ;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(void)setScrollPosition:(CGPoint)arg1 ;
-(CGPoint)scrollPosition;
-(void)setTextSize:(double)arg1 ;
-(void)dealloc;
-(double)iconSize;
-(void)setUseRelativeDates:(BOOL)arg1 ;
-(void)setIconSize:(double)arg1 ;
-(BOOL)useRelativeDates;
-(unsigned long long)columnCount;
@end

