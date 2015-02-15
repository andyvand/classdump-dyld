/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMPlatformCore/IMPlatformCore-Structs.h>
#import <IMPlatformCore/IMCollectionViewGridLayout.h>

@class NSIndexPath;

@interface IMCollectionViewDrawerLayout : IMCollectionViewGridLayout {

	char _hasDrawer;
	NSIndexPath* _drawerTargetIndexPath;
	double _drawerHeight;

}

@property (nonatomic,retain) NSIndexPath * drawerTargetIndexPath;              //@synthesize drawerTargetIndexPath=_drawerTargetIndexPath - In the implementation block
@property (assign,nonatomic) char hasDrawer;                                   //@synthesize hasDrawer=_hasDrawer - In the implementation block
@property (assign,nonatomic) double drawerHeight;                              //@synthesize drawerHeight=_drawerHeight - In the implementation block
+(Class)layoutAttributesClass;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)adjustedLayoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)supportedSupplementaryViewKinds;
-(id)adjustedLayoutAttributesForSupplementaryViewOfkind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForElementAtPoint:(CGPoint)arg1 ;
-(void)applyUpdate:(id)arg1 ;
-(CGSize)contentFullSize;
-(void)_setDrawerTargetIndexPath:(id)arg1 withTransaction:(char)arg2 ;
-(NSIndexPath *)drawerTargetIndexPath;
-(void)setHasDrawer:(char)arg1 ;
-(char)hasDrawer;
-(void)_adjustLayoutAttribute:(id)arg1 toAccountForExpandedIndexPath:(id)arg2 ;
-(void)setDrawerTargetIndexPath:(NSIndexPath *)arg1 ;
-(double)drawerHeight;
-(void)setDrawerHeight:(double)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
@end
