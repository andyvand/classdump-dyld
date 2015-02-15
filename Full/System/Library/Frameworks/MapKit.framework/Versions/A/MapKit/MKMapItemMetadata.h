/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOBusiness, MKYelpDeal, NSMutableDictionary, NSString;

@interface MKMapItemMetadata : NSObject {

	char _hasCheckedForYelpDeal;
	GEOBusiness* _business;
	MKYelpDeal* _yelpDeal;
	NSMutableDictionary* _imageCache;

}

@property (nonatomic,readonly) GEOBusiness * business;                      //@synthesize business=_business - In the implementation block
@property (nonatomic,retain) MKYelpDeal * yelpDeal;                         //@synthesize yelpDeal=_yelpDeal - In the implementation block
@property (assign,nonatomic) char hasCheckedForYelpDeal;                    //@synthesize hasCheckedForYelpDeal=_hasCheckedForYelpDeal - In the implementation block
@property (nonatomic,readonly) NSString * yelpID; 
@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(id)initWithBusiness:(id)arg1 ;
-(NSString *)yelpID;
-(void)addImage:(id)arg1 forURL:(id)arg2 ;
-(id)imageForURL:(id)arg1 ;
-(MKYelpDeal *)yelpDeal;
-(void)setYelpDeal:(MKYelpDeal *)arg1 ;
-(char)hasCheckedForYelpDeal;
-(void)setHasCheckedForYelpDeal:(char)arg1 ;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)imageCache;
-(GEOBusiness *)business;
@end
