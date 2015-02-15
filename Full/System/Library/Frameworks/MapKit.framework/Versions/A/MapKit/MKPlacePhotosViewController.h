/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/_MKUIViewController.h>
#import <MapKit/MKPlaceAttributionCellProvider.h>

@protocol MKPlaceCardPhotosControllerDelegate;
@class NSOperationQueue, MKMapItem, NSArray, NSCollectionViewItem, NSCollectionView, NSLayoutConstraint, NSString;

@interface MKPlacePhotosViewController : _MKUIViewController <MKPlaceAttributionCellProvider> {

	NSOperationQueue* _photoDownloadQueue;
	char _showAttribution;
	MKMapItem* mapItem;
	id<MKPlaceCardPhotosControllerDelegate> photosControllerDelegate;
	NSArray* _photos;
	NSCollectionViewItem* smallPhotoController;
	NSCollectionViewItem* bigPhotoController;
	NSCollectionView* photosView;
	NSLayoutConstraint* photoContainerLeftConstraint;

}

@property (nonatomic,retain) MKMapItem * mapItem; 
@property (assign,nonatomic,__weak) id<MKPlaceCardPhotosControllerDelegate> photosControllerDelegate; 
@property (nonatomic,retain) NSArray * photos;                                                                     //@synthesize photos=_photos - In the implementation block
@property (assign,nonatomic,__weak) NSCollectionViewItem * smallPhotoController; 
@property (assign,nonatomic,__weak) NSCollectionViewItem * bigPhotoController; 
@property (assign,nonatomic,__weak) NSCollectionView * photosView; 
@property (assign,nonatomic,__weak) NSLayoutConstraint * photoContainerLeftConstraint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char showAttribution;                                                                 //@synthesize showAttribution=_showAttribution - In the implementation block
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setPhotosControllerDelegate:(id<MKPlaceCardPhotosControllerDelegate>)arg1 ;
-(void)setShowAttribution:(char)arg1 ;
-(char)showAttribution;
-(id<MKPlaceCardPhotosControllerDelegate>)photosControllerDelegate;
-(NSCollectionView *)photosView;
-(NSCollectionViewItem *)smallPhotoController;
-(NSCollectionViewItem *)bigPhotoController;
-(void)_updatePhotos;
-(id)_photoAttributionString;
-(void)setSmallPhotoController:(NSCollectionViewItem *)arg1 ;
-(void)setBigPhotoController:(NSCollectionViewItem *)arg1 ;
-(void)setPhotosView:(NSCollectionView *)arg1 ;
-(NSLayoutConstraint *)photoContainerLeftConstraint;
-(void)setPhotoContainerLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(id)init;
-(void)viewDidLoad;
-(id)nibName;
-(id)nibBundle;
@end

