/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemReviewsAttribution, NSArray;

@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution {

	GEOMapItemReviewsAttribution* _geoReviewsAttribution;

}

@property (nonatomic,readonly) NSArray * addReviewURLs; 
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(NSArray *)addReviewURLs;
-(id)urlsForReviewWithIdentifier:(id)arg1 ;
-(id)urlsForSelectedItemWithItems:(id)arg1 ;
@end

