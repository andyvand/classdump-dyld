/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/CWANQPElement.h>
#import <CoreWLAN/NSSecureCoding.h>
#import <CoreWLAN/NSCopying.h>

@class NSString, NSArray;

@interface CWANQPVenueName : CWANQPElement <NSSecureCoding, NSCopying> {

	long long _venueGroup;
	long long _venueType;
	NSString* _localizedVenueGroup;
	NSString* _localizedVenueType;
	NSArray* _venueNameList;

}

@property (assign,nonatomic) long long venueGroup;                      //@synthesize venueGroup=_venueGroup - In the implementation block
@property (assign,nonatomic) long long venueType;                       //@synthesize venueType=_venueType - In the implementation block
@property (nonatomic,copy) NSString * localizedVenueGroup;              //@synthesize localizedVenueGroup=_localizedVenueGroup - In the implementation block
@property (nonatomic,copy) NSString * localizedVenueType;               //@synthesize localizedVenueType=_localizedVenueType - In the implementation block
@property (nonatomic,copy) NSArray * venueNameList;                     //@synthesize venueNameList=_venueNameList - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3 ;
-(long long)venueGroup;
-(long long)venueType;
-(void)setVenueGroup:(long long)arg1 ;
-(void)setVenueType:(long long)arg1 ;
-(NSString *)localizedVenueGroup;
-(void)setLocalizedVenueGroup:(NSString *)arg1 ;
-(NSString *)localizedVenueType;
-(void)setLocalizedVenueType:(NSString *)arg1 ;
-(NSArray *)venueNameList;
-(void)setVenueNameList:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

