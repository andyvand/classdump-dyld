/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOPhoto, NSMapTable, NSOperationQueue, MKMapItem, NSString;

@interface MKInfoCardPhoto : NSObject {

	GEOPhoto* _geoPhoto;
	NSMapTable* _images;
	NSOperationQueue* _queue;
	MKMapItem* _mapItem;

}

@property (retain) NSOperationQueue * queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSString * uid; 
@property (__weak) MKMapItem * mapItem;                          //@synthesize mapItem=_mapItem - In the implementation block
+(id)keyPathsForValuesAffectingImageForPhotosView;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setImage:(id)arg1 forSize:(int)arg2 ;
-(id)imageForPhotoSize:(int)arg1 ;
-(id)initWithGEOPhoto:(id)arg1 ;
-(id)initWithGEOPhoto:(id)arg1 mapItem:(id)arg2 ;
-(char)resolveWithAcceptablePhotoSizes:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)imageForAcceptablePhotoSizes:(id)arg1 ;
-(id)imageForPhotosView;
-(NSOperationQueue *)queue;
-(NSString *)uid;
-(void)setQueue:(NSOperationQueue *)arg1 ;
@end

