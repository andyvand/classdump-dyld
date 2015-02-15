/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLPlace : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	NSURL* _pictureURL;
	NSString* _category;
	double _latitude;
	double _longitude;
	double _distance;

}

@property (retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (retain) NSURL * pictureURL;                 //@synthesize pictureURL=_pictureURL - In the implementation block
@property (retain) NSString * category;                //@synthesize category=_category - In the implementation block
@property (assign) double latitude;                    //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longitude;                   //@synthesize longitude=_longitude - In the implementation block
@property (assign) double distance;                    //@synthesize distance=_distance - In the implementation block
+(char)supportsSecureCoding;
-(void)setPictureURL:(NSURL *)arg1 ;
-(id)encodableProperties;
-(NSURL *)pictureURL;
-(double)distance;
-(void)setDistance:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
@end

