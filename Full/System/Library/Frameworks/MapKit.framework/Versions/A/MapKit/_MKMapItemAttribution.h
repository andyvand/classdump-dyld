/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOMapItemAttribution, NSString, NSArray;

@interface _MKMapItemAttribution : NSObject {

	GEOMapItemAttribution* _geoAttribution;

}

@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSArray * attributionURLs; 
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) char requiresAttributionInCallout; 
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(id)providerLogoImage;
-(NSString *)providerName;
-(NSArray *)attributionURLs;
-(NSArray *)attributionApps;
-(char)requiresAttributionInCallout;
@end
