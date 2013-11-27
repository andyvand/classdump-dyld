/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary, NSDictionary;

@interface UICollectionViewFlowLayout : UICollectionViewLayout {

	struct {
		unsigned delegateSizeForItem : 1;
		unsigned delegateReferenceSizeForHeader : 1;
		unsigned delegateReferenceSizeForFooter : 1;
		unsigned delegateInsetForSection : 1;
		unsigned delegateInteritemSpacingForSection : 1;
		unsigned delegateLineSpacingForSection : 1;
		unsigned delegateAlignmentOptions : 1;
		unsigned layoutDataIsValid : 1;
		unsigned delegateInfoIsValid : 1;
	}  _gridLayoutFlags;
	float _interitemSpacing;
	float _lineSpacing;
	CGSize _itemSize;
	CGSize _headerReferenceSize;
	CGSize _footerReferenceSize;
	UIEdgeInsets _sectionInset;
	id _data;
	CGSize _currentLayoutSize;
	NSMutableDictionary* _insertedItemsAttributesDict;
	NSMutableDictionary* _insertedSectionHeadersAttributesDict;
	NSMutableDictionary* _insertedSectionFootersAttributesDict;
	NSMutableDictionary* _deletedItemsAttributesDict;
	NSMutableDictionary* _deletedSectionHeadersAttributesDict;
	NSMutableDictionary* _deletedSectionFootersAttributesDict;
	int _scrollDirection;
	NSDictionary* _rowAlignmentsOptionsDictionary;
	CGRect _visibleBounds;

}

@property (setter=_setRowAlignmentsOptions:,nonatomic,retain) NSDictionary * _rowAlignmentOptions; 
@property (assign,nonatomic) float minimumLineSpacing;                                                          //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) float minimumInteritemSpacing;                                                     //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                                   //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) int scrollDirection; 
@property (assign,nonatomic) CGSize headerReferenceSize;                                                        //@synthesize headerReferenceSize=_headerReferenceSize - In the implementation block
@property (assign,nonatomic) CGSize footerReferenceSize;                                                        //@synthesize footerReferenceSize=_footerReferenceSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                                                         //@synthesize sectionInset=_sectionInset - In the implementation block
+(Class)invalidationContextClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setScrollDirection:(int)arg1 ;
-(void)setMinimumInteritemSpacing:(float)arg1 ;
-(void)setMinimumLineSpacing:(float)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)_layoutAttributesForItemsInRect:(CGRect)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)_fetchItemsInfo;
-(CGRect)_frameForHeaderInSection:(int)arg1 usingData:(id)arg2 ;
-(CGRect)_frameForFooterInSection:(int)arg1 usingData:(id)arg2 ;
-(CGRect)_frameForItemAtSection:(int)arg1 andRow:(int)arg2 usingData:(id)arg3 ;
-(id)layoutAttributesForHeaderInSection:(int)arg1 usingData:(id)arg2 ;
-(id)layoutAttributesForFooterInSection:(int)arg1 usingData:(id)arg2 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2 ;
-(CGSize)itemSize;
-(id)indexesForSectionHeadersInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(id)indexesForSectionFootersInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(id)indexPathsForItemsInRect:(CGRect)arg1 usingData:(id)arg2 ;
-(id)indexesForSectionHeadersInRect:(CGRect)arg1 ;
-(id)indexesForSectionFootersInRect:(CGRect)arg1 ;
-(id)layoutAttributesForHeaderInSection:(int)arg1 ;
-(id)layoutAttributesForFooterInSection:(int)arg1 ;
-(int)scrollDirection;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setHeaderReferenceSize:(CGSize)arg1 ;
-(void)setFooterReferenceSize:(CGSize)arg1 ;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(float)minimumLineSpacing;
-(float)minimumInteritemSpacing;
-(CGSize)headerReferenceSize;
-(CGSize)footerReferenceSize;
-(UIEdgeInsets)sectionInset;
-(void)_updateDelegateFlags;
-(void)_getSizingInfos;
-(void)_updateItemsLayout;
-(id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForHeaderInInsertedSection:(int)arg1 ;
-(id)initialLayoutAttributesForFooterInInsertedSection:(int)arg1 ;
-(id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForHeaderInDeletedSection:(int)arg1 ;
-(id)finalLayoutAttributesForFooterInDeletedSection:(int)arg1 ;
-(CGSize)synchronizeLayout;
-(void)_invalidateButKeepDelegateInfo;
-(void)_invalidateButKeepAllInfo;
-(void)_setRowAlignmentsOptions:(id)arg1 ;
-(id)_rowAlignmentOptions;
@end
