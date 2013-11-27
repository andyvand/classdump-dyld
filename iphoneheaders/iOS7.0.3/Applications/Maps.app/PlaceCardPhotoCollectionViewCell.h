/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol _PlaceCardPhotoCollectionViewCellDelegate;
@class PlaceCardPhotoCollectionView, GEOBusiness, SearchResult, ;

@interface PlaceCardPhotoCollectionViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {

	PlaceCardPhotoCollectionView* _photoGrid;
	GEOBusiness* _business;
	SearchResult* _searchResult;
	<_PlaceCardPhotoCollectionViewCellDelegate>* _delegate;

}

@property (nonatomic,retain) GEOBusiness * business;                                              //@synthesize business=_business - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                         //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) <_PlaceCardPhotoCollectionViewCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(void)setSearchResult:(id)arg1 ;
-(void)reloadPhotos;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)delegate;
-(void)updateConstraints;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)business;
-(void)setBusiness:(id)arg1 ;
-(id)searchResult;
@end
